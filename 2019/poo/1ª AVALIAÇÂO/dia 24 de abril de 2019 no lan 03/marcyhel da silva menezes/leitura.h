#ifndef LEITURA_H
#define LEITURA_H
#include<string>
#include<iostream>

#include<cstdlib>
#include<ctime>

using namespace std;

class Leitura{
    public:
        int getInt();
        float getFloat();
        char getChar();
        long int getLongint();
        string getString();
        double getDouble();
	    long double getLongDouble();
        
};


#endif
