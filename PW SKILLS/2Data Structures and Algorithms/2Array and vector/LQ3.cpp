/*Write a program to copy the contents of one
array into another in the reverse order.*/

#include<iostream>
using namespace std;

// array reversal function
void reverse(int arr[],int size){
    int brr[size];
    for(int i=0;i<=size-1;i++){
        brr[i]=arr[size-1-i];
    }
    for(int i=0;i<=size-1;i++){
        arr[i]=brr[i];
    }
    return;
}

int main(){
    int size;
    cout << "Enter number of elements: ";
    cin >> size;
    int arr[size];
    cout << "Enter elements: ";
    for(int i=0;i<=size-1;i++){
        cin>>arr[i];
    }

    cout << endl;

    cout << "Your Array: ";
    for(int i=0;i<=size-1;i++){
        cout << arr[i] << " ";
    }

    cout << endl;

    cout << "Your Array reversed: ";
    reverse(arr,size);
    for(int i=0;i<=size-1;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}