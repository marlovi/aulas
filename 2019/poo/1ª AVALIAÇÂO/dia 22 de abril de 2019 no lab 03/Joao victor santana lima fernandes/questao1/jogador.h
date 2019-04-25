#ifndef JOGADOR_H
#define JOGADOR_H
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

class Jogador
{
private:
    string nome;
    float overall;
public:
    void setNome(const string &);
    string getNome();
    void setOverall(const float &);
    float getOverall();

    virtual float getEficiencia();

    Jogador(const string &);
};

#endif