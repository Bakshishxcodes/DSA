/*Take two integers input, a and b : a>b, and find the
remainder when a is divided by b.*/ 
#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;

    cout << "remainder when a/b : " << a-b*(a/b);

    return 0;
}


