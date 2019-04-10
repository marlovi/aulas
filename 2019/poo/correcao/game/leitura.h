#ifndef LEITURA_H
#define LEITURA_H
#include <string>
#include <iostream>

using namespace std;

class Leitura{
    private:

    public:
        int getInt();
        float getFloat();
        string getString();
        char getChar();
        long int getLongInt();
        long double getLongDouble();
    
};

#endif