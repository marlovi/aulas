#ifndef PESSOA_H
#define PESSOA_H
#include <string>
using namespace std;
class Pessoa{
    private:
        string nome;
        string rg;
        string cpf;
        string telefone;
        string data_nascimento; // gets e sets
    public:
    Pessoa();
    Pessoa(const string &);
    Pessoa(const string &, const string &, const string &);
    ~Pessoa();
};

#endif