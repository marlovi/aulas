#include "stdio.h"
#include "stdlib.h"
#include "time.h"


enum{SEGUNDA=10,TERCA,QUARTA,QUINTA,SEXTA=500,SABADO,DOMINGO};

int main(){
    enum{FALSE,TRUE};
    printf("%d ", TRUE);
    int i = 0;


    srand( time(NULL) );// é recomendado zerar o relógio



        for( ; i< 10 ; i++)
                printf("%d \n",  rand() % 100  );

    return 0;
}