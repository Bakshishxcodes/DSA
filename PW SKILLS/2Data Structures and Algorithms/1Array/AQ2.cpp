/*WAP to find the smallest missing positive element in the sorted Array that contains only
positive elements.*/

#include<iostream>
using namespace std;

// smallest missing positive element in sorted array func
int missingElement(int arr[],int size){
    int count = 1;
    for(int i=0;i<=size-1;i++){
        if(arr[i]==count) count++;
        else return count;
    }
    return 0;
}
