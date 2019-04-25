#include "jogador.h"

int menuu();
int pdados(Jogador *jogador,int a);
void somatudo(Jogador *jogadora1,Jogador *jogadora2,Jogador *jogadora3,Jogador *jogadorb1,Jogador *jogadorb2,Jogador *jogadorb3);

int main(int argc,char **argv){

	Jogador *jogadora1 = new Jogador();
	Jogador *jogadora2 = new Jogador();
	Jogador *jogadora3 = new Jogador();
	Jogador *jogadorb1 = new Jogador();
	Jogador *jogadorb2 = new Jogador();
	Jogador *jogadorb3 = new Jogador();




	int auxa = 0;
	int auxb= 0;
	int menu=1;

	while(menu != 0){
		menu = menuu();
		switch(menu){
			case 0: 
				return 0;
				break;
			case 1:
				if(auxa == 0){
					auxa = pdados(jogadora1,auxa);
				break;}
					
				if(auxa == 1){
					auxa = pdados(jogadora2,auxa);
				break;}
					
				if(auxa == 2){
					auxa = pdados(jogadora3,auxa);
					break;}
				
				if(auxa > 2){
					cout << "Todos da equipe A foram preenchidos" << endl;
				}
				break;

			case 2:
				if(auxb == 0){
					auxb = pdados(jogadorb1,auxb);
					break;}
				if(auxb == 1){
					auxb = pdados(jogadorb2,auxb);
					break;}
				if(auxb == 2){
					auxb = pdados(jogadorb3,auxb);
					break;}
				if(auxb > 2){
					cout << "Todos da equipe a foram preenchidos" << endl;
				}
				break;

			case 3:
				somatudo(jogadora1,jogadora2,jogadora3,jogadorb1,jogadorb2,jogadorb3);
				break;

		}	

	}

return 0;
}

int menuu(){
	cout << "Digite 0 para sair" << endl;
	cout << "Digite 1 para adicionar uma pessoa na equipe A" << endl;
	cout << "Digite 2 para adicionar uma pessoa na equipe B" << endl;
	cout << "Digite 3 para somar os alunos" << endl;

	int a;
	cin >> a;
	return a;

}

int pdados(Jogador *jogador,int a){
	int auxint;
	string auxstring;
	cout << "Digite o nome do aluno" << endl;
	cin >> auxstring;
	jogador->setNome(auxstring);

	cout << "Digite o overall do aluno" << endl;
	cin >> auxint;
	if(auxint>=1 || auxint <=100){
	jogador->setOverall(auxint);
	}else {
		cout << "Valor maior que 1 ou menor que 100" << endl;
		return 0;
	}
	jogador->eficiencia(jogador);
	cout <<"A eficiencia do jogador eh " << jogador->getjog_eficiencia() << endl;

	a++;
	return a;


}

void somatudo(Jogador *jogadora1,Jogador *jogadora2,Jogador *jogadora3,Jogador *jogadorb1,Jogador *jogadorb2,Jogador *jogadorb3){
	int auxa;
	int auxb;
	auxa = jogadora1->getjog_eficiencia() + jogadora2->getjog_eficiencia() + jogadora3->getjog_eficiencia();
	auxb = jogadorb1->getjog_eficiencia() + jogadorb2->getjog_eficiencia() + jogadorb3->getjog_eficiencia();
	cout << "equipe A = " << auxa << endl;
	cout << "equipe B = " << auxb << endl;

	if(auxa>auxb){
		cout <<"equipe A ganhou" << endl;
	} else if(auxa<auxb){
		cout <<"equipe B ganhou" << endl;
	} else {
		cout <<"empate" << endl;

	}

}

