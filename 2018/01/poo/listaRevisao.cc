#include <iostream>
#include <cmath>
#include <vector>
#include <iomanip>
using namespace std;
int menu();
template<typename T> void swap(const T &, const T &);
int main(){ 
    int op =0;
    cout <<setprecision(3) << 2.33333333333333 << endl;
    do{
        op = menu();
        switch(op){
            case 1:{
               int a=1,b=2;
               float c=5.6,d=2.1;
               char f='a', g='b';


               swap(a,b); 
               swap(c,d) ;
               swap(f,g) ;

               cout << a<<"   "<<b << endl;
               cout << c << "   " << d << endl;
               cout << f << "   " << g << endl;
            
          } 
          break;
          case 2:{
              //aqui 
          }break;
        }
    }while(op != 0);
    return 0;
}

int menu(){
    int o;
    cout << "Selecione 1 para o Executar o primeiro exercício " << endl;
    cout << "Selecione 0 para SAIR " << endl;
    cin >> o;
    return o;
}

template<typename T> void swap(const T &a, const T & b){
    T aux;
    aux  = b;
    b=a;
    a=aux;
}

//criara função 

