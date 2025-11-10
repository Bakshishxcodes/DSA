/*Print all alphabets (uppercase) with their ASCII
values.*/

#include<iostream>
using namespace std;

int main(){

    for(int i=65;i<=90;i++)
        cout << char(i) << " -> " << i << endl;
    return 0;
    
}