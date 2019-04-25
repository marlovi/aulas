#include <iostream>
#include <vector>
#include "jogador.h"
#include "superjogador.h"

int main(int argc, char** argv){
    vector<Jogador* > timea;
    vector<Jogador*> timeb;

    Jogador *a = new Jogador();
    a->setNome("Ayslan");
    a->setOverall(3);
    timea.push_back(a);

    Jogador *b = new Jogador();
    b->setNome("Ronicreisson");
    b->setOverall(2);
    timea.push_back(b);

    Jogador *c = new Jogador();
    c->setNome("David");
    c->setOverall(1);
    timea.push_back(c);

    Superjogador *a = new Superjogador();
     a->setNome("Lima");
    a->setOverall(3);
    timea.push_back(a);

    Superjogador *b = new Jogador();
    b->setNome("Leal");
    b->setOverall(2);
    timea.push_back(b);

    Superjogador *c = new Jogador();
    c->setNome("Leal");
    c->setOverall(1);
    timea.push_back(c);

    //a->setOverall(3);
    //timea.push_back(a);
    return 0;
}


