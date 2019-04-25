#ifndef JOGADOR_H
#define JOGADOR_H
#include <string>
    class Jogador {
          private:
                string nome;
                int overall;
          public:
                void setNome (const string &);
                string getNome();
                void setOverall (const int &);
                int setOverall (); 
                int eviciencia();
    };   



#endif