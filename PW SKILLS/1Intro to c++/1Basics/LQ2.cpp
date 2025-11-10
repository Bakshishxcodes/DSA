/*Take float input and print the fractional part
of the real number.*/
#include<iostream>
using namespace std;

int main(){
    float x;
    cout << "Enter a float number: ";
    cin >> x;
    if(x>=0)
        cout << "Fractional Part: " << x - int(x);
    else
        cout << "Fractional Part: " << x - (int(x)-1);
    return 0;
}