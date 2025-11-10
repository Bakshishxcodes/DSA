/*Combination and Permutation*/

#include<iostream>
using namespace std;

// factorial function
double factof(int x){
    double fact=1;
    for(int i=2;i<=x;i++) fact *= i;
    return fact;
}

// combination function
double ncr(int n,int r){
    return factof(n)/(factof(r)*factof(n-r));
}

// combination function
double npr(int n,int r){
    return factof(n)/factof(n-r);
}

int main(){
    int n,r;
    cout << "Enter n and r: ";
    cin >> n >> r;
    cout << endl << "Its combination(ncr): " << ncr(n,r);
    cout << endl << "Its permutation(npr): " << npr(n,r);
    return 0;
}