//
//  main.cpp
//  p1138
//
//  Created by Rogério Sousa e Silva on 29/03/2018.
//  Copyright © 2018 Rogério Sousa e Silva. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, const char * argv[]) {
    unsigned long int base[9]={1,10,100,1000,10000,100000,1000000,10000000,100000000};
    unsigned long int res[10], dif[10];
    unsigned long int A,B,a;
    unsigned long int fIntIni, fIntFin, fInicial,fFinal, f;
    int i,j, nDigIni, nDigFin, tDigFin;
    do{
        cin >> A >> B;
        if(A && B){
            for(i=0;i<10;i++){
                res[i]=0;
                dif[i]=0;
            }
            //encontrando tamanho do numero -- percorrendo a base fim->inicio
            //numeros iniciais "A"
            for(i=8;i>=0;i--){
                if(A/base[i])break;
            }
            //base[i] determina o tamanho do numero
            //definir as tres faixas {inicial(incompleta) e intermediaria inicial(completa)}
            fInicial=(int)(A/base[i]);
            nDigIni=i;
            
            //numeros finais "B"
            for(i=8;i>=0;i--){
                if(B/base[i])break;
            }
            //base[i] determina o tamanho do numero
            fFinal=(int)(B/base[i]);
            nDigFin=i;
            
//            if(nDigIni<nDigFin){
//                fInicial=1;
//            }

            fIntFin=0;
            fIntIni=0;
            if(fFinal-fInicial>1){
                fIntFin=fFinal-1;
                fIntIni=fInicial+1;
            }
            // #### TESTES ###
//            cout << endl << "Inicial: " << fInicial << endl;
//            cout << "Intermediarias: " << fIntIni << " - " << fIntFin << endl;
//            cout << "Final: " << fFinal << endl;
//            cout << "Dígitos Ini: "<<nDigIni<<"::" <<pow(10,nDigIni)<<" Final: " << nDigFin<<"::"<< pow(10,nDigFin) << endl << endl;
            // #### TESTES ###

            // contar dígitos da faixa inicial (total)
            tDigFin=nDigFin;
            while(tDigFin>=0){
                for(j=0;j<10;j++){
                    res[j]+=(fInicial==j?pow(10,tDigFin):0)+(tDigFin*pow(10,tDigFin-1));
                }
                tDigFin--;
            }
            // F.Bruta para contar os excedentes do inicio
            for(f=A-1;f>0;f--){
                a=f;
                while(a/10){
                    dif[a%10]++;
                    a/=10;
                }
                dif[a%10]++;
            }
            
            // contar dígitos das faixas intermediárias
            tDigFin=nDigFin;
            while(tDigFin>=0){
                for(f=fIntIni;f<=fIntFin;f++){
                    // para cada faixa intermediária, contar todos digitos
                   for(j=0;j<10;j++){
                       res[j]+=(f==j&&f>0?pow(10,tDigFin):0)+(tDigFin*pow(10,tDigFin-1));
                   }
                }
                tDigFin--;
            }
            
            // contar dígitos da faixa final
            tDigFin=nDigFin;
            while(tDigFin>=0){
                for(j=0;j<10;j++){
                    res[j]+=(fFinal==j?pow(10,tDigFin):0)+(tDigFin*pow(10,tDigFin-1));
                }
                tDigFin--;
            }
            // F.Bruta para contar os excedentes do final
            for(f=((fFinal+1)*pow(10,nDigFin))-1;f>B;f--){
                a=f;
                while(a/10){
                    dif[a%10]++;
                    a/=10;
                }
                dif[a%10]++;
            }
            //Descontar digitos excedentes (inicio e fim)
            for(j=0;j<10;j++){
                res[j]-=dif[j];
            }
            
            // Apresentar resultado
            for(i=0;i<9;i++){
                cout << res[i] << ' ';
            }
            cout << res[i] << endl;
        }
    }while(A && B);
    return 0;
}
