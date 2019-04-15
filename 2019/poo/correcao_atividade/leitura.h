#ifndef LEITURA_H
#define LEITURA_H

#include <string>


using namespace std;


class Leitura{
    private:
    public:
    int getInt();
    long int getLongInt();
    double getDouble();
    long double getLongDouble();
    string getString();
    bool getBool();
    Leitura();
    ~Leitura();
};



#endif