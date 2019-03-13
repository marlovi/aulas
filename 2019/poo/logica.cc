#include "logica.h"


void Logica::iniciar(){
    int op = 0;
    do{
        op = menu();
        switch(op){
            case 2:
               vetor.push_back(criarVeiculo());
             break;
            case 3:
                relatorioVeiculo();
            break;
            default:
                cout << "SAINDO "<<endl;
        }
    }while( op != 0 );

}

int Logica::menu(){
    Leitura* l = new Leitura();

    cout << "Informe um valor diferente de ZERO "<<endl;
    cout << "E 0 para sair "<<endl;
    return l->getInt();
}


Veiculo* Logica::criarVeiculo(){
    Veiculo* v = new Veiculo();
    Leitura* l = new Leitura();
    cout << "Informe o ano do veiculo " << endl;
    v->setAno(l->getInt());
    return v;
}

void Logica::relatorioVeiculo(){
    vector<Veiculo*>::iterator it;
    it = vetor.begin();

    cout << "Exemplo de relatório "<<endl;
    for( ; it != vetor.end() ; it++){
        cout << (*it)->getAno() <<endl;
    }
}

