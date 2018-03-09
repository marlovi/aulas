#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
void quadrado(vector<float> &);
void imprimir(vector<float> &);
void preencher_vetor(vector<float> &);
template<typename X> X menor(const X &, const X &);
template<typename X> void swap(const X &, const X &);
template<typename X> X maior(const X &, const X &, const X &);
template<typename X> X media(const X &, const X &,const X &, const X &);
int menu();
int main(){

    int op = 0;

    do{
        op = menu();
        switch(op){
            case 1:{
                int a;
                int b;
                cout << "Informe o valor para variável A" << endl;
                cin >> a;
                cout << "Informe o valor para variável B" << endl;
                cin >> b;
                swap(a,b);
                cout <<" A = " <<a << " B= " <<b<< endl;
            } break;
            case 2:{
                float  a;
                float b;
                float c;
                cout << "Informe o valor para variável A" << endl;
                cin >> a;
                cout << "Informe o valor para variável B" << endl;
                cin >> b;
                cout << "Informe o valor para variável C" << endl;
                cin >> c;
                cout << "O maior elemento é  "<< maior(a,b,c) << endl;
            }break;
            case 3:{
                float  a;
                float b;
               
                cout << "Informe o valor para variável A" << endl;
                cin >> a;
                cout << "Informe o valor para variável B" << endl;
                cin >> b;
               
                cout << "O menor elemento é  "<< menor(a,b) << endl;
            }break;
            case 4:{
                float  a;
                float b;
                float c;
                float d;
                cout << "Informe o valor para variável A" << endl;
                cin >> a;
                cout << "Informe o valor para variável B" << endl;
                cin >> b;
                cout << "Informe o valor para variável C" << endl;
                cin >> c;
                cout << "Informe o valor para variável D" << endl;
                cin >> d;

            }break;
            case 5:{
                vector<float> vetor;
                preencher_vetor(vetor);
                quadrado(vetor);
                imprimir(vetor);
            }break;
            default: cout << "Opção Inválida"<<endl;
        }
    }while(op != 0 );

    return 0;

}

int menu(){
    int op = 0;
    cout << "1)  Desenvolva uma aplicação e uma função swap utilizando template que viabilize a troca de conteúdo de duas variáveis  a e b para qualquer tipo de dado primitivo;"<<endl;
    cout << "2)  Desenvolva uma aplicação e uma função utilizando template que retorne o maior elemento entre três variáveis a, b e c;"<<endl;
    cout << "3)  Desenvolva uma aplicação e uma função utilizando template que retorne o menor elemento entre duas variáveis a e b." << endl;
    cout << "4)  Desenvolva uma aplicação e uma função utilizando template que retorne a média aritmética." << endl;
    cout << "5)  Desenvolva uma aplicação e funções quando julgar necessário, que dê ao  usuário a possibilidade de adicionar até 10 elementos. Adicione estes elementos em uma estrutura de dados do tipo vector, eleve todos os elementos do vetor ao quadrado, utilizando a função pow, e imprima o vetor com os elementos alterados na tela."<<endl;
    cout << "0)  para sair" << endl;
    cin >> op ;
    return op;
}
template<typename X> void swap(const X &a, const X &b){
    X aux = a;
    a = b;
    b = aux;
}
template<typename X> X maior(const X &a, const X &b, const X &c){
    X res = 0.0f;
    if(a > b && a > c) res = a;
    else if(b > a && b > c ) res = b;
    else res = c;
    return res;
}
template<typename X> X menor(const X &a, const X &b){
    return (a < b)? a : b;
}
template<typename X> X media(const X &a, const X &b,const X &c, const X &d){
    return (a + b + c + d) /4;
}

void preencher_vetor(vector<float> &v){
    float valor =1.0f;
    while(valor != -1.f){
        cout << "Informe um valor ";
        cin >> valor;
       if(valor != -1.f) v.push_back(valor);
    }
    
}
void imprimir(vector<float> & v){
    for(vector<float>::iterator it = v.begin(); it != v.end(); it++){
        cout << (*it) << endl;
    }
}
void quadrado(vector<float> &v){
    for(vector<float>::iterator it = v.begin(); it != v.end(); it++){
       (*it) = powf((*it),2);
    }
}