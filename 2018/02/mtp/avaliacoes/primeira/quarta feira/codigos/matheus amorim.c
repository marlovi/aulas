#include "stdio.h"
#include "stdlib.h"
void menu();
void ex1();
void ex2();
void ex3();
void leitura(int*,int);
void saida(int*,int);
int main(){
    system("clear");
    menu();
    return 0;
}
void menu(){
    int ex=0;
    do{
        printf("|0|-------------- MENU ---------------|0|\n");
        printf("|0| Digite a Questão que deseja:      |0|\n");
        printf("|0| 1 - Questão 1                     |0|\n");
        printf("|0| 2 - Questão 2                     |0|\n");
        printf("|0| 3 - Questão 3                     |0|\n");
        printf("|0| 0 - SAIR                          |0|\n");
        printf("|0|-----------------------------------|0|\n");
        scanf("%d",&ex);
        system("clear");
        switch(ex){
            case 0:{
                printf("\n\n|0|-----------------------------------|0|\n");
                printf("|0| OBRIGADO POR USAR ESTA APLICAÇÃO  |0|\n");
                printf("|0|-----------------------------------|0|\n\n\n");    
            }break;
            case 1:{
                printf("|0|-----------------------------------|0|\n");
                printf("|0|             QUESTÃO 1             |0|\n");
                printf("|0|-----------------------------------|0|\n\n\n");
                ex1();
                printf("\n\n");
            }break;
            case 2:{
                printf("|0|-----------------------------------|0|\n");
                printf("|0|             QUESTÃO 2             |0|\n");
                printf("|0|-----------------------------------|0|\n\n\n");
                ex2();
                printf("\n\n");
            }break;
            case 3:{
                printf("|0|-----------------------------------|0|\n");
                printf("|0|             QUESTÃO 3             |0|\n");
                printf("|0|-----------------------------------|0|\n\n\n");
                ex3();
                printf("\n\n");
            }break;
            case 4:{
                system("clear");
            }break;
        }
    }while(ex!=0);
}
void ex1(){
    system("clear");
}
void ex2(){
    int *v1,*v2,*v3,n1,n2,x=0,y=0,n=1,n3=0;
    printf("Digite o tamanho do PRIMEIRO vetor ");
    scanf("%d",&n1);
    v1 = (int*)malloc(n1*sizeof(int));
    printf("Digite o tamanho do SEGUNDO vetor ");
    scanf("%d",&n2);
    v2 = (int*)malloc(n2*sizeof(int));
    system("clear");
    printf("|0|-----------------------------------|0|\n");
    printf("|0|             QUESTÃO 2             |0|\n");
    printf("|0|-----------------------------------|0|\n\n\n");
    v3 = (int*)malloc(n*sizeof(int));
    printf("Digite os valores do PRIMEIRO vetor\n");
    leitura(v1,n1);
    system("clear");
    printf("|0|-----------------------------------|0|\n");
    printf("|0|             QUESTÃO 2             |0|\n");
    printf("|0|-----------------------------------|0|\n\n\n");
    printf("Digite os valores do SEGUNDO vetor\n");
    leitura(v2,n2);
    system("clear");
    printf("|0|-----------------------------------|0|\n"/*Amorim*/);
    printf("|0|             QUESTÃO 2             |0|\n");
    printf("|0|-----------------------------------|0|\n\n\n");
    for(;x<n1;x++){
        for(y=0;y<n2;y++){
            if(v1[x] == v2[y]){
                v3[n3] = v1[x];
                n3++;
                n++;
                v3 = (int*)realloc(v3,(n+1)*sizeof(int));
            }
        }
    }
    printf("V1{");
    saida(v1,n1);
    printf("}\n\n");
    printf("V2{");
    saida(v2,n2);
    printf("}\n\n");
    if(n3!=0){
        printf("V3{");
        saida(v3,n-1);
        printf("}\n\n");
    }else printf("Não existe interseção entre os vetores V1 e V2\n");
    
    free(v1);
    free(v2);
    free(v3);
}
void ex3(){
    int **j;
    int x=0,y=0,l=5,c=4,f=0,p=0,math=0;
    float med=0;
    j = (int**)malloc(l*sizeof(int*));
    for(x=0;x<l;x++){
        j[x] = (int*)malloc(c*sizeof(int));
    }
    for(x=0;x<5;x++){
    system("clear");
    printf("|0|-----------------------------------|0|\n");
    printf("|0|             QUESTÃO 3             |0|\n");
    printf("|0|-----------------------------------|0|\n\n\n");
        printf("Digite os dados do aluno %d :\n",x+1);
        printf("Matricula: ");
        scanf("%d",&j[x][0]);
        printf("Media das provas: ");
        scanf("%d",&j[x][1]);
        printf("Media dos trabalhos: ");
        scanf("%d",&j[x][2]);
        printf("\n\n");
    }
    for(y=0;y<5;y++){
        j[y][3] = (j[y][1] + j[y][2])/2;
    }
    system("clear");
    printf("|0|-----------------------------------|0|\n");
    printf("|0|             QUESTÃO 3             |0|\n");
    printf("|0|-----------------------------------|0|\n\n\n");
    menu3:
    printf("|0|-----------------------------------|0|\n");
    printf("|0| Digite o que deseja:              |0|\n");
    printf("|0| 1 - Imprimir o melhor aluno       |0|\n");
    printf("|0| 2 - Media dos alunos              |0|\n");
    printf("|0| 3 - Imprimir em ordem decrescente |0|\n");
    printf("|0| 0 - Voltar ao Menu                |0|\n");
    printf("|0|-----------------------------------|0|\n\n");
    scanf("%d",&f);
    if(f==1){
        for(y=0;y<5;y++){
            if(j[y][3] > p){
                p = j[y][3];
                math = y;
            }
        }
        system("clear");
        printf("|0|-----------------------------------|0|\n");
        printf("|0|             QUESTÃO 3             |0|\n");
        printf("|0|-----------------------------------|0|\n\n\n");
        printf("|0|-----------------------------------\n");
        printf("|0| Matricula:--------%d              \n",j[math][0]);
        printf("|0| M. da Prova:------%d              \n",j[math][1]);
        printf("|0| M. do Trabalho:---%d              \n",j[math][2]);
        printf("|0| Nota Final:-------%d              \n",j[math][3]);
        printf("|0|-----------------------------------\n\n\n");
        goto menu3;
    }else if(f==2){
        for(y=0;y<5;y++){
            med += j[y][3];
        }
        system("clear");
        printf("|0|-----------------------------------|0|\n");
        printf("|0|             QUESTÃO 3             |0|\n");
        printf("|0|-----------------------------------|0|\n\n\n");
        printf("|0|-----------------------------------\n");
        printf("|0| Media dos Alunos:----%.2f         \n",(med/5));
        printf("|0|-----------------------------------\n\n\n");
        goto menu3;
    }else if(f==3){
       printf("  :(   \n");
    }else system("clear");
    for(x=l-1;x>=0;x--){
        free(j[x]);
    }
}
void leitura(int *m,int t){
    for(int x = 0;x<t;x++){
        printf("V[%d] = ",x+1);
        scanf("%d",&m[x]);
    }
    printf("\n\n");
}
void saida(int *m,int t){
    for(int x=0;x<t;x++){
        printf("%d",m[x]);
        if(x != t-1){
            printf(",");
        }   
    }
}
/*Amorim*/