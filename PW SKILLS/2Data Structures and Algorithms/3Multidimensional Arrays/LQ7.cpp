/*you are given a matrix/2D-Array of size (nxn).
Change this matrix into its transpose.*/

#include<iostream>
#include<vector>
using namespace std;

//transform function
void transformToTranspose(vector<vector<int>>& v){
    int n = v.size();
    for(int i=0;i<=n-2;i++){
        for(int j=i+1;j<=n-1;j++){
            swap(v[i][j],v[j][i]);
        }
    }
    return;
}
