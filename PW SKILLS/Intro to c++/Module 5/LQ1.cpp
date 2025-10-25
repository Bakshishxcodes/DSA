/*Display this AP - 4,7,10,13,17.. upto ‘n’
terms.*/

#include<iostream>
using namespace std;

int main(){
    int x=4,n;
    cout << "Enter n(no of terms): ";
    cin >> n;
    for(int i=1;i<=n;i++){
        cout << x << ",";
        x+=3;
    }
    return 0;
}