/*Print the given pattern
1 2 3 4 5 6 7
1 2 3   5 6 7
1 2       6 7
1           7
Number Bridge*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter no. of lines: ";
    cin >> n;
    for(int i=1;i<=(2*n-1);i++) cout << i << " ";
    cout << endl;
    for(int i=1;i<=n-1;i++){
        for(int j=1;j<=n-i;j++) cout << j << " ";
        for(int k=1;k<=2*i-1;k++) cout << "  ";
        for(int l=n+i;l<=(2*n-1);l++) cout << l << " ";
        cout << endl;
    }
    return 0;
}