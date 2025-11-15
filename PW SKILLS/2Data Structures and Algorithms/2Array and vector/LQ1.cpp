/*Find the last occurrence of x in the array.*/

#include<iostream>
#include<vector>
using namespace std;

// last occuring index function
int lastindex(vector<int> v,int x){
    for(int i=v.size()-1;i>=0;i--){
        if(v[i]==x) return i;
    }
    return -1;
}

int main(){
    int size;
    cout << "Enter number of elements: ";
    cin >> size;
    vector<int> v(size);
    cout << "Enter elements: ";

    for(int i=0;i<=size-1;i++) cin>>v[i];

    int x;
    cout << "Type a number to get index of its last occurence : ";
    cin >> x; 
    cout << endl;
    cout << "last index: " << lastindex(v,x);
    return 0;
}