#include <stdio.h>
#include <stdlib.h>

int menu();
int main(){
    int op;

    do{
        op=menu();
        switch(op){
            case 1:{
                int **mat;
                int lin = 5;
                int col = 12; 
                int i;
                int j;
                int cont=5; 
                int lugar;
                int opcao;
                int ocupado = 0;
                int reservado = 0;
                int livre = 0;

                mat=(int**)malloc(lin * sizeof(int*));
                    for(i=0;i<col;i++){
                        mat[i]=(int*)malloc(col * sizeof(int));
                    }
                    for(i=0;i<lin;i++){
                        for(j=0;j<col;j++){
                            cont ++;
                            mat[i][j] = cont;
                        }
                    }
                    for(i=0;i<lin;i++){
                        for(j=0;j<col;j++){
                            printf("%d  ",mat[i][j]);
                        }
                        printf("\n");
                    }
                    printf("\n");
         //------------------------------------------------------------------------------//           
                    for(i=0;i<lin;i++){
                        for(j=0;j<col;j++){
                            printf("Escolha o lugar\n");
                            scanf("%d",&lugar);
                            if(lugar >= 30 && lugar <= 41 ) printf("CORRREDOR!! NAO EXISTEM LUGARES\n");
                          //
                           else if((lugar >=6 && lugar <= 29) || (lugar >=42 && lugar <= 65) ){
                                printf("escolha a opcao: (2 ocupar) (3 reservar)\n");
                                scanf("%d",&opcao);
                                 if(lugar == 2) printf("Lugar ocupado!! escolha outro\n");
                               if(lugar == 3) printf("Lugar reservado!! escolha outro\n");
                               
                                    if(mat[i][j]== lugar){ 
                                    mat[i][j] = opcao;
                                    break;
                                    }
                            
                                    if(opcao == 2) ocupado++;
                                    if(opcao == 3) reservado++;
                            }
                            if(lugar == 0)break;
                        }
                    }
                    for(i=0;i<lin;i++){
                        for(j=0;j<col;j++){
                            printf("%d  ",mat[i][j]);
                        }
                        printf("\n");
                    }
            //---------------------------------------------------------//        
                    printf("\n");
                    livre = (45) - (ocupado + reservado);
                    printf("lugares livres = %d \n", livre);
                    printf("lugares ocupados = %d \n",ocupado);
                    printf("lugares reservados = %d \n", reservado);

                    free(*mat);
                    for(i<=col;i=0;i--){
                        free(mat[i]);
                    }

            }break;
            case 2:{
                int *vet1;
                int tam1;
                int *vet2;
                int tam2;
                int i;
                int j;
                int x=0;
                int cont =0;

                printf("Digite o tamanho do primeiro vetor\n");
                    scanf("%d",&tam1);

                    vet1=(int*)malloc(tam1 * sizeof(int));

                    printf("Digite o tamanho do segundo vetor\n");
                    scanf("%d",&tam2);

                    vet2=(int*)malloc(tam2 * sizeof(int));

                        for(i =0; i< tam1;i++){
                            printf("vet1[%d]= ",i);
                            scanf("%d",&vet1[i]);
                        }
                         printf("\n");
                        for(i =0; i< tam2;i++){
                            printf("vet2[%d]= ",i);
                            scanf("%d",&vet2[i]);
                        }

                        for(i=0;i<(tam1);i++){
                            for(j=0;j<(tam2);j++){
                                if(vet1[i]== vet2[j])cont++;
                
                            }
                        }
                        printf("%d\n",cont);
                int *vet3 = (int*)malloc(cont * sizeof(int));
                
                for(i=0;i<(tam1);i++){
                     for(j=0;j<(tam2);j++){
                         if(vet1[i]== vet2[j]){
                             
                                 vet3[x] = vet2[j];
                                x++;
                         }
                
                    }
                }
                for(x=0;x<cont;x++){
                      printf("vet3[%d] = %d\n", x,vet3[x]);
                         }
                                    printf("\n");

            free(vet1);
            free(vet2);
            free(vet3); 

            }break;

            case 3:{
                int **mat;
                int lin = 5;
                int col = 4; 
                int i;
                int j;
                int matricula;
                int p1;
                int tr;

                mat=(int**)malloc(lin * sizeof(int*));
                    for(i=0;i<lin;i++){
                        mat[i]=(int*)malloc(col * sizeof(int));
                    }

                printf("Digite as informaçoes do aluno\n");
                printf("matricula\n");
                scanf("%d", &matricula);
                printf("nota da prova\n");
                scanf("%d", &p1);
                printf("nota do trabalho\n");
                scanf("%d", &tr);

                    mat[0][0] = matricula; mat[0][1] = p1; mat[0][2] = tr; mat[0][3] = (p1+ tr)/ 2;
                    
                printf("Digite as informaçoes do  aluno\n");
                printf("matricula\n");
                scanf("%d", &matricula);
                printf("nota da prova\n");
                scanf("%d", &p1);
                printf("nota do trabalho\n");
                scanf("%d", &tr);
                
                mat[1][0] = matricula; mat[1][1] = p1; mat[1][2] = tr; mat[1][3] = (p1+ tr)/ 2;

                printf("Digite as informaçoes do  aluno\n");
                printf("matricula\n");
                scanf("%d", &matricula);
                printf("nota da prova\n");
                scanf("%d", &p1);
                printf("nota do trabalho\n");
                scanf("%d", &tr);
                
                mat[2][0] = matricula; mat[2][1] = p1; mat[2][2] = tr; mat[2][3] = (p1+ tr)/ 2;

                printf("Digite as informaçoes do  aluno\n");
                printf("matricula\n");
                scanf("%d", &matricula);
                printf("nota da prova\n");
                scanf("%d", &p1);
                printf("nota do trabalho\n");
                scanf("%d", &tr);
                
                mat[3][0] = matricula; mat[3][1] = p1; mat[3][2] = tr; mat[3][3] = (p1+ tr)/ 2;

                printf("Digite as informaçoes do  aluno\n");
                printf("matricula\n");
                scanf("%d", &matricula);
                printf("nota da prova\n");
                scanf("%d", &p1);
                printf("nota do trabalho\n");
                scanf("%d", &tr);
                
                mat[4][0] = matricula; mat[4][1] = p1; mat[4][2] = tr; mat[4][3] = (p1+ tr)/ 2;

                 for(i=0;i<lin;i++){
                            for(j=0;j<col;j++){
                                printf("%d  ",mat[i][j]);
                        }
                        printf("\n");
                    }
                    
                    free(*mat);
                    for(i<=col; i= 0; i--){
                        free(mat[i]);
                    }
            }break;
        }

    }while(op!=0);

    return 0;
}

int menu(){
    int op;
    printf(" 1 Para o primeiro exercicio\n");
    printf(" 2 Para o segundo exercicio\n");
    printf(" 3 Para o terceiro exercicio\n");
    printf(" 0 para Sair\n");
    scanf("%d",&op);
    return op;
}
