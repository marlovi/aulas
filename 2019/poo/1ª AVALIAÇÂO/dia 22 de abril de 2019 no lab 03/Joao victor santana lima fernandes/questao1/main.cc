#include "logica.h"

int main(int argv, char ** argc)
{
    Logica * l = new Logica();
    l->iniciar();
    delete l;
    return EXIT_SUCCESS;
}