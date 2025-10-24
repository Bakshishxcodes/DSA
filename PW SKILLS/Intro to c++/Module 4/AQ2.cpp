/*WAP to find the difference between ASCII of two characters ,take them as input .*/

#include<iostream>
using namespace std;

int main(){
    char a,b;
    cout << "Enter 2 Characters: ";
    cin >> a >> b;
    cout << "\ndifference between ASCII of two characters: " << (int)a - (int)b;
    return 0;
}