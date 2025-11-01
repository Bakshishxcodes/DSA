/*Print the given pattern(ultimate)
4 4 4 4 4 4 4
4 3 3 3 3 3 4
4 3 2 2 2 3 4
4 3 2 1 2 3 4
4 3 2 2 2 3 4
4 3 3 3 3 3 4
4 4 4 4 4 4 4
Number SPIRAL*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter no. of lines: ";
    cin >> n;
    cout << endl;
    for(int i=1;i<=(2*n-1);i++) cout << n << " ";
    cout << endl;
    for(int i=1;i<=(n-1);i++){
        for(int j=0;j<=(i-1);j++) cout << n-j << " ";
        for(int j=0;j<(2*n-2*i-1);j++) cout << n-i << " ";
        for(int j=(i-1);j>=0;j--) cout << n-j << " ";
        cout << endl;
    }
    for(int i=n-2;i>=1;i--){
        for(int j=0;j<=(i-1);j++) cout << n-j << " ";
        for(int j=0;j<(2*n-2*i-1);j++) cout << n-i << " ";
        for(int j=(i-1);j>=0;j--) cout << n-j << " ";
        cout << endl;
    }
    for(int i=1;i<=(2*n-1);i++) cout << n << " ";
    return 0;
}