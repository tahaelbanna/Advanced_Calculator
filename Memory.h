#ifndef MEMORY_H
#define MEMORY_H    


using namespace std;

#include<bits/stdc++.h>


class Memory{
    private:

        double value = 0;


    public:

        void Storee(double a){
            value = a;
        }

        double Recall(){
            return value;
        }

        void Clear(){
            value = 0;
        }
};


#endif 
