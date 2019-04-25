#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
#include<vector>

using namespace std;
class Jogador{
  private:

  public:
  int timeA;
     int timeB;
     int eficiencia;
     char jogador;
     char superjogador;
     int overall;
};
int gettimeA();
int gettimeB();
int geteficiencia();
char getjogador();
char getsuperjogador();
int getoverall();

int settimeA(const int &timeA);
int settimeB(const int &timeB);
int seteficiencia(const int &eficiencia);
int setjogador(const char &jogador);
int setsuperjogador(const char &superjogador);
int setoverall(const int &overall);

int main(){
 int c, jogador,timeA,timeB,eficiencia,superjogador,overall;
 cout << "Time A" << endl;
 for(c=0;c<=2;c++){
 cin >> timeA;
 }
 cout << "Time B" << endl;
 for(c=0;c<=2;c++){
 cin >> timeB;
 }

}


