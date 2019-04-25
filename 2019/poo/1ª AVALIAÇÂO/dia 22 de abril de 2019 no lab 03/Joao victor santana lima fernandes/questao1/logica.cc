#include "logica.h"

using namespace std;

Leitura * l = new Leitura();

void Logica::iniciar()
{
    int op;
    do
    {
        srand((unsigned)time(0));
        
        op = menu();
        procMenu(op);
    }
    while(op != 0);
}

int Logica::menu()
{
    cout << "\033[33;1m"
         << "=========================================================" 
         << "\033[0m" << endl;
    cout << "Para sair: .............................................0" << endl;
    cout << "Adicionar no time a: ...................................1" << endl;
    cout << "Adicionar no time b: ...................................2" << endl;
    cout << "Ver resultado: .........................................3" << endl;
    cout << "Informe a opcao: ";
    
    return l->getInt();
}

void Logica::menuA()
{
    cout << "Amenu" << endl;
    cout << "Adicionar jogador comum:.....................1" << endl;
    cout << "Adicionar super jogador:.....................2" << endl;
    cout << "Sair:........................................0" << endl;
    cout << "Informe a opcao: ";
    int o = l->getInt();
    procMenuA(o);
}

void Logica::procMenuA(const int &op)
{
    cin.ignore();
    switch(op)
    {
        case 0:{
            break;
        }
        case 1:{
            cout << "Informe o nome do jogador: ";
            Jogador * j = new Jogador(l->getString());
            cout << "Informe o Overall: ";
            j->setOverall(l->getFloat());
            cout << "A: " << j->getEficiencia() << endl;
            timeA.push_back(j);
            break;
        }
        case 2:{
            cout << "Informe o nome do jogador: ";
            Superjogador * j = new Superjogador(l->getString());
            cout << "Informe o Overall: ";
            j->setOverall(l->getFloat());
            cout << "Informe a especialidade: ";
            j->setEspecialidade(l->getInt());
            timeA.push_back(j);
            break;       
        }

        default:
        {
            cout << "Error" << endl;
            break;
        }
    }
}


void Logica::menuB()
{
    cout << "Bmenu" << endl;
    
    cout << "Adicionar jogador comum:.....................1" << endl;
    cout << "Adicionar super jogador:.....................2" << endl;
    cout << "Sair:........................................0" << endl;
    cout << "Informe a opcao: ";
    int o = l->getInt();
    procMenuB(o);
}

void Logica::procMenuB(const int &op)
{
    cin.ignore();
    switch(op)
    {
        case 0:{
            break;
        }
        case 1:{
            cout << "Informe o nome do jogador: ";
            Jogador * j = new Jogador(l->getString());
            cout << "Informe o Overall: ";
            j->setOverall(l->getFloat());
            timeB.push_back(j);
            break;
        }
        case 2:{
            cout << "Informe o nome do jogador: ";
            Superjogador * j = new Superjogador(l->getString());
            cout << "Informe o Overall: ";
            j->setOverall(l->getFloat());
            cout << "Informe a especialidade: ";
            j->setEspecialidade(l->getInt());
            timeB.push_back(j);
            break;
        }
        default:
        {
            cout << "Error" << endl;
            break;
        }
    }
}


void Logica::procMenu(const int &op)
{
    switch (op){
        case 0:{
            cout << "saindo" << endl;
            delete l;
            break;
        }
        case 1:
        {
            menuA();
            break;
            
        }
        case 2:
        {
            menuB();
            break;   
        }
        case 3:
        {
            resultadoFinal();
            break;
        }
        default:
        {
            cout << "Error" << endl;
            break;
        }
    }
}

float Logica::getTotalA()
{
    float total = 0;
    for(vector<Jogador *>::iterator it = timeA.begin(); it != timeA.end(); ++it)
    {
        if(dynamic_cast<Superjogador *>(*it) != 0)
        {
            Superjogador * j = dynamic_cast<Superjogador *>(*it);
            total+= j->getEficiencia();
        }else{
            total+=(*it)->getEficiencia();
        }
    }
    return (float) total;
}


float Logica::getTotalB()
{
    float total = 0;
    for(vector<Jogador *>::iterator it = timeB.begin(); it != timeB.end(); ++it)
    {
        if(dynamic_cast<Superjogador *>(*it) != 0)
        {
            Superjogador * j = dynamic_cast<Superjogador *>(*it);
            total+= j->getEficiencia();
        }else{
            total+=(*it)->getEficiencia();
        }
    }
    return (float) total;
}

void Logica::resultadoFinal()
{
    float a = getTotalA();
    float b = getTotalB();
    cout << "A> " << a << endl;
    cout << "B> " << b << endl;
    if(a > b)
    {
        cout << "Time A ganhou" << endl;
    } 
    else if(a == b)
    {
        cout << "Empatou" << endl;
    }
    else 
    {
        cout << "Time B ganhou" << endl;
    }
}