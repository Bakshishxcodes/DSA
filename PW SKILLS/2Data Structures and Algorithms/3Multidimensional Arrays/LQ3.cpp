/*Write a program to print sum of all the
elements of a 2D matrix.*/

#include<iostream>
#include<vector>
using namespace std;

// sum of all elements
int sumOf(vector<vector<int>>& v){
    int sum=0;
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            sum += v[i][j];
        }
    }
    return sum;
}