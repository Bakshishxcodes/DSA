/*WAP for finding the volume of the cylinder by taking radius and height as input.*/

#include<iostream>
using namespace std;

int main(){
    float r,h;
    cout << "Radius of cylinder: ";
    cin >> r;
    cout << "Height of cylinder: ";
    cin >> h;
    cout << "\n" << (3.14 * r * r * h);
    return 0;
}