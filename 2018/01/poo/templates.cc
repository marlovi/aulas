#include <iostream>

using namespace std;

template<typename OIOI> OIOI soma( const  OIOI &a, const OIOI &b){
     return a + b;
}

int main(){
    int a;
    int b;
    cout << "Informe a "<<endl;

 

    cin >> a;
    cout << "Valor de a é "<< a << endl;
    return 0;
}