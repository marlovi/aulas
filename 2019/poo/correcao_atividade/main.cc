#include "logica.h"

int main(){
    Logica * l = new Logica();
    l->iniciar();
    l->~Logica();
    return EXIT_SUCCESS;
}