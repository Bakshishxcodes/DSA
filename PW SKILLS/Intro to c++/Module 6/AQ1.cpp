/*Print the following pattern
Input : n = 4
Output :
      A
    A B C
  A B C D E
A B C D E F G*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter no. of lines: ";
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=0;j<n-i;j++) cout << "  ";
        for(char j='A';j<='A'+2*i-2;j++) cout << j << " ";
        cout << endl;
    }
    return 0;
}