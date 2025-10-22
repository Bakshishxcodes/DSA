/*Write a program to create a calculator that
performs basic arithmetic operations (add,
subtract, multiply and divide) using switch case
and functions. The calculator should input two
numbers and an operator from user.*/

#include<iostream>
using namespace std;

float sum(float a,float b){
    return a+b;
}

float difference(float a,float b){
    return a-b;
}

float product(float a,float b){
    return a*b;
}

float divresult(float a,float b){
    return a/b;
}

int main(){
    float a,b;
    char op;
    cout << "Enter first operand: ";
    cin >> a;
    cout << "Enter operator(use +,-,*,/ only): ";
    cin >> op;
    cout << "Enter second operand: ";
    cin >> b;

    switch(op){
        case '+':
            cout << "Answer: " << sum(a,b);
            break;
        case '-':
            cout << "Answer: " << difference(a,b);
            break;
        case '*':
            cout << "Answer: " << product(a,b);
            break;
        case '/':
            cout << "Answer: " << divresult(a,b);
            break;
        default:
            cout << "Invalid Operator!";    
    }
    
}