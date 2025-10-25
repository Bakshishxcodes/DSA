/*WAP to print sum of digits of a given
number.*/

#include<iostream>
using namespace std;

int main(){
    long long n;
    int sum=0;
    cout << "Enter Number: ";
    cin >> n;
    while(n!=0){
        sum += n%10;
        n/=10;
    }
    cout << endl << "sum of its digits: " << sum;
    return 0;
}