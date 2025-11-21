/*Rotate the given array ‘a’ by k steps, where k is
non-negative.
Note : k can be greater than n as well where n is the
size of array ‘a’.(Leetcode -189)*/

#include<iostream>
#include<vector>
using namespace std;

// rotate array function
void rotate(vector<int>& nums, int k){
    int n = nums.size();
    vector<int> v(n);

    while(k>=n) k -= n;

    int i = n-k;
    int j = 0;
    while(i<=n-1 && j<=k-1){
        v[j]=nums[i];
        i++; j++;
    }

    i = 0;
    j = k;
    while(i<=n-k-1 && j<=n-1){
        v[j]=nums[i];
        i++; j++;
    }

    // copying data into nums again...
    for(int i=0;i<=n-1;i++){
        nums[i]=v[i];
    }
    return;
}