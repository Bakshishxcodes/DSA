/*WAP to count digits of a given number.*/

#include<iostream>
using namespace std;

int main(){
    int count=0;
    long long n;
    cout << "Enter Number: ";
    cin >> n;

    if(n==0) count = 1; // if input is zero there is still a single digit there.

    int i=0;
    while(n!=0){
        n/=10;
        count++;
    }
    cout << endl << "The number has " << count << " digits.";
    return 0;
}