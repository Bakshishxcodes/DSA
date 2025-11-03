/*Write a function to compute the greatest
common divisor of two given numbers*/

#include<iostream>
using namespace std;

// greatest common divisor
int gcd(int x,int y){
    int a= max(x,y);
    int b =min(x,y);
    while(true){
        int rem=a%b;
        if(rem!=0){
            a=b;
            b=rem;
        }
        else{
            return b;
        } 
    }
}

int main(){
    int x,y;
    cout << "Enter 2 numbers: ";
    cin >> x >> y;

    cout << "greatest common divisor of two given numbers: " << gcd(x,y);
    
    return 0;
}