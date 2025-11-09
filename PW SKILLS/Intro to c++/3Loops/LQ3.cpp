/*Display this AP - 100,97,94,..upto all
terms which are positive.*/

#include<iostream>
using namespace std;

int main(){
    int x=1;
    for(int i=100;i>=0;i-=3){
        cout << i << ",";
    }
    return 0;
}