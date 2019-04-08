
#include "game.h"
#include "jogopc.h"
#include "logica.h"

int main(int argc, char** argv){
    Game* x = new Game();
    JogoPc* y = new JogoPc();


    //->game -> Jogopc


    Logica* l = new Logica();

    ((JogoPc*)y)
    l->teste(((Game*)y));

    return 0;
}