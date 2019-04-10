#include "logica.h"


void Logica::iniciar(){
    int op;

    do{
        op = menu();

        switch(op){
            case 1: 
                    {
                        JogoPc* jogopc = new JogoPc(); 
                    
                        cadastro ( (Game*) jogopc);
                        cadastro(jogopc);

                        vetor.push_back(jogopc);
                    }
            break;
            case 2:{
                cout <<"Informe o título a ser encontrado "<<endl;
                Leitura* l = new Leitura();
                cin.ignore();
                Game* x = pesquisar(l->getString());

                x->imprimir();
                if(JogoPc* x = dynamic_cast<JogoPc*>(x)){
                    x->imprimir();
                }



            

            }break;
            case 3:
                Game* g = new Game();

                if(JogoPc* pc = dynamic_cast<JogoPc*>( g)){
                      cout << "JOGO PC"<<endl;
                }

                
             break;
            
        }
    }while( op != 0 );
}

int Logica::menu(){
    Leitura* l = new Leitura();
    cout << "Digite 1 para cadastrar um jogo de pc" << endl;
    cout << "Digite 2 para Pesquisar Jogo de Pc "<<endl;
    return l->getInt();
}

void Logica::cadastro(Game* g){
    Leitura* l = new Leitura();
    cin.ignore();
    cout << "Informe o nome do jogo "<<endl;
    g->setNome(l->getString());
    cout << "Informe a faixa etária " << endl;
    g->setFaixaEtaria(l->getInt());
    cout << "Informe a produtora "<<endl;

    cin.ignore();
    g->setProdutora(l->getString());
    cout << "Informe o estilo"<<endl;
    g->setEstilo(l->getString());
    cout << "Informe o valor " << endl;
    g->setValor(l->getLongDouble());
    cin.ignore();
    cout << "Informe a data de lançamento"<<endl;
    g->setDataLancamento(l->getString());
}

void Logica::cadastro(JogoPc* p){
  
    Leitura* l = new Leitura();
    
    cout << "Informe a capacidade do clock" << endl;
    p->setClock(l->getFloat());
    cout << "A quantidade de ram " << endl;
    p->setRam(l->getInt());
    cout <<"Tamanho de espaço necessário no HD" << endl;
    p->setQtdMegasHd(l->getInt());
    
}

Game* Logica::pesquisar(const string &nome){
    Game* retorno = NULL; 
    for(vector<Game*>::iterator it = vetor.begin();
    it != vetor.end(); it++){
        if((*it)->getNome().compare(nome) == 0){
            retorno = (*it);
            break;
        }
    }
    return retorno;
}


