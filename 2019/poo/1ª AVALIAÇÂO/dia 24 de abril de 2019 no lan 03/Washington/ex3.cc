/*3) Defina polimorfismo, quando pode-se aplicar tal técnica de programação orientada a
objetos? utilize exemplos para convalidar as suas argumentações se julgar
necessário. (0,5)*/
/*R: Polimorfismo pode ser de duas formas sobrecaregar e sobrescrever, quando ultilizamos uma uma função como mesmo nome porem com atributos difrentes,
ou quando passamos somente alguns atributos do mesmo.;*/

/*#include <iostream>

using namespace std;

int soma(int a, int b);
int soma(int a, int b, int c);
float soma(int a, float b, float c);
int main()
{
    int a = 10,
        b = 5,
        c = 15;
    float d = 15.5,
          e = 30.1;
    cout << "Resultado eh: " << soma(a, b) << endl;
    cout << "Resultado eh: " << soma(a, b, c) << endl;
    cout << "Resultado eh: " << soma(a, d, e) << endl;
    return 0;
}
int soma(int a, int b)
{
    return a + b;
}
int soma(int a, int b, int c)
{
    return a + b + c;
}
float soma(int a, float c, float b)
{
    return a + b + c;
}*/

#include <iostream>
#include <string>

using namespace std;
class Pessoa
{
  private:
    string nome;
    int idade;

  public:
    Pessoa(string nome); //sobrecarregando construtor;
    Pessoa(string nome, int idade);
    void setNome(string nome);
    void setIdade(int idade);
    string getNome();
    int getIdade();
    ~Pessoa();
};

Pessoa::Pessoa(string nome)
{
    this->nome = nome;
    this->idade = 0;
}
Pessoa::Pessoa(string nome, int idade)
{
    this->nome = nome;
    this->idade = idade;
}
void Pessoa::setNome(string nome)
{
    this->nome = nome;
}
void Pessoa::setIdade(int idade)
{
    this->idade = idade;
}
string Pessoa::getNome()
{
    return this->nome;
}
int Pessoa::getIdade()
{
    return this->idade;
}
Pessoa::~Pessoa()
{
    cout << "Destruindo objeto" << endl;
}

int main()
{
    Pessoa a("Joao");
    a.setIdade(22);
    Pessoa b("Washington", 20);

    cout << "Meu nome eh: " << a.getNome() << endl;
    cout << "Meu idade eh: " << a.getIdade() << endl;
    cout << endl;
    cout << "Meu nome eh: " << b.getNome() << endl;
    cout << "Meu idade eh: " << b.getIdade() << endl;
    cout << endl;
    return 0;
}