/*Write a program to print the transpose of
the matrix entered by the user and store it in a new
matrix.*/

#include<iostream>
#include<vector>
using namespace std;

// print the transpose without saving it(func)
void printTranspose(vector<vector<int>>& v){
    for(int j=0;j<v[0].size();j++){
        for(int i=0;i<v.size();i++){
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    return;
}

//getting transpose func
vector<vector<int>> getTranspose(vector<vector<int>>& v){
    int rows = v.size();
    int colm = v[0].size();
    vector<vector<int>> v2(colm,vector<int>(rows));
    for(int i=0;i<rows;i++){
        for(int j=0;j<colm;j++){
            v2[j][i] = v[i][j];
        }
    }
    return v2;
}