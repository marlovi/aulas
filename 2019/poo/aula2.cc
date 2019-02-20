#include "veiculo.h"

int main(int argc,char** argv){

    Veiculo *uno; 


    uno = new Veiculo();
    uno->marca = "FIAT";
    uno->ano = 2015;
    uno->flex = false;
    uno->imprimir();

    Veiculo *gol = new Veiculo();
    gol->marca = "GOL";
    gol->ano = 2019;
    gol->flex  = true;

    gol->imprimir();
    uno->marca = "Nacional";
    uno->imprimir();
    return 0;
}