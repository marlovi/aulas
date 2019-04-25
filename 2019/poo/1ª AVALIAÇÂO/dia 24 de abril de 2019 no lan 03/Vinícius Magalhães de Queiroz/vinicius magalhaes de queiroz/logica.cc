#include "logica.h"
#include <cstdlib>
#include <ctime>

void Logica::iniciar(){
    int op;
    do{
        op = menu1();
        switch(op){
            case 1:{
                int a;
                a = menu2();
                if(a == 1){
                    Jogador* jog = new Jogador();
                    string nome;
                    cout << "informe o nome do jogador para cadastra-lo" << endl;
                    cin.ignore();
                    getline(cin,nome);
                    cadastro1(jog, nome);
                    vetA.push_back(jog);
                } else if(a == 2){
                    SuperJogador* s = new SuperJogador();
                    string nome;
                    cout << "informe o nome do jogador para cadastra-lo" << endl;
                    cin.ignore();
                    getline(cin, nome);
                    cadastro2(s,nome);
                    vetB.push_back(s);
                }
                break;
            }
            case 2:{
                
                TimeEfic();
                break;
            }

        }
    } while(op != 0);
}

int Logica::menu1(){
    int op;
    cout << "Campeonato :) :) :) :) " << endl;
    cout << "1 -Cadastro de jogador" << endl;
    cout << "2 - Calcular eficiencia dos times e verificar que é o vencedor" << endl;
    

    cin >> op;
    return op;
}
int Logica::menu2(){
    int op;
    cout <<"1 - Jogador Normal" << endl
         <<"2 - SuperJOgador" << endl;

    cin>>op;
    return op;
}

void Logica::cadastro1(Jogador* jog, string nome){
    jog->setNome(nome);

    cout <<"Informe o Overall" << endl;
    long int a;    
    cin >> a;
    jog->setOverall(a);
    
    long int b;
    srand((unsigned)time(0));
    b = (rand() % (100 - 1 + 1) + 1) * jog->getOverall();
    jog->setEfic(b);
}

void Logica::cadastro2(SuperJogador* s, string nome){
    s->setNome(nome);

    cout << "Informe o Overall" << endl;
    long int a;
    cin >> a;
    s->setOverall(a);

    cout<< "informe a Especialidade do Jogador :):):):)" << endl;
    int x;
    cin>>x;
    s->setEspecialidade(x);

    long int b;
    srand((unsigned)time(0));
    b = (rand() % (100 - 1 + 1) + 1) * s->getOverall() * s->getEspecialidade();
    s->setEfic(b);
    
}
void Logica::TimeEfic(){

    long int b = 0;
    long int a = 0;
    for (vector<Jogador *>::iterator it = vetA.begin(); it != vetA.end(); it++){
       b = b +  (*it)->getEfic();

       
       (*it)->setTime(b);
       
       a = (*it)->getTime();
    }
    long int v = 0;
    long int l= 0;
    for (vector<SuperJogador *>::iterator it = vetB.begin(); it != vetB.end(); it++){
        v = v + (*it)->getEfic();

        cout << v<<endl;
        (*it)->setTime(v);

        l = (*it)->getTime();
    }
    cin.ignore();

    


    if(l>a){
        cout << " O time vencedor é o time B" << endl;
        cout << "Time A:  " << a << endl;
        cout << "TimeB:  " << l << endl;
    }else{
        cout << " O time vencedor é o time A" << endl;
        cout << "Time A:  " << a << endl;
        cout << "TimeB:  " << l << endl;
    }
    
}