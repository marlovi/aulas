#include "stdio.h"
#include "stdlib.h"
void imprimirVetorF(float* v,int t);
float soma(float*, int);
void preencher(float*,int);
int menu();
int fatorial(int);
int eleva(int, int); 
void inverter(float*, int, int);
int main(){
    int op=0;
    do{
         op = menu();
       switch(op){
            case 1:{
                int f;
                printf("Informe um valor \n");
                scanf("%d",&f);
                printf("%d \n",fatorial(f));
        }break;
        case 2:{
            int x;
            int y;
            printf("Informe valor de X \n");
            scanf("%d",&x);
            printf("Informe valor de Y \n");
            scanf("%d",&y);
            printf("X^Y   == %d \n",eleva(x,y));
        }        
        break;
        case 3:{
                int tamanho;

                printf("Informe o tamanho do vetor \n");
                scanf("%d",&tamanho);

                float* vetor = (float*) malloc(tamanho * sizeof(float));
                //float vetor[tamanho];
                preencher(vetor,tamanho);

                printf("A Soma de todos os Elementos do Vetor é de %f \n",soma(vetor,tamanho -1 ));
        } break;
        case 4:{
               int tamanho;

                printf("Informe o tamanho do vetor \n");
                scanf("%d",&tamanho);

                float* vetor = (float*) malloc(tamanho * sizeof(float));
                preencher(vetor,tamanho);
                imprimirVetorF(vetor,tamanho);
                inverter(vetor,0,tamanho-1);
                imprimirVetorF(vetor,tamanho);
        }
       }
    }while(op != 0);
}


void inverter(float *v, int inicio, int fim){
        int aux = v[fim];
        v[fim] = v[inicio]; 
        v[inicio] = aux;

    if( inicio >= fim )    // enquanto o inicio for maior ou igual ao fim significa que está no meio do vetor.
        return ; // condição de parada
    else        
        inverter(v,inicio + 1, fim - 1); // chamada recursiva
    
}
float soma(float* vetor, int tamanho){
    if(tamanho == 0 )
        return vetor[tamanho];
    else 
        return vetor[tamanho] + soma(vetor,tamanho - 1 ); 
}
void imprimirVetorF(float* v,int t){
    int i=0;
        printf("\n\n\n\n");
        for( ; i<t ;i++){
            printf("V[%d] == %.2f \n",i, v[i]);
            
        }
        printf("\n\n\n");
}
void preencher(float* v,int t){
    int i=0;
        for( ; i<t ;i++){
            printf("Informe o valor de V[%d] \n",i);
            scanf("%f",&v[i]);
        }
}
int menu(){
    int op= 0 ;
        printf("Informe 1 para Fatorial \n");
        printf("Informe 2 para X^Y \n");
        printf("Informe 3 Somatarório de V[...n] \n");
        printf("Informe 4 Inverter Elementos do V[... n] \n");
        scanf("%d",&op);
    return op;
}
int fatorial(int n){
    if(n==1) 
        return 1;
    else 
        return n * fatorial( n -1 );
}

int eleva(int x, int y ){
    if( y == 0 )
     return 1;
    else if(y==1)
        return x;
    else 
        return x * eleva(x, y - 1); 
}