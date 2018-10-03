#include "stdio.h"
#include "stdlib.h"
#include "math.h"
int repet(int,int,int);
void imprimirVetorF(float* v,int t);
float soma(float*, int);
void preencher(float*,int);
int menu();
int fatorial(int);
int eleva(int, int); 
void inverter(float*, int, int);
int cont_elementos(int, int);
int inverter_elementos(int, int);
int intervalo(int, int);
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
        }break;
        case 5:{
                int valor;
                printf("Informe um valor \n");
                scanf("%d",&valor);
                printf("O número invertido é %d \n",inverter_elementos(valor,cont_elementos(valor,0)));
                
        }break;
        case 6:{
                int valor;
                printf("Informe um valor inteiro positivo \n");
                scanf("%d",&valor);
                printf("A soma de 1 até %d   é    %d  \n",valor,intervalo(valor,0));
        }break;
        case 7:{
            int valor;
            int verificador;
                printf("Informe um valor inteiro positivo \n");
                scanf("%d",&valor);
                 printf("Informe um valor inteiropara verificar quantas vezes ele está presente no elemento anteorior\n");
                scanf("%d",&verificador);
                printf("O elemento %d repete %d vezes \n",verificador,repet(valor,verificador,0));
        }break;
       }
    }while(op != 0);
}

int inverter_elementos(int n, int tam){
    if(n >=1){
        //chamada recursiva aplicando a formula
        // rest * 10 ^ tamanho -1 
        printf("resto = %d  10 ^ %d  = %.2f    aguardando = %f\n ",(n%10),tam-1,pow(10,tam -1 ),((n%10) * pow(10,tam -1 )));
        return    ((n%10) * pow(10,tam -1 ))  + inverter_elementos(n/10, tam -1);
    }else{
        printf("parada retorna 0 \n")
;        return 0;
    }
}

int cont_elementos(int n, int qtd){
 if(n > 0)
    return 0 + cont_elementos( n/ 10, qtd +1);
 else
    return  qtd; //condição de parada
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
        printf("Informe 5 para Inverter um valor inteiro \n");
        printf("Informe 6 para informar um valor inteiro N e obter o seu somatório de 1 até N \n");
        printf("Informe 7 para contar a quantidade de elementos que tem em um valor inteiro \n");
        scanf("%d",&op);
    return op;
}
int intervalo(int v,int contador){
    if(contador == v){
        //parada
        return v;
    }else{
        return contador + intervalo(v,contador + 1 );
            //1 + 5 = 6 
            // 2+ 3 = 5....
            // 3 //parada
    }
        
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


int repet(int n,int s,int t){
    if(n > 0 ){
        if(n %10 == s)
            return repet(n/10,s,t+1);
        else
            return repet(n/10,s,t);
    }else 
        return t;
}