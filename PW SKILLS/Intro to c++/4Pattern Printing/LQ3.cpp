/*Print the given pattern(n=odd)
    *  
    *
* * * * *
    *
    *  
Star Plus*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter no. of lines(odd no. only): ";
    cin >> n;
    if(n%2==0) cout << "ERROR 404";
    else{

        for(int i=1;i<=n;i++){

            if(i==(n/2+1)){
                for(int j=1;j<=n;j++) cout << "* ";
                cout << endl;
            }

            else{
                for(int j=1;j<=n;j++){
                    if(j==(n/2+1)) cout << "* ";
                    else cout << "  ";
                }
                cout << endl;
            }

        }

    }
    return 0;
}