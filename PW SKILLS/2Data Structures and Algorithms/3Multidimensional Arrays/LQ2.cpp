/*Write a C++ program to find the largest
element of a given 2D array of integers.*/

#include<iostream>
#include<vector>
using namespace std;

// largest element function
int largestIn(vector<vector <int>>& v){
    int largest = v[0][0];
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            if(v[i][j]>largest) largest = v[i][j];
        }
    }
    return largest;
}