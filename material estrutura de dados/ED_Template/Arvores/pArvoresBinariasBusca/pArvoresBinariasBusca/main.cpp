//
//  main.cpp
//  pArvoresBinariasBusca
//
//  Created by Rogério Sousa e Silva on 11/05/2018.
//  Copyright © 2018 Rogério Sousa e Silva. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;
struct noh{
    int info;
    struct noh *esq,*dir;
};
typedef struct noh *ARV;

void insArvoreBB(ARV *a, int vr);
int pesquisaElementoABB(ARV a, int vr);
ARV retornaElementoABB(ARV a, int vr);
int alturaABB(ARV a);
int contarNosABB(ARV a);
int ehCompletaABB(ARV a);
int estritamenteBinariaABB(ARV a);

int main(int argc, const char * argv[]) {
    ARV arvore=NULL;
    insArvoreBB(&arvore,5);
    insArvoreBB(&arvore,3);
    insArvoreBB(&arvore,7);
//    insArvoreBB(&arvore,1);
//    insArvoreBB(&arvore,4);
//    insArvoreBB(&arvore,6);
//    insArvoreBB(&arvore,8);
//    insArvoreBB(&arvore,9);
//    insArvoreBB(&arvore,10);

//    cout << arvore << endl;
    cout << alturaABB(arvore) << endl;
    cout << contarNosABB(arvore) << endl;
    cout << ehCompletaABB(arvore) << endl;
    cout << estritamenteBinariaABB(arvore) << endl;

    return 0;
}

void insArvoreBB(ARV *a, int vr){
    if(*a){
        if(vr<(*a)->info){
            insArvoreBB(&((*a)->esq),vr);
        }else{
            insArvoreBB(&((*a)->dir),vr);
        }
    } else {
        *a = (ARV) malloc(sizeof(struct noh));
        (*a)->info = vr;
        (*a)->esq = NULL;
        (*a)->dir = NULL;
    }
}

int pesquisaElementoABB(ARV a, int vr){
    if(a){
        if(a->info == vr){
            return 1;
        }else{
            if(vr<a->info){
                return pesquisaElementoABB(a->esq,vr);
            }else{
                return pesquisaElementoABB(a->dir,vr);
            }
        }
    } else {
        return 0;
    }
}

ARV retornaElementoABB(ARV a, int vr){
    if(a){
        if(a->info == vr){
            return a;
        }else{
            if(vr<a->info){
                return retornaElementoABB(a->esq,vr);
            }else{
                return retornaElementoABB(a->dir,vr);
                
            }
        }
    } else {
        return NULL;
    }
}

int alturaABB(ARV a){
    if(!a)
        return 0;
    else {
        int he=alturaABB(a->esq);
        int hd=alturaABB(a->dir);
        return 1+((he>hd)?he:hd);
    }
}
int contarNosABB(ARV a){
    if(!a) return 0;
    else return 1+contarNosABB(a->esq)+contarNosABB(a->dir);
}

int ehCompletaABB(ARV a){
    return (contarNosABB(a)==(pow(2,alturaABB(a))-1))&&a;
}

int estritamenteBinariaABB(ARV a){
    if(!a)
        return 0;
    else {
        if((!a->esq&&a->dir)||(a->esq&&!a->dir))
            return 0;
        else
            if(a->esq&&a->dir)
                return estritamenteBinariaABB(a->esq)&&estritamenteBinariaABB(a->dir);
        else return 1;
    }
}
