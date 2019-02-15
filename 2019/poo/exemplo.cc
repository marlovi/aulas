#include <iostream>
#include "a.h"

using namespace std;

template <typename T, typename B>  T teste(T t, B b){
    return t+b;
}

int main(int argc,char **argv){
    //const int a = 10;
    cout << teste(1.1,10.2) << endl;
    cout << argc << endl;
    cout << argv[1] << endl;
    A *a = new A();
    a->set_valor(10);
    cout << a->get_valor()+20 << endl;
    return 0;
}

