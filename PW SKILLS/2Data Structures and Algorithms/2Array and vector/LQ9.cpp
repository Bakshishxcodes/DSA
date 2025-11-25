/*Merge two sorted arrays .*/

#include<iostream>
#include<vector>
using namespace std;

//merging function(sorted merged)
vector<int> merge(vector<int> &v1,vector<int> &v2){
    int m=v1.size();
    int n=v2.size();
    vector<int> v3(m+n);
    int i=0,j=0,k=0;
    while(k<(m+n)){
        if(i>=m){
            while(j<n){
                v3[k]=v2[j];
                j++;
                k++;
            }
        }
        else if(j>=n){
            while(i<m){
                v3[k]=v1[i];
                i++;
                k++;
            }
        }
        else if(v1[i]>=v2[j]){
            v3[k]=v2[j];
            j++;
            k++;
        }
        else{
            v3[k]=v1[i];
            i++;
            k++;
        }
    }
    return v3;
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
    int m,n;
    cout << "Enter number of elements of first sorted array: ";
    cin >> m;
    vector<int> v1(m);
    input(v1);
    cout << "Enter number of elements of second sorted array: ";
    cin >> n;
    vector<int> v2(n);
    input(v2);
    beforeOutput(v1);
    beforeOutput(v2);
    vector<int> merged = merge(v1,v2);
    afterOutput(merged);
    return 0;
}
