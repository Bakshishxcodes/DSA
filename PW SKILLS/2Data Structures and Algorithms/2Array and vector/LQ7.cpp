/*Move all negative numbers to beginning and
positive to end with constant extra space.*/

#include<iostream>
#include<vector>
using namespace std;

// negative to beginning function
void negbeg(vector<int> &v){
    int n = v.size()-1;
    int i=0;
    int j=n;
    while(i<j){
        while(i<=n && v[i]<0) i++;
        while(j>=0 && v[j]>=0) j--;
        if(i>=j) break;
        swap(v[i],v[j]);
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
    negbeg(v);
    afterOutput(v);
    return 0;
}
