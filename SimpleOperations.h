#ifndef SIMPLE_OPERATIONS_H
#define SIMPLE_OPERATIONS_H

using namespace std;

template<class t,class t1>

class Operations{
    public:
    virtual t execute(t x , t1 y)=0;
    virtual ~Operations(){};
};


template<class t,class t1>

class Add:public Operations<t, t1>{
    public:
        t execute(t x , t1 y){
            return x+y;
        }
};


template<class t,class t1>

class Subtract:public Operations<t, t1>{
    public:
        t execute(t x , t1 y){
            return x-y;
        }
};


template<class t,class t1>

class Multibly:public Operations<t, t1>{
    public:
    t execute(t x , t1 y){
        return x*y;
    }
};

template<class t,class t1>

class Power:public Operations<t, t1>{
    public:
        t execute(t x , t1 y){
            return pow(x , y);
        }
};

template<class t,class t1>

class LCM:public Operations<int, int>{
    public:
        int execute(int x , int y){
            if(x<=0 || y<=0)throw invalid_argument("MATH ERROR");
            return lcm(x , y);
        }
};


template<class t,class t1>

class GCD:public Operations<int, int>{
    public:
        int execute(int x , int y){
            if(x<=0 || y<=0)throw invalid_argument("MATH ERROR");
            return gcd(x , y);
        }
};



template<class t,class t1>

class Divied:public Operations<t, t1>{
    public:
        t execute(t x , t1 y){
            if(y==0){
                throw runtime_error("Cannot divide by zero");
            }
            return x/y;
        }
};



#endif 
