/*Take 3 numbers input and tell if they
can be the sides of a triangle.*/

#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout << "Enter 3 sides of triangle: ";
    cin >> a >> b >> c;
    if((a+b>c) and (a+c>b) and (b+c>a))
        cout << "Its a valid triangle.";
    else
        cout << "Its not a valid triangle.";
}