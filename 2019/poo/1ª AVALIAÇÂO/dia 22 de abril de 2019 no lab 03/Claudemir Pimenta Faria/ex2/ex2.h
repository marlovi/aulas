#ifndef EX2_H
#define EX2_H
#include <iostream>
using namespace std;


//####### Criando uma Clase #####
class Classe{
    private:
        int atributo;
        bool classe;
    public:
        void setAtributo(const int &atributo); // metodo de encapsulamento set
        void setClasse(const bool &classe);

        int getAtriburo(); // metodo de encapsulamento get
        bool isClasse(); // metodo de encapsulamento is

};

#endif