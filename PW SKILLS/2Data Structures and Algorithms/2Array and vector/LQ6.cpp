/*Sort the array of 0’s and 1’s .*/

#include<iostream>
#include<vector>
using namespace std;

// sorting function
void sort01(vector<int> &v){
    int no0 = 0, no1 = 0;
    for(int i=0;i<=v.size()-1;i++){
        if(v[i]==1) no1++;
        else no0++; 
    }
    for(int i=0;i<=no0-1;i++) v[i] = 0;
    for(int i=no0;i<=v.size()-1;i++) v[i] = 1;
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
}