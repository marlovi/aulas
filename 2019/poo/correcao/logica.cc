#include "logica.h"

void Logica::iniciar(){
    int op = 0;
    do{
        op = menu();
        switch(op){
            case 0: 
                cout << "saíndo da aplicação " <<endl;
            break;
            case 1:
            vetor.push_back(criarAluno());
            break;
            case 2: 
                for(vector<Aluno*>::iterator it = vetor.begin() ; it != vetor.end() ; it++){
                   Aluno* x  = (*it);
                   cout<<"-----------------------------------------"<<endl;
                   imprimirAluno(x); //imprimirAluno( (*it) ); 
                }
            break;
            default:
                cout << "Opção Inválida" << endl;
        }

    }while(op!=0);    
}

int Logica::menu(){
    int op; 
    cout <<  " Digite 1 para cadastar um aluno "<< endl;
    cout <<  " Digite 2 para um relatório de alunos" <<endl;
    cin >> op;
     return op;
}

Aluno* Logica::criarAluno(){
    Leitura* l = new Leitura();
    Aluno* aluno; 


    cout << "0 para informar o nome 1 para não informar o nome " << endl;
    int o = l->getInt(); 

    if(o == 1) aluno = new Aluno();
    else{
        string n; 
        cout << "Informe o nome "<< endl;
        cin.ignore();
        getline(cin,n);
        aluno = new Aluno(n);
    }



    //aluno  = new Aluno();

    cin.ignore();
    
    cout << "Informe o RG" << endl;
    aluno->setRg(l->getString());
    cout << "Informe o CPF"<<endl;
    aluno->setCpf(l->getString());
    cout << "Informe o email" << endl;
    aluno->setEmail(l->getString());
    cout << "Informe o endereco" << endl;
    aluno->setEndereco(l->getString());
    cout << "Informe a matrícula "<< endl;
    aluno->setMatricula(l->getLongInt());
    cout << "Informe o telefone"<<endl;
    cin.ignore();
    aluno->setTelefone(l->getString());
    return aluno;
}

void Logica::imprimirAluno(Aluno* a){
    cout << "Nome  " << a->getNome() << endl;
    cout << "RG " << a->getRg() << endl;
    cout << "Cpf " << a->getCpf() <<endl;
    cout << "E-mail" << a->getEmail() << endl;
    cout << "Endereço " << a->getEndereco()  << endl;
    cout << "Matrícula " << a->getMatricula() << endl;
    cout << "Telefone " << a->getTelefone() << endl;
}