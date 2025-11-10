/*WAP to print the sum of a given number and its reverse.*/

#include<iostream>
using namespace std;

int main(){
    int n,rn=0,nsave;
    cout << "Enter Number: ";
    cin >> n;
    nsave=n;
    while(n!=0){
        rn*=10;
        rn+=n%10;
        n/=10;
    }
    cout << endl << "sum of this number with its reverse " << ": " << nsave + rn;
    return 0;
}