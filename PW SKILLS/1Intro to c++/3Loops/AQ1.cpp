/*Print the table of ‘n’. Here ‘n’ is an integer which the user will input.*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter Number: ";
    cin >> n;
    cout << endl << "Its table:- " << endl;
    for(int i=n;i<=10*n;i+=n){
        cout << n << " x " << i/n << " = " << i << endl;
    }
    return 0;
}