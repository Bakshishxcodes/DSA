/*Find the doublet in the Array whose sum is
equal to the given value x. (LeetCode - 1) (Two Sum)*/

#include<iostream>
#include<vector>
using namespace std;

// two sum function
// (assumption: there is only 1 solution and all elements are unique)
vector<int> twoSum(vector<int>& nums, int target){
    vector<int> v;
    for(int i=0;i<=nums.size()-2;i++){
        for(int j=i+1;j<=nums.size()-1;j++){
            if(nums[i]+nums[j]==target){
                vector<int> twosum = {i,j};
                return twosum;
            }
        }
    }
    return v;
}

