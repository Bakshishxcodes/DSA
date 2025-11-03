/*Pascal triangle*/

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
// pascal triangle printing funtion
void printpascal(int n){
    cout << endl;
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=i;j++) cout << ncr(i,j) << " ";
        cout << endl;
    }
}

int main(){
    int n;
    cout << "till where you want to get pascal triangle printed: ";
    cin >> n;
    printpascal(n);
}