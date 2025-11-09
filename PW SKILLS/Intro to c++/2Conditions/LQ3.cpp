/*Write a program to input month number and
print total number of days in month using switch
case.*/

#include<iostream>
using namespace std;

int main(){
    
    int m;
    cout << "Enter a month number(1-12 only): ";
    cin >> m;

    switch(m){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            cout << "This month has 31 Days.";
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            cout << "This month has 30 Days.";
            break;
        case 2:
            cout << "This month has 28 Days(29 in leap year).";
            break;
        default:
            cout << "Invalid Month Number!";
    }

}