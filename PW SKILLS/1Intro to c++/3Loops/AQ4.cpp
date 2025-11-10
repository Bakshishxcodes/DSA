/*Print the factorials of first ‘n’ numbers*/

#include<iostream>
using namespace std;

int main(){
    int n;
    long long fact=1;
    cout << "Enter Number: ";
    cin >> n;
    for(int i=1;i<=n;i++){
        fact*=i;
        cout << fact << endl;
    }
    return 0;
}