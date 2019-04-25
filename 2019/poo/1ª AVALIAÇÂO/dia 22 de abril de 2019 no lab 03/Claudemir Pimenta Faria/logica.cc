#include "logica.h"

void Logica::inicio(){
    int op;
    do{
        op = menu();
        switch(op){
            case 1:{
                CriarJogador();


                break;
            }
            case 2:{

                resultado();

                break;
            }
        }


    }while(op!=0);
    cout << "Obrigado por usar a aplicação" << endl;
}



int Logica::menu(){
    int op;

    cout << "----------Digite 1 para Criar um jogador------" << endl;
    cout << "----------Digite 2 para Resultado-------------" << endl;
    cout << "----------Digite 0 para Sair------------------" << endl;

    cin >> op;
    return op;
}

void Logica::CriarJogador(){
    int op;

    cout << "1-jogador do time A " << " (" << timeA.size() << " jogadores)" << endl;
    cout << "2-jogador do time B " << " (" << timeB.size() << " jogadores)" << endl;
    cin >> op;
    if(op == 1){
        timeA.push_back( NovoJogador() );
    }
    if(op == 2){
        timeB.push_back( NovoJogador() );
    }
}

Super_Jogador* Logica::NovoJogador(){
    int op;
    Leitura*l = new Leitura();
    cout << "1-Super Jogador" << endl;
    cout << "2-Jogador" << endl;

    cin >> op;
    if(op == 1){
        Super_Jogador* n = new Super_Jogador();
        cout << "Digite o Overall do jogador" << endl;
        n->setOverall(l->getInt() );
        cout << "Digite o Especialista do jogador (1-10)" << endl;
        n->setEspecialista(l->getInt() );
        return n;
    }
    if(op == 2){
        Super_Jogador* n = new Super_Jogador();
        cout << "Digite o Overall do jogador" << endl;
        n->setOverall(l->getInt() );
        n->setEspecialista(1);
        return n;
    }
}

void Logica::resultado(){
    int resA  = 0;
    int resB  = 0;

    vector <Super_Jogador*>::iterator it = timeA.begin();

    for(;it < timeA.end();it++){
        resA = resA + (*it)->Eficiencia();
    }

    it = timeB.begin();

    for(;it < timeB.end();it++){
        resB = resB + (*it)->Eficiencia();
    }
    cout << "Pontuação time A: " << resA << endl;
    cout << "Pontuação time B: " << resB << endl;

    if(resA > resB){
        cout << "Time A venceu" <<endl;
    }else if(resA < resB){
        cout << "Time B venceu" << endl;
    }else{
        cout << "Empate" << endl;
    }

}