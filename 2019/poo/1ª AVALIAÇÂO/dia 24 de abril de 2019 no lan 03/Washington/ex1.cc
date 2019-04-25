/*O Instituto Federal goiano deseja, realizar uma aplicação computacional para
viabilizar o confronto entre os cursos de forma computacional. Um jogador pode ser
representado pelo seu overall ( que é sua habilidade no geral) e nome. Só deve ser
possível instanciar um jogador passando como parâmetro para o método construtor
seu nome, além de possui um método que calcula a eficiência do jogador através da
formula ​ ( rand()%(100-1+1) + 1) * overall . Um jogador super jogador, é um
jogador que possui, o atributo especialista( que é um valor inteiro de 1 até 10), o
super jogador deve sobrescrever o método que calcula a eficiência do jogador, e
obtém o resultado do método sobrescrito da superclasse e multiplica pela
especialidade. Desenvolva uma lógica ou uma main que seja possível adicionar em
2 vetores do tipo vector, um representa o time A e outro representa o time B.
Adicione pelo menos 3 jogadores ou super jogadores em cada um dos vetores e
posteriormente imprima qual equipe ganhou o confronto. Para saber qual equipe
venceu, basta somar todos os método que calcula a eficiência dos jogadores de
cada equipe, e após realizar a comparação, verifique se a equipe A ou B venceu.
Exemplo se a Equipe A tiver 800 pontos e a Equipe B 50 pontos a Equipe A foi a
vencedora do confronto.
(4,0) pontos
OBS: ( A utilização de menus e classe de lógica é opcional se o aluno quiser fazer
toda a lógica de programação na main será considerado )
Obs: deve-se utilizar a biblioteca
#include<cstdlib> //para utilizar a função srand que deve ser utilizada sempre antes
da fórmula apresentada
#include<ctime>
srand((unsigned)time(0));
aleatórios reais.*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

class Jogo
{
  private:
    string nome;
    int eficiencia;
    int overall;

  public:
    Jogo(string nome)
    {
        this->nome = nome;
        this->eficiencia = 0;
        this->overall = 0;
    }
    float setEficiencia(int overall)
    {
        this->overall = overall;
        this->eficiencia = (rand() % (100 - 1 + 1) + 1) * overall;
    }
    float getEficiencia()
    {
        return this->eficiencia;
    }
    int getOverall()
    {
        return this->overall;
    }
    ~Jogo()
    {
        cout << "Destruindo objeto" << endl;
    }
};
int main()
{
    srand(time(NULL));
    Jogo a[3] = {{"Joao"}, {"Pedro"}, {"Lucas"}};
    Jogo b[3] = {{"Joao"}, {"Pedro"}, {"Lucas"}};
    float placar[2] = {0, 0};
    int x = rand() % 10;
    for (int c = 0; c < 3; c++)
    {
        x = rand() % 10;
        a[c].setEficiencia(rand() % 10);
        placar[0] += a[c].getEficiencia();
    }
    for (int c = 0; c < 3; c++)
    {
        a[c].setEficiencia(rand() % 10);
        placar[1] += a[c].getEficiencia();
    }
    cout << "Resultado do Time A:" << endl;
    cout << placar[0] << endl;
    cout << "Resultado do Time :" << endl;
    cout << placar[1] << endl;
    if (placar[0] > placar[1])
    {
        cout << "\33[36;1mTime A venceu!!\33[0m" << endl;
    }
    else if (placar[0] < placar[1])
    {
        cout << "\33[36;1mTime B venceu!!\33[0m" << endl;
    }
    else
    {
        cout << "\33[36;1mEMPATE!!\33[0m" << endl;
    }

    return 0;
}