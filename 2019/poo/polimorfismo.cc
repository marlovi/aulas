#include <iostream> 



using namespace std;

int soma(int valor){
    return 10 + valor;
}
float soma(float a){
    return 15+a;
}
float soma(int valor, float segundo){
    return (float) valor + segundo;
}

int soma (int v, int f){
    return v + f;
}
int soma (float a, float b){
    return (int) a+ b;
}
int main(){

    cout << soma((float) 255) <<endl;
}