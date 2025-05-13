#ifndef ADVANCED_OPERATIONS_H
#define ADVANCED_OPERATIONS_H

using namespace std;

#include<bits/stdc++.h>

template<class tt>

class Advanced_Operations{
    
    public:

        double Square_Root(tt x){
            if(x<0)throw invalid_argument("MATH ERROR");
            return sqrt(x);
        }

        double One_Argumented_Log(tt x){
            if(x<=0)throw invalid_argument("MATH ERROR");
            return log(x);
        }

        double Exponential(tt x){
            return exp(x);
        }

        double Sin(tt x){
            return sin(x*M_PI/180.0);
        }

        double Inverse_Sin(tt x){
            if(x < -1 || x > 1) throw invalid_argument("MATH ERROR");
            return asin(x) * 180.0 / M_PI;
        }

        double Cos(tt x){
            return cos(x*M_PI/180.0);
        }

        double Inverse_Cos(tt x){
            if(x < -1 || x > 1) throw invalid_argument("MATH ERROR");
            return acos(x) * 180.0 / M_PI;
        }

        double Tan(tt x){
            if(fmod(x,180.0)==90)throw invalid_argument("MATH ERROR");
            return tan(x*M_PI/180.0);
        }

        double Inverse_Tan(tt x){
            return atan(x) * 180.0 / M_PI;
        }
        
        double Sinh(tt x){
            return sinh(x*M_PI/180.0);
        }
        
        double Inverse_Sinh(tt x){
            return asinh(x) * 180.0 / M_PI;
        }

        double Cosh(tt x){
            return cosh(x*M_PI/180.0);
        }

        double Inverse_Cosh(tt x){
            if(x < 1) throw invalid_argument("MATH ERROR");
            return acosh(x) * 180.0 / M_PI;
        }

        double Tanh(tt x){
            return tanh(x*M_PI/180.0);
        }

        double Inverse_Tanh(tt x){
            if(x <= -1 || x >= 1) throw invalid_argument("MATH ERROR");
            return atanh(x) * 180.0 / M_PI;
        }

};
#endif 