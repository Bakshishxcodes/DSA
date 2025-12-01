/*Trapping Rain Water (Leetcode-42)(Hard)*/

#include<iostream>
#include<vector>
using namespace std;

int trap(vector<int>& height) {
        int n = height.size();
        if(n==0 || n==1 || n==2) return 0;
        int totalWater=0;
        int small,pg = height[0],ng = height[n-1];
        vector<int> w(n,0);
        vector<int> ngv(n,0);
        vector<int> pgv(n,0);
        for(int i=1;i<=n-2;i++){
            pgv[i] = pg;
            if(height[i]>pg) pg = height[i];
        }
        for(int i=n-2;i>=1;i--){
            ngv[i] = ng;
            if(height[i]>ng) ng = height[i];
        }
        for(int i=1;i<=n-2;i++){
            small = min(pgv[i],ngv[i]);
            if(small>height[i]) w[i] = small - height[i];
        }
        for(int i=1;i<=n-1;i++){
            totalWater += w[i];
        }
        return totalWater;
    }