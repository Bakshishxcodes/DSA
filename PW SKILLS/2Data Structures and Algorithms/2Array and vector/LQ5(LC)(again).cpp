/*Rotate the given array ‘a’ by k steps, where k is
non-negative.
Note : k can be greater than n as well where n is the
size of array ‘a’.(Leetcode -189)*/

#include<iostream>
#include<vector>
using namespace std;

// rotate array function 
// will give TLE if array is way bigg...
void rotate(vector<int>& nums, int k){
    int n = nums.size();
    while(k>=n) k -= n;
    int temp;
    for(int i=0;i<k;i++){
        temp = nums[n-1];
        for(int j=n-2;j>=0;j--) nums[j+1] = nums[j];
        nums[0] = temp;
    }
    return;
}