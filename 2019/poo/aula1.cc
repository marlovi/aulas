#include<iostream>
using namespace std;

template<typename X, typename Y>  X soma( X x,Y y  ){
    return x+y;
}


int main(int argc, char ** argv){
   /* cout << "Aula 1 " <<std::endl; 
    cout << "saída agora vai " << endl;
    cout << argc << endl;
    cout  << " A quantidade  de tolkens  é " << argc 
          << " O primeiro elemento é " << argv[0] << endl;*/
          int a;
          cin >> a;
          cout << a << endl;
          cout << soma(10,5.9) << endl; 

          const int b = 10;
          b = 11;
          cout << b << endl;
    return 0;
}