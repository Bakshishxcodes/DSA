/*Find the unique number in a given Array where all the elements are being repeated twice with one
value being unique.*/

#include<iostream>
#include<vector>
#include<climits>
using namespace std;


// unique element function
int uniqueElement(vector<int>& nums){
    int n = nums.size();
    for(int i=0;i<n;i++){
        bool unique = true;
        for(int j=0;j<n;j++){
            if(i!=j && nums[i]==nums[j]){
                unique = false;
                break;
            } 
        }
        if(unique) return nums[i];
    }
    return INT_MIN;
}
