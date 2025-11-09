/*Print the following pattern
Input : n = 4
Output :
*     *
**   **
*** ***
*******
*******
*** ***
**   **
*     *
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter no. of lines: ";
    cin >> n;
    for(int i=1;i<=n-1;i++){
        for(int j=0;j<i;j++) cout << "*";
        for(int j=0;j<2*n-2*i-1;j++) cout << " ";
        for(int j=0;j<i;j++) cout << "*";
        cout << endl;
    }
    for(int i=0;i<2*n-1;i++) cout << "*";
    cout << endl;
    for(int i=0;i<2*n-1;i++) cout << "*";
    cout << endl;
    for(int i=n-1;i>=1;i--){
        for(int j=0;j<i;j++) cout << "*";
        for(int j=0;j<2*n-2*i-1;j++) cout << " ";
        for(int j=0;j<i;j++) cout << "*";
        cout << endl;
    }
    return 0;
}