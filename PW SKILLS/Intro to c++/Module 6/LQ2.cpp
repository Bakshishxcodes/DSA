/*Print the given pattern
A B C D
A B C D
A B C D
A B C D
Alphabet Square*/

#include<iostream>
using namespace std;

int main(){
    int m;
    cout << "Enter no. of lines: ";
    cin >> m;
    int n;
    cout << "Enter no. of characters in lines: ";
    cin >> n;
    for(int i=1;i<=m;i++){
        for(char j='A';j<='A'+ n - 1;j++){
            cout << j << " ";
        }
        cout << endl;
    }
}