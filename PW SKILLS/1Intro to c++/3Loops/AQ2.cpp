/*WAP to print the sum of all the even digits of a given number.*/

#include<iostream>
using namespace std;

int main(){
    int n,sum=0;
    cout << "Enter Number: ";
    cin >> n;
    while(n!=0){
        if((n%10)%2==0) sum+=n%10;
        n/=10;
    }
    cout << endl << "sum of its even digits " << ": " << sum;
    return 0;
}