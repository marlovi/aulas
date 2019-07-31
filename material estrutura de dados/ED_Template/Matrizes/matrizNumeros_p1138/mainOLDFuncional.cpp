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

unsigned long int zeros[9]={1,11,111,1111,11111,111111,1111111,11111111,111111111};

void gerarMapa(unsigned long int mapa[8][10],int nDigFin){
    int e=0,i;
    if(nDigFin==0){
        for(i=0;i<10;i++){
            mapa[e][i]=((e+1)*pow(10,e))-(i==0?zeros[e]:0);
        }
    } else {
        while(e<nDigFin){
            for(i=0;i<10;i++){
                mapa[e][i]=((e+1)*pow(10,e))-(i==0?zeros[e]:0);
            }
            e++;
        }
        while(e){
            for(i=0;i<10;i++){
                mapa[e][i]=(((e+1)*pow(10,e))-(i==0?zeros[e]:0))-mapa[e-1][i];
            }
            e--;
        }
    }
}

int main(int argc, const char * argv[]) {
    unsigned long int res[10], dif[10], mapa[8][10];
    unsigned long int A,B,a;
    unsigned long int f,fi,ff;
    int i,j, nDigIni, nDigFin, tDigIni;
    gerarMapa(mapa,8);
    do{
        cin >> A >> B;
        if(A && B){
            for(i=0;i<10;i++){
                res[i]=0;
                dif[i]=0;
            }

            nDigIni=floor(log10(A));
            nDigFin=floor(log10(B));
            
            tDigIni=nDigIni;
            while(tDigIni<=nDigFin){
                for(i=0;i<10;i++){
                    res[i]+=mapa[tDigIni][i];
                }
                tDigIni++;
            }
            
            if(A>1){
                fi=(unsigned long int)pow(10,nDigIni);
                ff=(unsigned long int)pow(10,nDigIni+1)-1;
                if(A<(ff-fi)/2){
                    for(f=fi;f<A;f++){
                        a=f;
                        while(a/10){
                            dif[a%10]++;
                            a/=10;
                        }
                        dif[a%10]++;
                    }
                } else {
                    for(i=0;i<10;i++){
                        res[i]-=mapa[nDigIni][i];
                    }
                    for(f=A;f<=ff;f++){
                        a=f;
                        while(a/10){
                            res[a%10]++;
                            a/=10;
                        }
                        res[a%10]++;
                    }
                }
            }

            if(B==pow(10,8)){
                res[0]+=8;
                res[1]+=1;
            }else{
                fi=(unsigned long int)pow(10,nDigFin);
                ff=(unsigned long int)pow(10,nDigFin+1)-1;
                if(B<((ff-fi)/2)){
                    for(i=0;i<10;i++){
                        res[i]-=mapa[nDigFin][i];
                    }
                    for(f=fi;f<=B;f++){
                        a=f;
                        while(a/10){
                            res[a%10]++;
                            a/=10;
                        }
                        res[a%10]++;
                    }
                } else {
                    for(f=B+1;f<=ff;f++){
                        a=f;
                        while(a/10){
                            dif[a%10]++;
                            a/=10;
                        }
                        dif[a%10]++;
                    }
                }
            }
            for(j=0;j<10;j++){
                res[j]-=dif[j];
            }
            for(i=0;i<9;i++){
                cout << res[i] << ' ';
            }
            cout << res[i] << endl;
        }
    }while(A && B);
    return 0;
}
