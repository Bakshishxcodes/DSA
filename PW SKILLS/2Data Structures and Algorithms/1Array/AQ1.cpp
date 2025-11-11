/*Given an array, predict if the array contains duplicates or not.*/

#include<iostream>
using namespace std;

// is duplicate present? bool func
bool isDuplicatePresent(int arr[],int size){
    for(int i=0;i<=size-1;i++){
        for(int j=0;j<=size-1;j++){
            if(j==i) continue;
            if(arr[j]==arr[i]) return 1;
        }
    }
    return 0;
}

int main(){
    int size;
    cout << "Enter number of elements: ";
    cin >> size;
    int arr[size];
    cout << "Enter elements: ";

    for(int i=0;i<=size-1;i++) cin>>arr[i];

    if(isDuplicatePresent(arr,size)==1) 
        cout << endl << "This array have duplicates!";
    else 
        cout << endl << "This array does not have any duplicates!";
    return 0;
}