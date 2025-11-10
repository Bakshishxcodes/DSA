/*Write a program to print out all Armstrong numbers between 1 and 500. If the sum of cubes of
each digit of the number is equal to the number itself, then the number is called an Armstrong
number.*/

#include<iostream>
using namespace std;

int main(){
    for(int i=1;i<=500;i++){
        int ld,socod=0,isave=i;
        while(isave!=0){
            ld = isave%10;
            socod += ld*ld*ld;
            isave/=10;
        }
        if(socod==i) cout << i << endl;
    }
    return 0;
}