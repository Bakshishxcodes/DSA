/*Print the given pattern
      1
    1 2
  1 2 3
1 2 3 4
Number Triangle Flipped*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter no. of lines: ";
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++) cout << "  ";
        for(int j=1;j<=i;j++) cout << j << " ";
        cout << endl;
    }
    return 0;
}