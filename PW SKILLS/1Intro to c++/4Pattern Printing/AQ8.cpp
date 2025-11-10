/*Print the following pattern
Input : n = 4
Output :
      * 
    *   *
  *       *
*           *
  *       *
    *   *
      *
      */

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter no. of lines: ";
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=0;j<n-i;j++) cout << "  ";
        cout << "* ";
        for(int j=0;j<2*i-3;j++) cout << "  ";
        if(i!=1) cout << "*";
        cout << endl;
    }
    for(int i=n-1;i>=1;i--){
        for(int j=0;j<n-i;j++) cout << "  ";
        cout << "* ";
        for(int j=0;j<2*i-3;j++) cout << "  ";
        if(i!=1) cout << "*";
        cout << endl;
    }
    return 0;
}