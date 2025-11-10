/*Print the given pattern(n=odd)
*       * 
  *   *   
    *     
  *   *   
*       * 
Star Cross*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter no. of lines(odd no. only): ";
    cin >> n;
    if(n%2==0) cout << "ERROR 404";
    else{
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(j==i or j==(n-i+1)) cout << "* ";
                else cout << "  ";
            }
            cout << endl;
        }
    }
    return 0;
}