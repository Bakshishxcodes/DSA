/*Print the given pattern
1
0 1
1 0 1
0 1 0 1
Binary Triangle*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter no. of lines: ";
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if((i%2==0 and j%2==0)or(i%2==1 and j%2==1)) cout << "1 ";
            else cout << "0 ";
        }
        cout << endl;
    }
    return 0;
}