/*Write a function to find out the first and last digit of a number
without returning anything.*/

#include<iostream>
using namespace std;

// first and last digit fetching function
void fdld(int n,int &fd,int &ld){
    ld = n%10;
    while(n/10 != 0){
        n/=10;
    }
    fd = n;
    return;
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int lastdigit,firstdigit;
    fdld(n,firstdigit,lastdigit);

    cout << "First digit: " << firstdigit << endl;
    cout << "Last digit: " << lastdigit << endl;
    return 0;
}