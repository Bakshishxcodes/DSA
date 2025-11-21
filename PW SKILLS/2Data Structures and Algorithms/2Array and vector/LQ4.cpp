/*Write a program to reverse the array without
using any extra array.*/

#include<iostream>
using namespace std;

// display function
void display(int arr[],int size){
    for(int i=0;i<=size-1;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

// reverse function
void reverse(int arr[],int size){
    for(int i=0;i<=(size-1)/2;i++){
        swap(arr[i],arr[size-1-i]);
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
    display(arr,size);

    reverse(arr,size);
    cout << "Your Array reversed: ";
    display(arr,size);
}