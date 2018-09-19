#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int ler_vetor(int *vetor, int tamanho)
{
    for(int i=0; i<tamanho; i++)
    {
        printf("Digite o valor do vetor na posicao %d: \n",i);
        scanf("%d", &vetor[i]);
    }
}

void imprime_vetor(int *vetor, int tamanho)
{
    for(int i=0; i<tamanho; i++)
    {
        printf("V[%d]: %d\n", i,vetor[i]);
    }
}

int menu()
{
    int opcao=0;
        printf("------------------AVALIACAO------------------\n");
        printf("Digite 1 para questao 1: \n");
        printf("Digite 2 para questao 2: \n");
        printf("Digite 3 para questao 3: \n");
        printf("Digite 0 para sair: \n");
        scanf("%d", &opcao);
        printf("---------------------------------------\n");
        return opcao;
}

int menuex1()
{
    int opcao1=0;
        printf("------------------PASSAGENS------------------\n");
        printf("Digite 1 para escolher uma poltrona: \n");
        printf("Digite 2 para ver todas as poltronas: \n");
        printf("Digite 3 para ver poltronas disponiveis: \n");
        printf("Digite 4 para relatorio: \n");
        printf("Digite 0 para sair: \n");
        scanf("%d", &opcao1);
        printf("---------------------------------------\n");
        return opcao1;
}

int menuex3()
{
    int opcao3;
    printf("------------------ALUNOS------------------\n");
    printf("Digite 1 para adicionar um aluno: \n");
    printf("Digite 2 para ver as informacoes  do aluno: \n");
    printf("Digite 3 para ver as informacoes de todos os alunos: \n");
    printf("Digite 4 para visualizar o aluno com maior nota: \n");
    printf("Digite 5 para visualizar a media geral dos alunos: \n");
    printf("Digite 6 para visualizar as notas finais em ordem decrescente: \n"); 
    printf("Digite 0 para sair: \n");
    scanf("%d", &opcao3);
    printf("---------------------------------------\n");
    return opcao3;
}

