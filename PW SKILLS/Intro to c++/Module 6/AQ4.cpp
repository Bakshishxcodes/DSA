/*Print the following pattern
Input : n = 4
Output :
A B C D E F G
A B C   E F G
A B       F G
A           G*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter no. of lines: ";
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=0;j<=(n-i);j++) cout << char('A'+j) << " ";
        for(int j=0;j<2*i-3;j++) cout << "  ";
        for(int j=((i==1 || i==2)? n : n+i-2);j<=2*n-2;j++){
            cout << char('A'+j) << " ";
        }
        cout << endl;
    }
    return 0;
}