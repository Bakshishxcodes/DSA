/*Merge Sorted Array(LeetCode-88)*/

#include<iostream>
#include<vector>
using namespace std;

// merge function
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    vector<int> v3(m+n);
    int i=0,j=0,k=0;
    while(k<(m+n)){
        if(i>=m){
            while(j<n){
                v3[k]=nums2[j];
                j++;
                k++;
            }
        }
        else if(j>=n){
            while(i<m){
                v3[k]=nums1[i];
                i++;
                k++;
            }
        }
        else if(nums1[i]>=nums2[j]){
            v3[k]=nums2[j];
            j++;
            k++;
        }
        else{
            v3[k]=nums1[i];
            i++;
            k++;
        }
    }
    for(int i=0;i<=(m+n-1);i++){
        nums1[i]=v3[i];
    }
    return;
    }