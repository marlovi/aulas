/*2)  O que são funções do tipo templates? quando pode/deve utilizar as mesmas? em
que contexto a utilização das mesmas é considerada relevante? Utilize exemplos
para convalidar suas argumentações se julgar necessário. (0,5)*/
/*R: Com uso de tecnicas com herença, podemos reproveitar codigo,
 sem a necessidade de escrever por completo. Assim facilitando, a vida do programador.*/

#include <iostream>
#include <string>

using namespace std;
class Animal
{
  private:
    int idade;
    bool voa;

  public:
    Animal()
    {
        this->idade = 0;
        this->voa = false;
    }
    void setIdade(int idade)
    {
        this->idade = idade;
    }
    int getIdade()
    {
        return this->idade;
    }
    void setVoa(bool voa)
    {
        this->voa = voa;
    }
    bool getVoa()
    {
        return this->voa;
    }
    ~Animal()
    {
        cout << "Animal morreu" << endl;
    }
};
class Cachorro : public Animal
{
  private:
    string nome;

  public:
    Cachorro(string nome) : Animal()
    {
        this->nome = nome;
    }
    void setNome(string nome)
    {
        this->nome = nome;
    }
    string getNome()
    {
        return this->nome;
    }
    ~Cachorro()
    {
        cout << "Cachorro morreu" << endl;
    }
};
int main()
{
    Cachorro a("Pug");
    a.setVoa(false);
    a.setIdade(15);
    cout << "NOME: " << a.getNome() << endl;
    cout << "IDADE: " << a.getIdade() << endl;
    cout << endl;
    
    return 0;
}