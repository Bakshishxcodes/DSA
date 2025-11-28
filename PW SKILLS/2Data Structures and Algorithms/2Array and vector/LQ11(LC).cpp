/*Find the next permutations of Array .
Note :- If not possible then print the sorted order in
ascending order.(Leetcode -31)*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//next permutation function
void nextPermutation(vector<int>& nums){
    if(nums.size() == 1) return;
    int point;
    int min;
    for(int i = nums.size() - 1; i > 0; i--) {
        if(nums[i - 1] >= nums[i]) continue;
        else{
            point = i - 1;
            min = min_index(i, nums, point);
            swap(nums[point], nums[min]);
            sort(nums.begin() + i, nums.end());
            return;
        }
    }
    sort(nums.begin(), nums.end());
    return;
}

// min index finding function
int min_index(int it, vector<int>& v, int point) {
    int min = it;
    for(int i = it; i < v.size(); i++)
        if (v[i] < v[min] && v[i] > v[point]) min = i;

    return min;
}

