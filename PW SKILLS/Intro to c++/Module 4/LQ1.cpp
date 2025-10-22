/*Write a program to check whether a
character is an alphabet or not.*/

#include<iostream>
using namespace std;

int main(){
    char ch;
    cout << "Enter any character: ";
    cin >> ch;
    if((ch>='A' and ch<='Z') or (ch >= 'a' and ch<='z'))
        cout << "Its an Alphabet";
    else
        cout << "Its not an Alphabet";
    return 0;
}