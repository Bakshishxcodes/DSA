/*Print the given pattern
1
1 3
1 3 5
1 3 5 7
Odd Number Triangle*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter no. of lines: ";
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=(2*i-1);j+=2){
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}