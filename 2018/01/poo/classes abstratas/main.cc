#include "veiculo.h"
#include "carro.h"
#include "barco.h"
void exemplo( Veiculo* v){
    v->dirigir();
}

int main(){
    Carro* c = new Carro();
    Barco* b = new Barco();

    exemplo(c);
    exemplo(b);

    c->setFabricao(2308);

    cout << c->getFabricao() << endl;

    return 0;
}