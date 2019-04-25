#include "Logica.h"
#include "Leitura.h"
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

int tam;
void Logica::menu(){
    int op=1;

    while(op!=0){
        cout << "POR FAVOR, INSIRA A MESMA QUANTIDADE DE JOGADORES EM CADA TIME, PARA ASSIM TERMOS UM JOGO EQUILIBRADO" << endl;
        cout << "INSIRA 1 PARA CRIAR UM JOGADOR PARA O TIME 1" << endl;
        cout << "INSIRA 2 PARA CRIAR UM JOGADOR PARA O TIME 2" << endl;
        cout << "INSIRA 3 PARA ADICIONAR DADOS AO JOGADOR DO TIME 1" << endl;
        cout << "INSIRA 4 PARA ADICINAR DADOS AO JOGADOR DO TIME 2" << endl;
        cout << "INSIRA 5 PARA SABER O TIME VENCEDOR" << endl;
        cout << "INSIRA 0 PARA SAIR" << endl;
        cin >> op;
        switch(op){
            case 1:{
                criaj1();
                tam ++;
            }break;
            case 2:{    
                criaj2();
            }break;
            case 3:{
                dadosj1();
            }break;
            case 4:{
                dadosj2();
            }break;
            case 5:{
                vencedor();
            }break;
            default:{
                cout << "VOCE SAIU DO PROGRAMA" << endl;
            }break;
        }
    }
}

void Logica::criaj1(){
    Jogador *j1 = new Jogador();
    t1.push_back(j1);
}

void Logica::criaj2(){
    Jogador *j2 = new Jogador();
    t2.push_back(j2);
}

void Logica::dadosj1(){
    vector <Jogador*>::iterator it;
    Leitura *l = new Leitura();
    cout << "INSIRA PARA QUAL JOGADOR VOCE DESEJA INSERIR NOME E OVER" << endl;
    int x;
    cin >> x;
    it = t1.begin() + x;

    cout << "INSIRA O NOME PARA O SEU JOGADOR DO TIME 1" << endl;
    (*it)->setnome(l->lString());

    cout << "INSIRA O OVER DO JOGADOR .... LEMBRANDO QUE O MINIMO E 1 E O MAXIMO E 10" << endl;
    (*it)->setover(l->lInt());
    if((*it)->getover()>50 || (*it)->getover() < 1){
        cout << "OVER ESTA ALTOMATICAMENTO COM 10" << endl;
        (*it)->setover(10);
    } 
}

void Logica::dadosj2(){
    vector <Jogador*>::iterator it;
    Leitura *l = new Leitura();

    cout << "INSIRA QUAL JOGADOR DO TIME 2 VOCE DESEJA INSERIR NOME E OVER" << endl;
    int x;
    cin >> x;
    it = t2.begin() + x;

    cout << "QUAL O NOME PARA O SEU JOGADOR DO TIME 2" << endl;
    (*it)->setnome(l->lString());

    cout << "INSIRA QUAL O OVER DO JOGADOR.... LEMBRANDO QUE O MINIMO E 1 E O MAXIMO E 10" << endl;
    (*it)->setover(l->lInt());

    if((*it)->getover() > 10 || (*it)->getover() < 1){
        cout << "OVER ESTA ALTOMATICAMENTE COM 10" << endl;
        (*it)->setover(10);
    }
}

void Logica::vencedor(){
    vector <Jogador*>::iterator it1;
    vector <Jogador*>::iterator it2;
    int tot1 = 0;
    int tot2 = 0;
    for(int i=0; i<tam; i++){
        int x = i;
        it1 = t1.begin() + x;
        it2 = t2.begin() + x;

        tot1 = (rand()%(100-1+1) + 1) * (*it1)->getover();
        tot2 = (rand()%(100-1+1) + 1) * (*it2)->getover();
    }
    if(tot1 > tot2){
        cout << "O TIME 1 FOI O VENCEDOR" << endl;
    }else{
        cout << " O TIME 2 FOI O VENCEDOR" << endl;
    }

}