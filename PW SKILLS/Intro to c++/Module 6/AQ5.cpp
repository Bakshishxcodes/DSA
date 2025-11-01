/*Print the following pattern
Input : n = 4
Output :
1 2 3 4 3 2 1
1 2 3   3 2 1
1 2       2 1
1           1*/
#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter no. of lines: ";
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=(n-i+1);j++) cout << j << " ";
        for(int j=0;j<2*i-3;j++) cout << "  ";
        for(int j = ((i==1 || i==2) ? n-1 : n-i+1);j>=1;j--) cout << j << " ";
        cout << endl;
    }
    return 0;
}