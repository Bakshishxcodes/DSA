/*Print the factorials of first ‘n’ numbers*/

#include<iostream>
using namespace std;

int main(){
    int n,a=1,b=1,c;
    cout << "Enter Number: ";
    cin >> n;
    if(n==1){
        cout << 1 << " ";
        return 0;
    } 
    else if(n==2){
        cout << 1 << " " << 1 << " ";
        return 0;
    } 
    else{
        cout << 1 << " " << 1 << " ";
        for(int i=1;i<=n-2;i++){
        c=a+b;
        a=b;
        b=c;
        cout << b << " ";
        }
        return 0;
    }
    
}