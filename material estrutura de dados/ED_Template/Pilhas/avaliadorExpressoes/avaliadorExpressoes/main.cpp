//
//  main.cpp
//  avaliadorExpressoes
//
//  Created by Rogério Sousa e Silva on 18/04/2018.
//  Copyright © 2018 Rogério Sousa e Silva. All rights reserved.
//

#include <iostream>
using namespace std;
struct noh {
    char info;
    struct noh *prox;
};
typedef struct noh *PILHA;

char Top(PILHA p);
void Pop(PILHA *p);
void Push(PILHA *p, char vr);
int Empty(PILHA p);
int verificarParenteses(string e);
void converteExpressao(string ea_in, string *ea_out);
int prioridade(char c);

int main(int argc, const char * argv[]) {
    //Em C++
    string e1 = "A*B";
    string e2 = "A*(B+C)";
    string e3 = "A+B*C";
    string e4 = "(B+C)-(D#E)";
    string e5 = "A*(B+C)-(D#E)";
    string e6 = "(A*(B+C)-(D#E))#Q";
    string e7 = "(A*(B+C))#D-E#(F-G)";
    string e8 = "A*(A+A)-(A#A)";
    string e_out;
    //cout << "Validação: " << endl;
    //cout << exp << ": "<< (verificarParenteses(exp)?"Expressão OK":"Expressão Inválida") << endl;
    cout << "Convertendo :" << e1 << endl;e_out="";
    converteExpressao(e1, &e_out);
    cout << e_out << endl;cout << "Convertendo :" << e2 << endl;e_out="";
    converteExpressao(e2, &e_out);
    cout << e_out << endl;    cout << "Convertendo :" << e3 << endl;e_out="";
    converteExpressao(e3, &e_out);
    cout << e_out << endl;    cout << "Convertendo :" << e4 << endl;e_out="";
    converteExpressao(e4, &e_out);
    cout << e_out << endl;    cout << "Convertendo :" << e5 << endl;e_out="";
    converteExpressao(e5, &e_out);
    cout << e_out << endl;    cout << "Convertendo :" << e6 << endl;e_out="";
    converteExpressao(e6, &e_out);
    cout << e_out << endl;    cout << "Convertendo :" << e7 << endl;e_out="";
    converteExpressao(e7, &e_out);
    cout << e_out << endl;    cout << "Convertendo :" << e8 << endl;e_out="";
    converteExpressao(e8, &e_out);
    cout << e_out << endl;
    // Em C
//    char expressao[40];
//    scanf("%[ˆ\n]",expressao);
//    int i;
//    for(i=0;i<strlen(expressao)-1;i++){
//        printf("%c -",expressao[i]);
//    }
//    printf("%c",expressao[i]);
//    return 0;
}

void converteExpressao(string ea_in, string *ea_out){
    PILHA p=NULL;
    for(int i=0;i<ea_in.length();i++){
        if(strchr("({[",ea_in.at(i))!=NULL){
            Push(&p, ea_in.at(i));
        } else {
            if(strchr("+-*/#",ea_in.at(i))!=NULL){
                if(Empty(p)||prioridade(ea_in.at(i))>prioridade(Top(p))){
                    Push(&p, ea_in.at(i));
                }else{
                    while(!Empty(p) && prioridade(ea_in.at(i))<=prioridade(Top(p))){
                        if(strchr("+-*/#",ea_in.at(i))!=NULL)
                            *ea_out+=Top(p);
                        Pop(&p);
                    }
                    Push(&p, ea_in.at(i));
                }
            } else {
                if(strchr(")}]",ea_in.at(i))!=NULL){
                    while(strchr("([{",Top(p))==NULL){
                        *ea_out+=Top(p);
                        Pop(&p);
                    }
                    Pop(&p);
                } else {
                    *ea_out+=ea_in.at(i);
                }
            }
        }
    }
    while(!Empty(p)){
        *ea_out+=Top(p);
        Pop(&p);
    }
}

int prioridade(char c){
    int retorno = 0;
    switch (c){
        case '(':
        case '{':
        case '[':
            retorno=0;
            break;
        case '+':
        case '-':
            retorno = 1;
            break;
        case '*':
        case '/':
            retorno = 2;
            break;
        case '#':
            retorno = 3;
            break;
    }
    return retorno;
}

int verificarParenteses(string e){
    PILHA p=NULL;
    int erro = 0;
    for(int i=0;i<e.length();i++){
        if(e.at(i)=='('){
            Push(&p, '(');
        } else {
            if(e.at(i)==')') {
                if(!Empty(p)){
                    Pop(&p);
                } else {
                    erro=1;
                    break;
                }
            }
        }
    }
    return !erro && Empty(p);
}


char Top(PILHA p){
    if(!Empty(p)){
        return p->info;
    }else{
        return -1;
    }
}


int Empty(PILHA p){
    return p==NULL;
    /* if (p==NULL) return 1; else return 0;*/
}

void Push(PILHA *p, char vr){
    PILHA novo = (PILHA) malloc(sizeof(struct noh));
    if(novo){
        novo->info = vr;
        novo->prox=*p;
        *p = novo;
    }
}

void Pop(PILHA *p){
    PILHA aux;
    if(!Empty(*p)){
        aux=*p;
        *p=(*p)->prox;
        free(aux);
    }
}
