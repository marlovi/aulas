#include <iostream>
#include "jogador.h"
#include <stdlib.h>
#include "superjogador.h"
#include <vector>

using namespace std;

void wait();
int menu();

int main(int argv, char** argc){
    system("clear||cls");
    vector <Jogador*> timeA;
    vector <Jogador*> timeB;

   SuperJogador* superjogador = new SuperJogador("sean");

    int op;

    while(1){
        op = menu();
        switch(op){
            case 1:{
                system("clear||cls");
                cout << "==== ADCIONANDO JOGADOR NO TIME A ====" << endl << endl;
                cout << "Insira o nome do Jogador: -> ";
                string nome;
                cin.ignore();
                getline(cin,nome);
                Jogador* novo = new Jogador(nome);

                cout << "Insira o overall do Jogador: -> ";
                int overall;
                cin >> overall;
                novo->setOverall(overall);

                int eficiencia = novo->calcular_eficiencia();
                novo->setEficiencia(eficiencia);

                timeA.push_back(novo);
                wait();
            }break;

            case 2:{
                system("clear||cls");
                cout << "==== ADCIONANDO JOGADOR NO TIME B ====" << endl << endl;
                cout << "Insira o nome do Jogador: -> ";
                string nome;
                cin.ignore();
                getline(cin,nome);
                Jogador* novo = new Jogador(nome);

                cout << "Insira o overall do Jogador: -> ";
                int overall;
                cin >> overall;
                novo->setOverall(overall);

                int eficiencia = novo->calcular_eficiencia();
                novo->setEficiencia(eficiencia);

                timeB.push_back(novo);
                wait();
            }break;

            case 3:{
                system("clear||cls");
                cout << "==== ADCIONANDO SUPER JOGADOR NO TIME A ====" << endl << endl;
                cout << "Insira o nome do Jogador: -> ";
                string nome;
                cin.ignore();
                getline(cin,nome);
                SuperJogador* novo = new SuperJogador(nome);

                cout << "Insira o overall do Jogador: -> ";
                int overall;
                cin >> overall;
                novo->setOverall(overall);

                cout << "Insira a especialidade do Jogador: -> ";
                int especialidade;
                cin >> especialidade;
                novo->setEspecialista(especialidade);

                int eficiencia = novo->calcular_eficiencia();
                novo->setEficiencia(eficiencia);

                timeA.push_back((Jogador*) novo);
                wait();
            }break;

            case 4:{
                system("clear||cls");
                cout << "==== ADCIONANDO SUPER JOGADOR NO TIME B ====" << endl << endl;
                cout << "Insira o nome do Jogador: -> ";
                string nome;
                cin.ignore();
                getline(cin,nome);
                SuperJogador* novo = new SuperJogador(nome);

                cout << "Insira o overall do Jogador: -> ";
                int overall;
                cin >> overall;
                novo->setOverall(overall);

                cout << "Insira a especialidade do Jogador: -> ";
                int especialidade;
                cin >> especialidade;
                novo->setEspecialista(especialidade);

                int eficiencia = novo->calcular_eficiencia();
                novo->setEficiencia(eficiencia);

                timeB.push_back((Jogador*) novo);
                wait();
            }break;

            case 5:{
                system("clear||cls");
                cout << "==== QUAL O TIME VENCEDOR ? ====" << endl << endl;
                vector <Jogador*> :: iterator it;

                int pontos_timeA = 0;
                int pontos_timeB = 0;

                for(it = timeA.begin(); it<timeA.end(); it++) pontos_timeA += (*it)->getEficiencia();

                for(it = timeB.begin(); it<timeB.end(); it++) pontos_timeB += (*it)->getEficiencia();

                cout << "PONTOS TIME A: " << pontos_timeA << endl;
                cout << "PONTOS TIME B: " << pontos_timeB << endl;

                cout << endl << endl;
                cout << "==> O TIME "; 
                if(pontos_timeA > pontos_timeB) cout << "(A) VENCEU A PARTIDA" << endl << endl;
                else  cout << "(B) VENCEU A PARTIDA" << endl << endl;

                wait();
            }break;

            case 0:{
                system("cls||clear");
                cout << "==== ENCERRANDO APLICACAO ====" << endl;
                wait();
                return 0;
            }break;

            default:{
                system("cls||clear");
                cout << "==== OPCAO INVALIDA ====" << endl;
                wait();
            }break;
        }
    }



    return 0;
}

int menu(){
    cout << "==== AVALIACAO 24/04/2019 ====" << endl;
    cout << endl << endl;

    cout << "(1) Adcionar um jogador no time A" << endl;
    cout << "(2) Adcionar um jogador no time B" << endl;
    cout << "(3) Adcionar um Super Jogador no time A" << endl;
    cout << "(4) Adcionar um Super Jogador no time B" << endl;
    cout << "(5) Qual o time vencedor?" << endl;
    cout << "(0) Encerrar aplicacao" << endl;

    cout << endl << endl;
    cout << "=> INSIRA A OPCAO DESEJADA: -> ";
    int op;
    cin >> op;
    return op;
}

void wait(){
    cout << endl << endl;
    cout << "Precione enter para continuar ..." << endl;
    setbuf(stdin, NULL);
    getchar();
    system("clear||cls");
}