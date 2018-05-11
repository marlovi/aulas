#include "negocio.h"

int main(){
    Negocio* negocio = new Negocio();
    negocio->inicio();
    delete negocio;
}