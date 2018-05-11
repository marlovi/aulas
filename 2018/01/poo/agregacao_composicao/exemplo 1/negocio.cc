#include "negocio.h"


void Negocio::inicio(){
    int op = 0;
    do{
        op = menu();
        switch(op){
            case 0:
                cout << "Até a próxima" <<endl;
            break;
            case 1:
                colecao.push_back(criarPessoa());
            break;
            case 2:
            break;
            case 3: imprimir();
            break;

            default: 
                cout << "opção inválida" << endl;
        }
    }while( op != 0);
}

Endereco* Negocio::criarEndereco(){
    string logradouro;
    string cidade;
    int numero;
    cout << "Informe o logradouro"<< endl;
    getline(cin,logradouro);
    cout << "Informe a cidade " << endl;
    getline(cin,cidade);
    cout << "Informe o número" << endl;
    cin >> numero;

    Endereco* e = new Endereco();
    e->setCidade(cidade);
    e->setLogradouro(logradouro);
    e->setNumero(numero);
    return e;
}

Pessoa* Negocio::criarPessoa(){
    string nome;
    cin.ignore();
    cout <<"Informe o nome "<< endl;
    getline(cin,nome);
    Pessoa* pessoa = new Pessoa();
    pessoa->setNome(nome);
    //fazendo a composição
    pessoa->setEndereco(criarEndereco());
    pessoa->setTelefones(criarTelefones());//agregação
   

    return pessoa;
}

vector<Telefone*> Negocio::criarTelefones(){
     vector<Telefone*> telefones;
     char op  = 'i';
    do{ 
        cout <<"Digite 's' para cadastrar um telefone "<<endl;
        cin >> op;
        if(op =='s'){
            Telefone* t  = new Telefone();
            cout <<"Informe o DDD" << endl;
            int ddd;
            string numero;
            cin >> ddd;
            cin.ignore();
            cout << "Informe o número *****-****" << endl;
            getline(cin, numero);

            t->setNumero(numero);
            t->setDdd(ddd);
            telefones.push_back(t);

        }
    }while(op == 's');
    
    return telefones;
}
void Negocio::imprimir(){
    for(vector<Pessoa*>::iterator it = colecao.begin() ; it != colecao.end(); it++){
        imprimir( *it ); // pessoa
        imprimir( (*it)->getEndereco()); // obj endereco

       
         vector<Telefone*> ve = (*it)->getTelefones();
         if(ve.size() != 0){
               cout << "---------------Phone( Phones )-----------------" << endl;
         }
        for(vector<Telefone*>::iterator ifone = ve.begin() ; ifone != ve.end(); ifone++){
            imprimir( *ifone );
        }
    }
}
void Negocio::imprimir(Pessoa* p){
    cout << "-------------------------------------------"<<endl;
    cout << "Nome " << p->getNome() << endl;
}
void Negocio::imprimir(Endereco* e){
    cout << "Logradouro " << e->getLogradouro() << endl;
    cout << "Cidade " << e->getCidade() << endl;
    cout << "Número " << e->getNumero() << endl;
}
void Negocio::imprimir(Telefone* t){
  
    cout << "telefone  " << " ("<<t->getDdd() 
         << ") "<< t->getNumero()  << endl;
    
}
int Negocio::menu(){
    int op;
        cout << "Informe 1 inserir uma pessoa "<<endl;
        cout << "Informe 2 inserir um professor " << endl;
        cout << "Informe 3 para relatório geral " << endl;
        cout << "Informe 0 para sair" << endl;
        cin >> op;
        return op;
}