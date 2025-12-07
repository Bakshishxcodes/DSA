/*Write a program to add two matrices.*/
/*(im considering orders of 2d vectors 
given as parameter to function are equal)*/


#include<iostream>
#include<vector>
using namespace std;

// add matrices function
vector<vector <int>> add(vector<vector<int>>& v1,vector<vector<int>>& v2){
    int row = v1.size();
    int colm = v1[0].size();
    vector<vector<int>> v3(row,vector<int>(colm));
    for(int i=0;i<row;i++){
        for(int j=0;j<colm;j++){
            v3[i][j] = v1[i][j] + v2[i][j];
        }
    }
    return v3;
}
