#include <stdio.h>
#include <stdlib.h>

int jv();
int vetores();
int decrecente();

int main(){
    
    int op;
    while(1){
        printf("[0]-Sair\n[1]-jogo da velha\n[2]-vetores\n[3]-decresente\n");
        scanf("%d",&op);

        if(op == 0){
            printf("obrigado por utilizar o programa..");
            break;
        }
        else if(op==1){
            jv();
        }
        else if(op==2){
            vetores();
        }
        else if(op==3){
            decrecente();
        }
        else{
            printf("operação invalida\n \n \n");
        }
    }
    
    
    return 0;
}

int jv(){
    int j1=0,j2=1,i,j,a=0,cx=0,vx=0,vy=0,v=0;
    int x,y;
    int c=0;
    char aux1,aux2,aux3;
    char **tab;

    tab=(char**)malloc(3*sizeof(char*));
    for(i=0;i<3;i++){
        tab[i]=(char*)malloc(3*sizeof(char));
    }
    for(i=0;i<3;i++){
            
            for(j=0;j<3;j++){
                
               
                tab[i][j]=' ';
                
            }
           
            
        }

    while(1){
        v++;

        if(j1==0){
            printf("digite o valor de x:");
            scanf("%d",&x);
            printf("digite o valor de y:");
            scanf("%d",&y);
            tab[x][y]='O';
            j1=1;
            j2=0;
            
        }
        else if(j2==0){
            printf("digite o valor de x:");
            scanf("%d",&x);
            printf("digite o valor de y:");
            scanf("%d",&y);
            tab[x][y]='X';
            j1=0;
            j2=1;
        }
        printf("   0 1 2\n");
        for(i=0;i<3;i++){
            printf("%d ",i);
            for(j=0;j<3;j++){
                
               
                printf("|%c",tab[i][j]);
                
            }
           
            printf("|\n");
        }
        
        for(i=0;i<3;i++){
            aux1="";
            aux2="";
            aux3="";
            for(j=0;j<3;j++){
                if (j==0){
                aux1=tab[i][j];
                }
                else if (j==1){
                aux2=tab[i][j];
                }
                else if (j==2){
                aux3=tab[i][j];
                }

                
                if(aux1=='X' && aux2 == 'X'&& aux3=='X'){
                    printf("o Jogador ( X ) venceu\n");
                    cx=1;
                    break;
                }
                else if(aux1=='O' && aux2 == 'O'&& aux3=='O'){
                    printf("o Jogador ( O ) venceu\n");
                    cx=1;
                    break;
                    
                }

            }        
        }
        for(i=0;i<3;i++){
            aux1="";
            aux2="";
            aux3="";
            for(j=0;j<3;j++){
                if (j==0){
                aux1=tab[j][i];
                }
                else if (j==1){
                aux2=tab[j][i];
                }
                else if (j==2){
                aux3=tab[j][i];
                }

                if(aux1=='O' && aux2 == 'O'&& aux3=='O'){
                    printf("o Jogador ( O ) venceu\n");
                    cx=1;
                    break;

                }
                else if(aux1=='X' && aux2 == 'X'&& aux3=='X'){
                    printf("o Jogador ( X ) venceu\n");
                    cx=1;
                    break;
                }

            }        
        }
        for(i=0;i<3;i++){
            aux1="";
            aux2="";
            aux3="";
            for(j=0;j<3;j++){
                if (i==j){
                    if(j==0){
                        aux1=tab[i][j];
                    }
                    if(j==1){
                        aux2=tab[i][j];
                    }
                    if(j==2){
                        aux3=tab[i][j];
                    }
                    if(aux1=='O' && aux2 == 'O'&& aux3=='O'){
                    printf("o Jogador ( O ) venceu\n");
                    cx=1;
                    break;

                    }
                    else if(aux1=='X' && aux2 == 'X'&& aux3=='X'){
                        printf("o Jogador ( X ) venceu\n");
                        
                        cx=1;
                        break;
                    }
                
                }

                if (i+j==2){
                    if(j==0){
                        aux1=tab[i][j];
                    }
                    if(j==1){
                        aux2=tab[i][j];
                    }
                    if(j==2){
                        aux3=tab[i][j];
                    }
                    if(aux1=='O' && aux2 == 'O'&& aux3=='O'){
                    printf("o Jogador ( O ) venceu\n");
                    cx=1;
                    break;

                    }
                    else if(aux1=='X' && aux2 == 'X'&& aux3=='X'){
                    printf("o Jogador ( X ) venceu\n");
                    cx=1;
                    break;
                    }

                }
            }
        }
        
      
    if(v==9){
        printf("Jogo empatado (VELHA)\n");
        free(tab);
        break;
    }
   
    if(cx==1){
        free(tab);
        break;
    }
    
   



    }




    return 0;
}
int vetores(){
    int *vet1;
    int *vet2;
    int *vet3;
    int x1,x2,x3;
    int c;
    int n;
    printf("tamanha do vetor 1:\n");
    scanf("%d",&x1);
    vet1=(int*)malloc(x1*sizeof(int));
    for(c=0;c<x1;c++){
        scanf("%d",&n);
        vet1[c]=n;
    }
    printf("tamanha do vetor 2:\n");
    scanf("%d",&x2);
    vet2=(int*)malloc(x2*sizeof(int));
    for(c=0;c<x2;c++){
        scanf("%d",&n);
        vet2[c]=n;
        
    }
    x3=x1+x2;
    vet3=(int*)malloc(x3*sizeof(int));
    
    for(c=0;c<x1;c++){
        
        vet3[c]=vet1[c];

        
    }
    for(c=0;c<x2;c++){
        vet3[c+x1]=vet2[c];
    }
    for(c=0;c<x3;c++){
        
        printf("%d",vet3[c]);

        
    }
    printf("\n");
    free(vet1);
    free(vet2);
    free(vet3);
    return 0;
}
int decrecente(){
    
    int *v;
    int i,x,n,j,aux;
    printf("qual o tamanho do vetor:\n");
    scanf("%d",&x);
    v=(int*)malloc(x*sizeof(int));
    printf("informe os valores dos vetor:\n");
    for(i=0;i<x;i++){
        scanf("%d",&n);
        v[i]=n;
    }
    for(i=0;i<x;i++){
        for(j=0;j<x;j++){
            if (v[i]>v[j]){
                aux=v[i];
                v[i]=v[j];
                v[j]=aux;
            }
        }
    }
    for(i=0;i<x;i++){
        printf("%d ",v[i]);
    }
    printf("\n");
    
    
    return 0;
}
    
 