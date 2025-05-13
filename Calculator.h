#ifndef CALCULATOR_H
#define CALCULATOR_H

#include<bits/stdc++.h>

using namespace std;

#include "SimpleOperations.h"
#include "AdvancedOperations.h"
#include "Memory.h"



template<class t,class t1,class tt>

class Calculator{
    private:
        Add <t, t1>adding;
        Subtract <t, t1>subtracting;
        Multibly <t, t1>multiblaying;
        Divied<t, t1> dividing;
        Power <t, t1>Powering;
        LCM<int, int> Lcm;
        GCD <int, int>Gcd;
        Advanced_Operations<tt>ADVO;
        Memory mem;
        t last_result = 0;
        public:
        void Store(t result) {
            last_result = result;
        }
        t last_value(){
            return last_result;
        }
        void Perform_Simple_operations(string op , t x , t1 y){
            try{
                if(op == "+"){
                    cout << x << " + " << y << " = " << adding.execute(x , y) << endl;
                    Store(adding.execute(x , y));
                }
                else if(op == "*"){
                    cout << x << " x " << y << " = " << multiblaying.execute(x , y) << endl;
                    Store(multiblaying.execute(x , y));
                }
                else if(op == "-"){
                    cout << x << " - " << y << " = " << subtracting.execute(x , y) << endl;
                    Store(subtracting.execute(x , y));
                }
                else if(op == "/"){
                    cout << x << " / " << y << " = " << dividing.execute(x , y) << endl;
                    Store(dividing.execute(x , y));
                }
                else if(op == "lcm"){
                    cout << "lcm" <<  "(" << x << " , " << y << ") " << " = " << Lcm.execute(x , y) << endl;
                    Store(Lcm.execute(x , y));
                }
                else if(op == "gcd"){
                    cout << "gcd" <<  "(" << x << " , " << y << ") " << " = " << Gcd.execute(x , y) << endl;
                    Store(Gcd.execute(x , y));
                }
                else if(op == "pow"){
                    cout << "pow" <<  "(" << x << " , " << y << ") " << " = " << Powering.execute(x , y) << endl;
                    Store(Powering.execute(x , y));
                }
                else{
                    throw invalid_argument("INVALID OPERATION");
                }
            }
            catch(exception&e){
                cout << "Error: " << e.what() << endl;
            }
        }
        void Perform_Advanced_operations(string op , tt x){
            try{
                if(op == "sqrt"){
                    cout << "sqrt" <<  "(" << x <<  ") " << " = " << ADVO.Square_Root(x) << endl;
                    Store(ADVO.Square_Root(x));
                }
                else if(op == "log"){
                    cout << "log" <<  "(" << x <<  ") " << " = " << ADVO.One_Argumented_Log(x) << endl;
                    Store(ADVO.One_Argumented_Log(x));
                }
                else if(op == "exp"){
                    cout << "exp" <<  "(" << x <<  ") " << " = " << ADVO.Exponential(x) << endl;
                    Store(ADVO.Exponential(x));
                }
                else if(op == "sin"){
                    cout << "sin" <<  "(" << x <<  ") " << " = " << ADVO.Sin(x) << endl;
                    Store(ADVO.Sin(x));
                }
                else if(op == "asin"){
                    cout << "asin" <<  "(" << x <<  ") " << " = " << ADVO.Inverse_Sin(x) << endl;
                    Store(ADVO.Inverse_Sin(x));
                }
                else if(op == "cos"){
                    cout << "cos" <<  "(" << x <<  ") " << " = " << ADVO.Cos(x) << endl;
                    Store(ADVO.Cos(x));
                }
                else if(op == "acos"){
                    cout << "acos" <<  "(" << x <<  ") " << " = " << ADVO.Inverse_Cos(x) << endl;
                    Store(ADVO.Inverse_Cos(x));
                }
                else if(op == "tan"){
                    cout << "tan" <<  "(" << x <<  ") " << " = " << ADVO.Tan(x) << endl;
                    Store(ADVO.Tan(x));
                }
                else if(op == "atan"){
                    cout << "atan" <<  "(" << x <<  ") " << " = " << ADVO.Inverse_Tan(x) << endl;
                    Store(ADVO.Inverse_Tan(x));
                }
                else if(op == "sinh"){
                    cout << "sinh" <<  "(" << x <<  ") " << " = " << ADVO.Sinh(x) << endl;
                    Store(ADVO.Sinh(x));
                }
                else if(op == "asinh"){
                    cout << "asinh" <<  "(" << x <<  ") " << " = " << ADVO.Inverse_Sinh(x) << endl;
                    Store(ADVO.Inverse_Sinh(x));
                }
                else if(op == "cosh"){
                    cout << "cosh" <<  "(" << x <<  ") " << " = " << ADVO.Cosh(x) << endl;
                    Store(ADVO.Cosh(x));
                }
                else if(op == "acosh"){
                    cout << "acosh" <<  "(" << x <<  ") " << " = " << ADVO.Inverse_Cosh(x) << endl;
                    Store(ADVO.Inverse_Cosh(x));
                }
                else if(op == "tanh"){
                    cout << "tanh" <<  "(" << x <<  ") " << " = " << ADVO.Tanh(x) << endl;
                    Store(ADVO.Tanh(x));
                }
                else if(op == "atanh"){
                    cout << "atanh" <<  "(" << x <<  ") " << " = " << ADVO.Inverse_Tanh(x) << endl;
                    Store(ADVO.Inverse_Tanh(x));
                }
                else{
                    throw invalid_argument("INVALID OPERATION");
                }
            }
            catch(exception&e){
                cout << "Error: " << e.what() << endl;
            }
        }

        void Store_In_Memory(double v){
            mem.Storee(v);
            last_result = v;
            cout << last_result << " is Stored Manually" << endl;
        }
        void Recall_From_Memory(){
            mem.Recall();
            cout << last_result << " is Recalled" << endl;
        }
        void Clear_From_Memory(){
            mem.Clear();
            last_result = 0;
            cout << last_result << " is Cleared" << endl;
        }

};


#endif