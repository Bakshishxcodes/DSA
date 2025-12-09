/*Write a program to print the multiplication
of two matrices given by the user.*/
/*(assuming a(m*n) and b(n*p))*/

#include<iostream>
#include<vector>
using namespace std;

//matrix multiplication func
vector<vector<int>> product(vector<vector<int>>& a,vector<vector<int>>& b){
    int m = a.size();
    int n = a[0].size();
    int p = b[0].size();
    vector<vector<int>> product(m,vector<int>(p));
    int prod;
    for(int i=0;i<m;i++){
        for(int j=0;j<p;j++){
            prod = 0;
            for(int x=0;x<n;x++){
                prod += (a[i][x] * b[x][j]);
            }
            product[i][j] = prod;
        }
    }
    return product;
}
