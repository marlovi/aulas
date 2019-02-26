#include "veiculo.h"
#include <vector>

using namespace std;
int main(int argc,char** argv){

    Veiculo *uno;
    vector<Veiculo*> vetor;

    

    Veiculo *ferrari = new Veiculo("Ferrari");
    uno = new Veiculo("FIAT");
    //uno->marca = "FIAT";
    uno->ano = 2015;
    uno->flex = false;
    // uno->imprimir();

    vetor.push_back(ferrari);
    vetor.push_back(uno);

    cout << "Existe " <<  vetor.size()   <<" Objetos no vetor de Veiculos"<<endl;

    cout << "Imprimindo objetos do vector "<<endl;
	 for(vector<Veiculo*>::iterator it = vetor.begin() ;            it != vetor.end(); it++) {
	   (*it)->imprimir();
      }

	 vetor.pop_back();

  cout << "Imprimindo objetos do vector "<<endl;
  vector<Veiculo*>::iterator  it;
  for( it= vetor.begin(); it != vetor.end(); it++) {
	   (*it)->imprimir();
      }








    
    //delete ferrari;
    
    cout << " MARCA " << ferrari->marca << endl;
    
    /*
    Veiculo *gol = new Veiculo();
    gol->marca = "GOL";
    gol->ano = 2019;
    gol->flex  = true;

    gol->imprimir();
    uno->marca = "Nacional";
    uno->imprimir();*/
    return 0;
}
