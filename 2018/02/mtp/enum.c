#include "stdio.h"


enum{FALSO=0, VERDADEIRO}; 



int main(){
    enum dias{SEGUNDA, TERCA,QUARTA,QUINTA,SEXTA,SABADO,DOMINGO};
    enum dias dia; 
    dia = QUARTA;
    printf("%d \n",dia);
    return 0;
}