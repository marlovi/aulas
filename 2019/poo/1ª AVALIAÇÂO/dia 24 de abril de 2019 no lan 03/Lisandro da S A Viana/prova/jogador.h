#ifndef JOGADOR_H
#define JOGADOR_H
#include<cstdlib>
#include<ctime>
#include <iostream>

using namespace std;

class jogador
{
private:
    double overral;
    string nome;
public:
    double getNome();
    void setNome(string nome);

    double getOverall();
    void setOverall(string overral);
    superJogador(double &);

    jogadorA();
};

class super_jogador
{
private:
    double especialista;

public:


    super_jogador();
};

#endif // JOGADOR_H

/*
2. O que são funções do tipo templates? quando pode/deve utilizar as mesmas? em
que contexto a utilização das mesmas é considerada relevante? Utilize exemplos
para convalidar suas argumentações se julgar necessário. (0,5)
RESPOSTA: sao funçoes que permitem sua reutilização em codigos diferentes economizando
tempo ao programador como por exemplo




3. Defina polimorfismo, quando pode-se aplicar tal técnica de programação orientada a
objetos? utilize exemplos para convalidar as suas argumentações se julgar
necessário. (0,5)
RESPOSTA: polimorfismo, sao funcoes que permitem a escrita da mesma função de
diversas maneiras diferentes.

int soma(int a, int b){
    int c;
    c=a+b;
    return c;
}
double soma(double a, double b){
    double c;
    c=a+b;
    return c;
}

*/
