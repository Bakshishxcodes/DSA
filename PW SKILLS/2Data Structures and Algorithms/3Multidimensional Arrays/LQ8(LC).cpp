/*Write a program to rotate the matrix by 90
degrees clockwise. [Leetcode 48]*/

#include<iostream>
#include<vector>
using namespace std;

//transform to transpose func
void transformToTranspose(vector<vector<int>>& v){
    int n = v.size();
    for(int i=0;i<=n-2;i++){
        for(int j=i+1;j<=n-1;j++){
            swap(v[i][j],v[j][i]);
        }
    }
    return;
}

void rotate(vector<vector<int>>& matrix){
    transformToTranspose(matrix);
    int n = matrix.size();
    for(int i=0;i<n;i++){
        for(int j=0,k=n-1;j<k;j++,k--){
            swap(matrix[i][j],matrix[i][k]);
        }
    }
    return;
}