#ifndef SYSTEM_H
#define SYSTEM_H

#include<bits/stdc++.h>

using namespace std;

#include "Calculator.h"
#include "SimpleOperations.h"
#include "AdvancedOperations.h"
#include "Memory.h"

template<class t,class t1,class tt>

class System{
    private:
        Calculator<t, t1, tt>cal;
    public:
        System(){
            cout << endl;cout << endl;cout << endl;
            cout << "                                      Welcome to the Calculator" << endl;
            cout << "                   This is a simple calculator that can perform basic and advanced operations." << endl;
        }
        ~System(){
            cout << "                                 Thank you for using the calculator!" << endl;
        }
        void Run(){
            int choise;
            do{
                cout << endl;
                cout << "Enter Operation" << endl;
                cout << "1) Simple Operations (+,-,*,/,lcm,gcd,pow)" << endl;
                cout << "2) Advanced Operations (sqrt,log,exp,sin,asin,cos,acos,tan,atan,sinh,asinh,cosh,acosh,tanh,atanh)" << endl;
                cout << "3) Memory Operations (Store,Recall,Clear)" << endl;
                cout << "4) Exit" << endl;
                cin >> choise;
                if(choise == 1){
                    string selection;
                    cout << endl;
                    cout << "Enter Operation" << endl;
                    cout << " + " << endl;
                    cout << " - " << endl;
                    cout << " * " << endl;
                    cout << " / " << endl;
                    cout << " lcm " << endl;
                    cout << " gcd " << endl;
                    cout << " pow " << endl;
                    cin >> selection;
                    string response;
                    cout << "need to use a value in memory?(Y/N)"<<endl;
                    cin >> response;
                    if(response == "Y"||response == "y"){
                        t val = cal.last_value();
                        cout << "1st number is: " << val << endl;
                        cout << "Enter 2nd number: " << endl;
                        int num2; cin >> num2;
                        cal.Perform_Simple_operations(selection,val,num2);
                    }else{
                        cout << "Enter 1st number: " << endl;
                        int num1; cin >> num1;
                        cout << "Enter 2nd number: " << endl;
                        int num2; cin >> num2;
                        cal.Perform_Simple_operations(selection,num1,num2);
                    }
                }
                else if(choise == 2){
                    cout << endl;
                    cout << "Enter Operation" << endl;
                    string selection1;
                    cout << " sqrt " << endl;
                    cout << " log " << endl;
                    cout << " exp " << endl;
                    cout << " sin " << endl;
                    cout << " asin " << endl;
                    cout << " cos " << endl;
                    cout << " acos " << endl;
                    cout << " tan " << endl;
                    cout << " atan " << endl;
                    cout << " sinh " << endl;
                    cout << " asinh " << endl;
                    cout << " cosh " << endl;
                    cout << " acosh " << endl;
                    cout << " tanh " << endl;
                    cout << " atanh " << endl;
                    cin >> selection1;
                    string response1;
                    cout << "need to use a value in memory?(Y/N)"<<endl;
                    cin >> response1;
                    if(response1 == "Y"||response1 == "y"){
                        t val1 = cal.last_value();
                        cout << "1st number is: " << val1 << endl;
                        cal.Perform_Advanced_operations(selection1,val1);
                    }else{
                        cout << "Enter 1st number: " << endl;
                        int num1; cin >> num1;
                        cal.Perform_Advanced_operations(selection1,num1);
                    }
                }
                else if(choise == 3){
                    int selection3;
                    cout << endl;
                    cout << "Enter Operation" << endl;
                    cout << "1) Store Manually " << endl;
                    cout << "2) Recall " << endl;
                    cout << "3) Clear " << endl;
                    cin >> selection3;
                    if(selection3 == 1){
                        cout << "Enter number: " << endl;
                        int num1; cin >> num1;
                        cal.Store_In_Memory(num1);
                    }
                    else if(selection3 == 2){
                        cal.Recall_From_Memory();
                    }
                    else if(selection3 == 3){
                        cal.Clear_From_Memory();
                    }
                }
                else if(choise!=4){
                    cout << "Invalid Option. Pleas try again!" << endl;
                }
            }
            while(choise!=4);
        }
};


#endif 
