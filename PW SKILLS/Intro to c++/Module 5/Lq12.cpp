/*Two numbers are entered through the
keyboard. Write a program to find the value of one
number raised to the power of another.*/

#include<iostream>
using namespace std;

int main(){
    int a,b,res=1;
    cout << "Enter Number: ";
    cin >> a;
    cout << "Enter power: ";
    cin >> b;

    if(b>0){
        for(int i=1;i<=b;i++){
            res*=a;
        }
        cout << a << " raised to the power " << b << ": " << res;
    }
    else if(b==0) cout << a << " raised to the power " << b << ": " << res;
    else{
       for(int i=1;i<=-b;i++){
            res*=a;
        }
        cout << a << " raised to the power " << b << ": " << 1.0/res; 
    }
    return 0;
}