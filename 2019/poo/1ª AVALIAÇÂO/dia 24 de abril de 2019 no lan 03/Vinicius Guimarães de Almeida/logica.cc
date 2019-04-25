#include "logica.h"


int Logica::subMenu(){
    int sub_op;
    do{
        sub_op = menu();
        switch(sub_op){
            case 0:{
                cout << "Sair da Aplicação!" << endl;
            }break;
            case 1:{
            insereJogador();
            }break;
            case 2:{
                cout << ("funcionando..") << endl;
            }break;
        }
    }while(sub_op!=0);
}

int Logica::menu(){
    int op;
    cout << "---------- Menu ---------" << endl;
    cout << "Digite 0...... Para Sair " << endl;
    cout << "Digite 1...... Para Criar Jogador " << endl;
    cout << "Digite 2...... Para Cadastrar Time A " << endl;
    cout << "Digite 3...... Para Cadastrar Time B " << endl;
    cin >> op;
    return op;
}

void Logica::insereJogador(){
    Jogador *jogador = new Jogador();
    //Esqueci como usa o push_back
    //:(
}

void Logica::insereJogador(Jogador *jogador){

    Leitura *lj = new Leitura();

    vector<Jogador *>::iterator it;

    int over,habilidade;

    cout << "Digite o Nome: " << endl;
    (*it)->setNome(lj->getString());

    cout << "Digite o Overall: " << endl;
    (*it)->setOverall(lj->getInt());

    over = (*it)->getOverall();

    srand((unsigned)time(0));

    habilidade = ( rand()%(100-1+1) + 1) * over;
}

