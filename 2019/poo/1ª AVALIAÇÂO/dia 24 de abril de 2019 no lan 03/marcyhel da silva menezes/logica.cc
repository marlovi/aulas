#include "logica.h"
#include "leitura.h"
#include<cstdlib>
#include<ctime>
#include <stdlib.h>
int a=0;
int b=0;

void Logica::menu(){
    int op;
    int se;
   
   

    while(1){
        printf("[0]-sair\n[1]-add jogador time A\n[2]-add jogador time B\n[3]-verificar ganhador\n");
        cin>>op;
        system("clear");
        if(op==0){
            break;
        }
        if (op==1){
            


            printf("[0]-voltar\n[1]-jogador nomal\n[2]-superjogador\n");
            cin>>se;
            system("clear");
            if(se==0){

            }
            else if(se==1 ){
                timeA.push_back(cria_time());
                
            }
            else if(se==2){
                timeA.push_back(cria_super_time());
                

            }
        }

        if(op==2){

            printf("[0]-voltar\n[1]-jogador nomal\n[2]-superjogador\n");
            cin>>se;
            system("clear");
            if(se==0){

            }
            if(se==1 ){
                timeB.push_back(cria_timeb());
                
            }
            if(se==2){
                timeB.push_back(cria_super_timeb());
                

            }


        }
        if(op==3){
            ganhador();
        }


    }
}

Time* Logica::cria_time(){
    
    Leitura * l=new Leitura();
    Time * t=new Time();
    int aux;
 
    
    cout<<"qual o nome"<<endl;
    t-> setNome(l->getString());
    cout<<"qual o overall"<<endl;
    t->setOverall(l->getInt());
    aux = t->getOverall();
    srand((unsigned)time(0));
    t->setEficiencia(( rand()%(100-1+1) + 1) * aux );
    a+=t->getEficiencia();
    system("clear");
}
Time*Logica::cria_super_time(){
    Leitura * l =new Leitura();
    int aux1,aux2;
    Super*s=new Super();
    cout<<"qual o nome"<<endl;
    s-> setNome(l->getString());
    cout<<"qual o overall"<<endl;
    s->setOverall(l->getInt());
    aux1 = s->getOverall();
    srand((unsigned)time(0));
    s->setEficiencia(( rand()%(100-1+1) + 1) * aux1 );
    aux2 = s->getEficiencia();
    s->setPoder(aux1*aux2);
    a+=s->getPoder();
    system("clear");
    
}

Time* Logica::cria_timeb(){
    
    Leitura * l=new Leitura();
    Time * t=new Time();
    int aux;
 
    
    cout<<"qual o nome"<<endl;
    t-> setNome(l->getString());
    cout<<"qual o overall"<<endl;
    t->setOverall(l->getInt());
    aux = t->getOverall();
    srand((unsigned)time(0));
    t->setEficiencia(( rand()%(100-1+1) + 1) * aux );
    b+=t->getEficiencia();
    system("clear");
}
Time*Logica::cria_super_timeb(){
    Leitura * l =new Leitura();
    int aux1,aux2;
    Super*s=new Super();
    cout<<"qual o nome"<<endl;
    s-> setNome(l->getString());
    cout<<"qual o overall"<<endl;
    s->setOverall(l->getInt());
    aux1 = s->getOverall();
    srand((unsigned)time(0));
    s->setEficiencia(( rand()%(100-1+1) + 1) * aux1 );
    aux2 = s->getEficiencia();
    s->setPoder(aux1*aux2);
    b+=s->getPoder();
    system("clear");

    
}
void Logica::ganhador(){

    if (timeA.size()!= timeB.size()){
        cout<<"---jogo injusto---- "<<endl;
        cout<<"time A possui "<<timeA.size()<<" jogadores"<<endl;
        cout<<"time B possui "<<timeB.size()<<" jogadores"<<endl;

    }
    else if (a>b){
        cout<<"Time A Ganhou !!"<<endl;
    }
    else {
        cout<<"Time B Ganhou !!"<<endl;
    }
    

}

