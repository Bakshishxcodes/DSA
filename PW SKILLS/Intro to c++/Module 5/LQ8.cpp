/*WAP to print reverse of a given
number.*/

#include<iostream>
using namespace std;

int main(){
    int n,nr=0;
    cout << "Enter Number: ";
    cin >> n;
    while(n!=0){
        nr *= 10;
        nr += (n%10);
        n /= 10;
    }
    cout << endl << "its reverse: " << nr;
}