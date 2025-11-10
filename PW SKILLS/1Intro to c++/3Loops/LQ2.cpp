/*Display this GP - 1,2,4,8,16,32,.. upto ‘n’
terms.*/

#include<iostream>
using namespace std;

int main(){
    int x=1,n;
    cout << "Enter n(no of terms): ";
    cin >> n;
    for(int i=1;i<=n;i++){
        cout << x << ",";
        x*=2;
    }
    return 0;
}