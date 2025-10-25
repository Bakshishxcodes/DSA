/*Print the nth fibonacci number.*/

#include<iostream>
using namespace std;

int main(){
    int n,a=1,b=1,c=2;
    cout << "Enter Number: ";
    cin >> n;
    if(n==1 or n==2)
        cout << endl << n <<"th fibonacci number is: " << a;
    else{
        for(int i=3;i<=n;i++){
            a=b;
            b=c;
            c=a+b;
        }
        cout << endl << n <<"th fibonacci number: " << b;
    }

    return 0;
}