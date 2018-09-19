#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int menu();
int localiza(int);
int localiza2(int);

int main(){
    int men;
    


    do{
        men=menu();
        switch(men){
            
            case 0: break;

            case 1:{
                char **velha;
                int tam=3;
                int n;
                int x;
                int y;
                int aux;
                int z;
                int w;
                char A = 'X';
                char B = 'O';
                int aux2;

                

                velha=(char**)malloc(tam*sizeof(char*));
                for(n=0;n<tam;n++){
                    velha[n]=(char*)malloc(tam*sizeof(char));
                }


                n=1;
                for(x=0;x<tam;x++){
                    for(y=0;y<tam;y++){
                        velha[x][y]=n;
                        n++;
                    }
                }
                for(x=0;x<tam;x++){
                    for(y=0;y<tam;y++){
                        printf("|%d| ",velha[x][y]);
                    }
                    printf("\n");
                }   
                for(x=0;x<tam;x++){
                    for(y=0;y<tam;y++){
                        velha[x][y]=' ';

                    }
                }

                printf("A partir das coordenadas mostradas\n");
                for(n=0;n<99;n++){
                    aux2=0;
                    for(x=0;x<tam;x++){
                    for(y=0;y<tam;y++){

                        if(velha[x][y]!=' '){
                            aux2++;
                        }

                    }}
                    
                    printf("Escolha aonde vai colocar o 'O'\n");
                    scanf("%d",&aux);   
                    z=localiza(aux);
                    w=localiza2(aux);
                    

                    if(velha[z][w]!=' '){
                        printf("este espaço ja possui um valor, escolha um que nao possua\n");
                        scanf("%d",&aux);   
                        z=localiza(aux);
                        w=localiza2(aux);
                        if(velha[z][w]!=' '){
                            printf("este espaço ja possui um valor, escolha um que nao possua\n");
                            scanf("%d",&aux);   
                            z=localiza(aux);
                            w=localiza2(aux);
                    }
                    }
                    velha[z][w]='O';

                    if(velha[0][0]=='O' && velha[0][1]=='O' && velha[0][2]=='O'){
                        printf("Bolinha ganhou\n");
                        break;
                    } else if (velha[0][0]=='O' && velha[1][1]=='O' && velha[2][2]=='O') {

                        printf("Bolinha ganhou\n");
                        break;                        
                    }else if (velha[0][0]=='O' && velha[1][0]=='O' && velha[2][0]=='O') {

                        printf("Bolinha ganhou\n");
                        break;                        
                    }else if (velha[0][1]=='O' && velha[1][1]=='O' && velha[2][1]=='O') {

                        printf("Bolinha ganhou\n");
                        break;                        
                    }else if (velha[0][2]=='O' && velha[1][2]=='O' && velha[2][2]=='O') {

                        printf("Bolinha ganhou\n");
                        break;                        
                    }else if (velha[1][0]=='O' && velha[1][1]=='O' && velha[1][2]=='O') {

                        printf("Bolinha ganhou\n");
                        break;                        
                    }else if (velha[2][0]=='O' && velha[2][1]=='O' && velha[2][2]=='O') {

                        printf("Bolinha ganhou\n");
                        break;                        
                    }else if (velha[0][2]=='O' && velha[1][1]=='O' && velha[2][0]=='O') {

                        printf("Bolinha ganhou\n");
                        break;                        
                    }
                    

                    for(x=0;x<tam;x++){
                    for(y=0;y<tam;y++){

                        printf("|%c| ",velha[x][y]);

                    }
                    printf("\n");
                }   
                    
                    aux2=0;
                    for(x=0;x<tam;x++){
                    for(y=0;y<tam;y++){

                        if(velha[x][y]!=' '){
                            aux2++;
                        }

                    }}
                    if(aux2==9){
                        break;
                    }
                    printf("Escolha aonde vai colocar o 'X'\n");
                    scanf("%d",&aux);   
                    z=localiza(aux);
                    w=localiza2(aux);
                    if(velha[z][w]!=' '){
                        printf("este espaço ja possui um valor, escolha um que nao possua\n");
                        scanf("%d",&aux);   
                        z=localiza(aux);
                        w=localiza2(aux);
                        if(velha[z][w]!=' '){
                            printf("este espaço ja possui um valor, escolha um que nao possua\n");
                            scanf("%d",&aux);   
                            z=localiza(aux);
                            w=localiza2(aux);
                    }
                    }
                    velha[z][w]='X';

                    if(velha[0][0]=='X' && velha[0][1]=='X' && velha[0][2]=='X'){
                        printf("Xis ganhou\n");
                        break;
                    } else if (velha[0][0]=='X' && velha[1][1]=='X' && velha[2][2]=='X') {

                        printf("Xis ganhou\n");
                        break;                        
                    }else if (velha[0][0]=='X' && velha[1][0]=='X' && velha[2][0]=='X') {

                        printf("Xis ganhou\n");
                        break;                        
                    }else if (velha[0][1]=='X' && velha[1][1]=='X' && velha[2][1]=='X') {

                        printf("Xis ganhou\n");
                        break;                        
                    }else if (velha[0][2]=='X' && velha[1][2]=='X' && velha[2][2]=='X') {

                        printf("Xis ganhou\n");
                        break;                        
                    }else if (velha[1][0]=='X' && velha[1][1]=='X' && velha[1][2]=='X') {

                        printf("Xis ganhou\n");
                        break;                        
                    }else if (velha[2][0]=='X' && velha[2][1]=='X' && velha[2][2]=='X') {

                        printf("Xis ganhou\n");
                        break;                        
                    }else if (velha[0][2]=='X' && velha[1][1]=='X' && velha[2][0]=='X') {

                        printf("Xis ganhou\n");
                        break;                        
                    }

                    for(x=0;x<tam;x++){
                        for(y=0;y<tam;y++){
                        printf("|%c| ",velha[x][y]);
                    }
                    printf("\n");
                }   
                
                }
                    
                    

                



            } break;

            case 2:{
                int tam1;
                int tam2;
                int tam3;
                int *vet1;
                int *vet2;
                int *vet3;    
                int n;
                int x;

                printf("Digite o tamanho do primeiro vetor\n");
                scanf("%d",&tam1);
                vet1=(int*)malloc(tam1*sizeof(int));
                printf("Digite o tamanho do segundo vetor\n");
                scanf("%d",&tam2);
                vet2=(int*)malloc(tam2*sizeof(int));
                tam3= tam1+tam2;
                vet3=(int*)malloc(tam3*sizeof(int));
                
                printf("Digite os valores a serem escritos no primeiro vetor\n");
                for(n=0;n<tam1;n++){
                    scanf("%d", &vet1[n]);
                }
                printf("Primeiro vetor : \n");
                for(n=0;n<tam1;n++){
                    printf(" %d ", vet1[n]);
                }
                printf("\n");

                printf("Digite os valores a serem escritos no segundo vetor\n");
                for(n=0;n<tam2;n++){
                    scanf("%d", &vet2[n]);
                }
                printf("Segundo vetor : \n");
                for(n=0;n<tam2;n++){
                    printf(" %d ", vet2[n]);
                }
                printf("\n");

                for(n=0;n<tam1;n++){
                    vet3[n]=vet1[n];
                }
                x=tam1;
                for(n=0;n<tam2;n++){
                    vet3[x]=vet2[n];
                    x++;
                }
                
                printf("A junção dos dois vetores fica: \n");

                for(n=0;n<tam3;n++){
                    printf(" %d ", vet3[n]);
                }
                printf("\n\n");
                free(vet1);
                free(vet2);
                free(vet3);
                 
            }break;

            case 3:{
                int *vet;
                int *vet1;
                int tam;
                int n;
                int x;
                int aux;
                int aux2;
                printf("Digite o tamanho do vetor desejado\n");
                scanf("%d",&tam);

                vet=(int*)malloc(tam*sizeof(int));
                vet1=(int*)malloc(tam*sizeof(int));
                printf("Digite os valores para preencher o vetor\n");
                for(n=0;n<tam;n++){
                    scanf("%d", &vet[n]);
                }
                printf("Vetor = ");
                for(n=0;n<tam;n++){
                    printf(" %d ", vet[n]);
                }
                printf("\n");

                for(n=0;n<tam;n++){
                    aux=0;
                    for(x=0;x<tam;x++){
                        if(vet[x]>aux){
                            aux=vet[x];
                            aux2=x;
                        }                                         
                    }
                    vet1[n]=aux;
                        vet[aux2]=0;  
                }
                
                printf("Vetor decrescente = ");
                for(n=0;n<tam;n++){
                    printf(" %d ", vet1[n]);
                }
                printf("\n\n");

                free(vet);
                free(vet1);

            }break;
        }

    }while(men!=0);



    return 0;
}

