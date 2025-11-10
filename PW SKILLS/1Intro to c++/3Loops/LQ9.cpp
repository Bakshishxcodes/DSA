/*Print the sum of this series :
1 - 2 + 3 - 4 + 5 - 6... upto ‘n’.*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter Number: ";
    cin >> n;

    if(n%2==0)
        cout << endl << "sum of series till " << n << " terms: " << -n/2;
    else
        cout << endl << "sum of series till " << n << " terms: " << n/2+1;

}