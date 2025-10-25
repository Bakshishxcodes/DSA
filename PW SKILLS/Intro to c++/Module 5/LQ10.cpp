/*Print the factorial of a given number ‘n’.*/

#include<iostream>
using namespace std;

int main(){
    int n;
    long long fact = 1;
    cout << "Enter Number: ";
    cin >> n;
    
    if(n==0 or n==1) 
        cout << endl << "Factorial of given number is: " << 1;
    else{
        for(int i=2;i<=n;i++) fact *= i;
        cout << endl << "Factorial of given number is: " << fact;
    }

}