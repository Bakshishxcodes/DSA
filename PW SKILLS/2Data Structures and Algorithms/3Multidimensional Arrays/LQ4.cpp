/*Write a C++ program to find the Second largest
element of a given 2D array of integers.*/

#include<iostream>
#include<vector>
using namespace std;

// Second largest element function
int secondLargestIn(vector<vector <int>>& v){
    int x=0,y=0;
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            if(v[i][j]>v[x][y]){
                x=i;
                y=j;
            } 
        }
    }
    int secondLargest = v[0][0];
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            if(i==x && j==y) continue;
            if(v[i][j]>secondLargest) secondLargest = v[i][j];
        }
    }
    return secondLargest;
}