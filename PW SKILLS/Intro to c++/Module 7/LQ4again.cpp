/*Pascal triangle Optimised*/

#include<iostream>
using namespace std;

// pascal triangle printing function
void printpascal(int x){
    cout << endl;
    float n,r,pascal;
    for(int i=0;i<=x-1;i++){
        n=i;
        r=0;
        pascal=1;
        for(int j=0;j<=i;j++){
            cout << pascal << " ";
            pascal *= (n-r)/(r+1);
            r++;
        }
        cout << endl;
    }
}

int main(){
    int n;
    cout << "till where you want to get pascal triangle printed: ";
    cin >> n;
    printpascal(n);
    return 0;
}