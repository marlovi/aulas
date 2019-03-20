#ifndef  ALUNO_H
#define  ALUNO_H
#include <string>

using namespace std;
class Aluno{
    //operadores de visibilidade ou moficadores
    // de acesso 
    private: 
        string nome;
        string rg;
        string cpf;
        string email;
        string endereco;
        long int matricula;
        string telefone;
    public:
        string getTelefone();
        void setTelefone(const string &);
        string getNome();
        void setNome(const string &);
        string getRg();
        void setRg(const string &);
        string getCpf();
        void setCpf(const string &);
        string getEmail();
        void setEmail(const string &);
        string getEndereco();
        void setEndereco(const string &);
        long int getMatricula();
        void setMatricula(const long int &);

};

#endif