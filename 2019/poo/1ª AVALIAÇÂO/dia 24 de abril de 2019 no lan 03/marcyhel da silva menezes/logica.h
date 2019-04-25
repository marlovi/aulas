#ifndef LOGICA_H
#define LOGICA_H


#include "time.h"
#include "super.h"
#include <vector>

class Logica{
    private:
    vector <Time*> timeA;
    vector <Time*> timeB;
        
    public:

        Time * cria_time();
        Time * cria_super_time();

        Time * cria_timeb();
        Time * cria_super_timeb();
        void menu();
        void ganhador();

};
#endif