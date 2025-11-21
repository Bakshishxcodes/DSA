/*Sort the array of 0’s and 1’s .*/

#include<iostream>
#include<vector>
using namespace std;

// sorting function(in a single traversal)
void sort01(vector<int> &v){
    int i=0;
    int j=v.size()-1;
    while(i<j){
        while(i<v.size() && v[i]==0) i++;
        while(j>=0 && v[j]==1) j--;
        if(i<j) swap(v[i],v[j]);
    }
    return;
}

// input vector function
void input(vector<int> &v){
    cout << "Enter elements: ";
    for(int i=0;i<=v.size()-1;i++){
        cin>>v[i];
    }
    cout << endl;
    return;
}

// before output function
void beforeOutput(vector<int> &v){
    cout << "Before: ";
    for(int i=0;i<=v.size()-1;i++){
        cout << v[i] << " ";
    }
    cout << endl;
    return;
}

// after output function
void afterOutput(vector<int> &v){
    cout << "After: ";
    for(int i=0;i<=v.size()-1;i++){
        cout << v[i] << " ";
    }
    cout << endl;
    return;
}

int main(){
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    vector<int> v(n);
    input(v);
    beforeOutput(v);
    sort01(v);
    afterOutput(v);
    return 0;
}