int main()
{
    int op;
    typedef struct poltronas
    {   
        int livre;
        int ocupado;          
        int reservado;
        int corredor;
        int num;
    }Poltronas;
    Poltronas **p;
    int op_ex1;
    int num_ex1;
    int l1,c1;
    int cont_reservado=0,cont_ocupados=0,cont_livres=0;

    int *vetor1,*vetor2,*vetor3;
    int tam1=0, tam2=0;
    int cont_iguais=0, aux1=0;

    int **matriz;
    int opex3=0,cont_ex3=0,aluno=0;
    int pos=0;
    float media=0;
    int contaritmetica=0;
    int *vetoraux;
    int contaux=0;
    
    
    do
    {
        op=menu();
        switch(op)
    {
        case 1:
            p=calloc(5,sizeof(Poltronas));
            for(int i=0; i<5; i++)
            {
                p[i]=calloc(12,sizeof(Poltronas));
            }
            
            for(int i=0; i<5; i++)
            {
                for(int j=0; j<12; j++)
                {
                    p[i][j].livre=1;
                    p[i][j].ocupado=0;
                    p[i][j].reservado=0;
                    if(i==2)
                    {
                        p[i][j].corredor=1;
                        p[i][j].num=0;
                    }
                }
            }
            int cont1=1,cont2=2,cont3=3,cont4=4;
            for(int i=0; i<5; i++)
            {
                for(int j=0; j<12; j++)
                {
                    if(i==0)
                    {
                        p[i][j].num=cont1;
                        cont1=cont1+4;
                    }
                    if(i==1)
                    {
                        p[i][j].num=cont2;
                        cont2=cont2+4;
                    }
                    if(i==3)
                    {
                        p[i][j].num=cont3;
                        cont3=cont3+4;
                    }
                    if(i==4)
                    {
                        p[i][j].num=cont4;
                        cont4=cont4+4;
                    }
                }
            }
            do
            {
                op_ex1=menuex1();
                switch(op_ex1)
            {
                case 1:
                    printf("Digite o numero da poltrona desejada: \n");
                    do
                    {
                        scanf("%d", &num_ex1);
                        for(int i=0; i<5; i++)
                        {
                            for(int j=0; j<12; j++)
                            {
                                if(num_ex1==p[i][j].num)
                                {
                                    l1=i;
                                    c1=j;
                                    if(p[l1][c1].livre==0)
                                    {
                                        printf("Esta poltrona nao esta disponivel!!!\n");
                                        printf("Escolha outro numero: \n");
                                        scanf("%d", &num_ex1);
                                    }
                                    else
                                    {
                                        printf("Parabens por guardas esta poltrona!!!\n");
                                        p[l1][c1].livre=0;
                                        p[l1][c1].ocupado=1;
                                    }
                                } 

                            }
                        }
                    }
                    while(p[l1][c1].num!=num_ex1 && p[l1][c1].livre==1);
                    break;
                    case 2:
                        for(int i=0; i<5; i++)
                        {
                            for(int j=0; j<12; j++)
                            {
                                printf("%d ", p[i][j].num);
                            }
                        printf("\n");
                        }
                    break;
                    case 3:
                        for(int i=0; i<5; i++)
                        {
                            for(int j=0; j<12; j++)
                            {
                                if(p[i][j].livre==1 && i!=2)
                                {
                                printf("%d ", p[i][j].num);
                                }
                            }
                        printf("\n");
                        }
                    break;
                    case 4:
                        for(int i=0; i<5; i++)
                        {
                            for(int j=0; j<12; j++)
                            {
                                if(p[i][j].ocupado==1)
                                {
                                    cont_ocupados++;
                                }
                                if(p[i][j].reservado==1)
                                {
                                    cont_reservado++;
                                }
                                if(p[i][j].livre==1)
                                {
                                    cont_livres++;
                                }
                            }
                        }
                        printf("Estao ocupados: %d lugares.\n", cont_ocupados);
                        printf("Estao reservados: %d lugares.\n", cont_reservado);
                        printf("Estao livres: %d lugares.\n", cont_livres);
                    break;
                    case 0:
                        for(int i=0; i<5; i++)
                        {
                            free(p[i]);
                        }
                        free(p);
                        printf("Obrigado por utilizar a aplicacao!\n");
                    break;
            }
            }
            while(op_ex1!=0);    
        break;
        case 0:
        printf("Obrigado por utilizar a aplicação!\n");
        break;
        case 2:
            printf("Digite a quantidade de elementos do vetor 1: \n");
            scanf("%d", &tam1);
            vetor1=calloc(tam1,sizeof(int));
            ler_vetor(vetor1,tam1);
            printf("Digite a quantidade de elementos do vetor 2: \n");
            scanf("%d", &tam2);
            vetor2=calloc(tam2,sizeof(int));
            ler_vetor(vetor2,tam2);
            imprime_vetor(vetor1,tam1);
            printf("--------------------------\n");
            imprime_vetor(vetor2,tam2);
            for(int i=0; i<tam1; i++)
            {
                for(int j=0; j<tam2; j++)
                {
                    if(vetor1[i]==vetor2[j])
                    {
                        cont_iguais++;
                    }
                }
            }
            vetor3=calloc(cont_iguais,sizeof(int));
            for(int i=0; i<tam1; i++)
            {
                for(int j=0; j<tam2; j++)
                {
                    if(vetor1[i]==vetor2[j])
                    {
                        vetor3[aux1]=vetor1[i];
                        aux1++;
                    }
                }
            }
            printf("--------------INTERSSECAO--------------\n");
            imprime_vetor(vetor3,cont_iguais);
            free(vetor1);
            free(vetor2);
            free(vetor3);
        break;
        case 3:
            matriz=calloc(5,sizeof(int));
            for(int i=0; i<5; i++)
            {
                matriz[i]=calloc(4,sizeof(int));
            }
            do
            {
                opex3=menuex3();
                switch(opex3)
                {
                    case 1:
                    if(cont_ex3<=4)
                    {
                        printf("Digite o numero da matricula: \n");
                        scanf("%d", &matriz[cont_ex3][0]);
                        printf("Digite a media das provas: \n");
                        scanf("%d", &matriz[cont_ex3][1]);
                        printf("Digite a media dos trabalhos: \n");
                        scanf("%d", &matriz[cont_ex3][2]);
                        matriz[cont_ex3][3]=matriz[cont_ex3][1]+matriz[cont_ex3][2];
                        printf("Informacoes salvas!\n");
                        cont_ex3++;
                    }
                    else
                    {
                        printf("ESTA CHEIO DE ALUNOS!\n");
                    }
                    break;
                    case 2:
                        printf("Informe qual aluno deseja procuras as informacoes: \n");
                        scanf("%d", &aluno);
                        if(aluno<=4)
                        {
                            printf("Matricula: %d\n", matriz[aluno-1][0]);
                            printf("Media das provas: %d\n", matriz[aluno-1][1]);
                            printf("Media dos trabalhos: %d\n", matriz[aluno-1][2]);
                            printf("Nota Final: %d\n", matriz[aluno-1][3]);
                        }
                        else
                        {
                            printf("Nao existe esse numero de aluno!\n");
                        }
                    break;
                    case 3:
                        for(int i=0; i<=4; i++)
                        {
                            if(matriz[i][0]!=0)
                            {
                                printf("Aluno %d:\n", i+1);
                                printf("Matricula: %d\n", matriz[i][0]);
                                printf("Media das provas: %d\n", matriz[i][1]);
                                printf("Media dos trabalhos: %d\n", matriz[i][2]);
                                printf("Nota Final: %d\n", matriz[i][3]);
                                printf("\n");
                            }
                        }
                    break;
                    case 4:
                        for(int i=0; i<5; i++)
                        {
                            for(int j=1; j<5; j++)
                            {
                                if(matriz[i][3]>matriz[j][3])
                                {
                                    pos=i;
                                }
                            }
                        }
                        printf("O ALUNO COM MAIOR NOTA FOI : %d", pos);
                        printf("Nota Final: %d\n", matriz[pos][3]);
                    break;
                    case 5:
                        for(int i=0; i<5; i++)
                        {
                            if(matriz[i][3]!=0)
                            {
                                contaritmetica++;
                                media=media+(float)matriz[i][3];
                            }
                        }
                        printf("A MEDIA E DE: %f", media/contaritmetica);
                    break;
                    case 6:
                        vetoraux=calloc(5,sizeof(int));
                        for(int i=0; i<5; i++)
                        {
                            for(int j=1; j<5; j++)
                            {
                                if(matriz[i][3]>=matriz[j][3])
                                {
                                    vetoraux[contaux]=matriz[i][3];
                                    contaux++;
                                }
                            }
                        }
                    break;
                    case 0:
                    printf("Obrigado por utilizar a aplicacao!\n");
                    for(int i=0; i<5; i++)
                    {
                        free(matriz[i]);
                    }
                    free(matriz);
                    break;
                }
            }
            while(opex3!=0);
            
        break; 
    }
    }
    while(op!=0);
    
    

}