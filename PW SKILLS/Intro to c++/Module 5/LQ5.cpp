/*WAP to check if a number is prime or
composite.*/

#include<iostream>
using namespace std;

int main(){
    int n;
    bool flag=1;
    cout << "Enter number: ";
    cin >> n;
    for(int i=2;i<=(n/2);i++){
        if(n%i==0){
            cout << endl << n << " is composite number.";
            flag=0;
            break;
        }
    }
    if(flag == 1) cout << endl << n << " is prime number."; 
    return 0;
}