#ifndef VEICULO_H
#define VEICULO_H
#include <string>
#include <iostream>
using namespace std;
class Veiculo{
    private:
        int fabricao;
    public:
        void setFabricao(const int &);
        int getFabricao();
        virtual void dirigir() = 0; // definindo um método abstrato ( puramente virtual c++ )
};



#endif 