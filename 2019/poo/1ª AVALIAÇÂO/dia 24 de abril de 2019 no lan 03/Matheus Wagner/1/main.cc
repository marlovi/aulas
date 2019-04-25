#include "jogador.h"
#include "super.h"
#include <vector>

int main(int argc, char** argv){

    vector<Jogador*> timeA;
    vector<Jogador*> timeB;

    Jogador *A1 = new Jogador("Mauro");
    Jogador *A2 = new Jogador("Eduardo");
    Jogador *A3 = new Jogador("João");

    A1->setOverall(10);
    A2->setOverall(12);
    A3->setOverall(13);

    timeA.push_back(A1);
    timeA.push_back(A2);
    timeA.push_back(A3);

    Jogador *B1 = new Jogador ("Marcelo");
    Jogador *B2 = new Jogador ("Felipe");
    Jogador *B3 = new Jogador ("Antônio");

    B1->setOverall(11);
    B2->setOverall(15);
    B3->setOverall(8);

    timeB.push_back(B1);
    timeB.push_back(B2);
    timeB.push_back(B3);

    long int pontosA=0, pontosB=0;

    for(vector<Jogador*>::iterator it = timeA.begin();
    it!= timeA.end(); it++){
        pontosA+= (*it)->getEficiencia();
    }

    for(vector<Jogador*>::iterator it = timeB.begin();
    it!= timeB.end(); it++){
        pontosB+= (*it)->getEficiencia();
    }

    cout << "\033[01;36mEFICIENCIA TIME A\033[0m " << pontosA << endl;
    cout << "\033[01;31mEFICIENCIA TIME B\033[0m " << pontosB << endl;

    if(pontosA>pontosB) cout << "O time A venceu!" << endl;
    else if(pontosA==pontosB) cout << "Foi empate." << endl;
    else cout << "O time B venceu!" << endl;

    return 0;
    
}