int menu(){
    int x;
    printf("Digite 0 para parar a programação\n");
    printf("Digite 1 para jogar o jogo da velha\n");
    printf("Digite 2 para fazer a junção de dois vetores\n");
    printf("Digite 3 para mostrar de forma decrescente os valores de um vetor\n");

    scanf ("%d",&x);
    return x;
}

int localiza(int x){
    int z;
    int w;
    if(x==1){
        z=0;
        w=0;
    }
    else if(x==2){
        z=0;
        w=1;
    }
    else if(x==3){
        z=0;
        w=2;
    }
    else if(x==4){
        z=1;
        w=0;
    }
    else if(x==5){
        z=1;
        w=1;
    }
    else if(x==6){
        z=1;
        w=2;
    }
    else if(x==7){
        z=2;
        w=0;
    }else if(x==8){
        z=2;
        w=1;
    }else if(x==9){
        z=2;
        w=2;
    }
    return z;
}
int localiza2(int x){
    int z;
    int w;
    if(x==1){
        z=0;
        w=0;
    }
    else if(x==2){
        z=0;
        w=1;
    }
    else if(x==3){
        z=0;
        w=2;
    }
    else if(x==4){
        z=1;
        w=0;
    }
    else if(x==5){
        z=1;
        w=1;
    }
    else if(x==6){
        z=1;
        w=2;
    }
    else if(x==7){
        z=2;
        w=0;
    }else if(x==8){
        z=2;
        w=1;
    }else if(x==9){
        z=2;
        w=2;
    }
    return w;
}