/*Sort the array of 0’s , 1’s and 2’s . (LeetCode 75)*/

#include<iostream>
#include<vector>
using namespace std;

// sort 0 1 2 function using 3 pointers
void sortColors(vector<int>& nums) {
    int last = nums.size()-1;
    if(nums.size()==1) return;
    int i=0;
    int j=0;
    int k=last;
    while(j<=k){
        if(nums[j]==0){
            swap(nums[i],nums[j]);
            if(i<last) i++;
            else break;
            if(i>j) j++;
            if(j>k) break;
        }
        else if(nums[j]==1){
            j++;
            if(j>last) break;
            if(j>k) break;
        }
        else if(nums[j]==2){
            swap(nums[j],nums[k]);
            if(k>0) k--;
            else break;
            if(j>k) break;
        }
    }
}
