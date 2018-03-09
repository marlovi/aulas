#include <iostream>
#include <vector>
using namespace std;
void imprimir_reverso(vector<int> &v); 
int main(){
  vector<int> v1;

  for(int i=0; i<10 ; i++){
    v1.push_back(i+1);
    
  }
  
  for(vector<int>::iterator it= v1.begin(); it != v1.end();it++ ){
    cout << (*it) << endl;
   
  }
  imprimir_reverso(v1);
  return 0;  
}

void imprimir_reverso(vector<int> &v){
  for(vector<int>::reverse_iterator it = v.rbegin() ; it != v.rend(); it++){
    cout << "reverso "<<(*it) <<endl; 
  }
}
