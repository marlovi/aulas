#ifndef SUPER_H
#define SUPER_H




#include "time.h"

class Super:public Time{

    private:
        int poder;
    public:
        int getPoder();
        void setPoder(const int &);
};
#endif