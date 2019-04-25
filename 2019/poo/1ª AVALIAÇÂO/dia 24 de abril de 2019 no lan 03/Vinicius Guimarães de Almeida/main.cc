#include <iostream>
#include "logica.h"

int main(int argc,char **argv){
    Logica *l = new Logica();
    l->menu();
    delete l;
}