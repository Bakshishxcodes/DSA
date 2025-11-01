/*Print the following pattern
Input : n = 5
Output :
*       *
 *     *
  *   *
   * *
    *
*/
#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter no. of lines: ";
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=0;j<i-1;j++) cout << " ";
        cout << "*";
        for(int j=0;j<(2*n-2*i-1);j++) cout << " ";
        if(i!=n) cout << "*";
        cout << endl;
    }
    return 0;
}