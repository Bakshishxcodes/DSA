/*Write a function to compute the greatest
common divisor of two given numbers*/

#include<iostream>
#include<vector>
using namespace std;

// gcd function
int gcd(int x,int y){
    int a= max(x,y);
    int b =min(x,y);
    vector<int> af;
    vector<int> bf;
    // factor filling of a
    for(int i=1;i<=a;i++){
        if(a%i==0){
            af.push_back(i);
        }
    }
    // factor filling of b
    for(int i=1;i<=b;i++){
        if(b%i==0){
            bf.push_back(i);
        }
    }
    // comparison
    for(int i=bf.size()-1;i>=0;i--){
        for(int j=af.size()-1;j>=0;j--){
           if(bf[i]==af[j]) return bf[i];
        }
    }
}

int main(){
    int x,y;
    cout << "Enter 2 numbers: ";
    cin >> x >> y;
    
    cout << "greatest common divisor of two given numbers: " << gcd(x,y);
    
    return 0;
}