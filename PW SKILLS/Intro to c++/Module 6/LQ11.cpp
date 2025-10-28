/*Print the given pattern(n=odd)
      * 
    * * * 
  * * * * * 
* * * * * * *
  * * * * * 
    * * * 
      * 
Star Diamond*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter no. of lines(odd no. only): ";
    cin >> n;
    if(n%2==0) cout << "ERROR 404";
    else{
        int mid=n/2+1;
        for(int i=1;i<=mid;i++){
            for(int j=1;j<=mid-i;j++) cout << "  ";
            for(int k=1;k<=2*i-1;k++) cout << "* ";
            cout << endl;
        }
        for(int i=1;i<=mid-1;i++){
            for(int j=1;j<=i;j++) cout << "  ";
            for(int k=1;k<=n-2*i;k++) cout << "* ";
            cout << endl;
        }
    }
}