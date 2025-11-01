/*Print the following pattern
Q4. Print the following pattern
Input : n = 4
Output :
      A
    B A B
  C B A B C
D C B A B C D*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter no. of lines: ";
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=0;j<n-i;j++) cout << "  ";
        for(char j='A'+i-1;j>='A';j--) cout << j << " ";
        for(char j='B';j<='A'+i-1;j++) cout << j << " ";
        cout << endl;
    }
    return 0;
}