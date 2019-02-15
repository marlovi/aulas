#include <iostream>

using namespace std;

void contador(int *x){
    *x = *x +1;
}

int main(int argc, char** argv){
    int a = 5;
    int b = 6;
    contador(&a);
    contador(&b);

    cout << a << "    " << b << endl;
    return 0;
}