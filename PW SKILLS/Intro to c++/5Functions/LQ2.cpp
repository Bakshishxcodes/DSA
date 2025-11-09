/*Pascal triangle*/

#include<iostream>
using namespace std;

// print "factorial till" function
void printfacttill(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
        cout << i << "! = " << fact << endl;
    }
    return;
}

int main(){
    int n;
    cout << "Enter a number till which factorials get printed: ";
    cin >> n;
    cout << endl;
    printfacttill(n);
    return 0;
}