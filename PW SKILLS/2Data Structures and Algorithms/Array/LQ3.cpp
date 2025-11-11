/*Find the maximum value out of all the elements
in the array.*/

#include<iostream>
using namespace std;

// max element function
int maxElement(int arr[],int size){
    int maxElement = arr[0];
    for(int i=0;i<=size-1;i++){
        maxElement = max(maxElement,arr[i]);
    }
    return maxElement;
}

int main(){
    int size;
    cout << "Enter number of elements: ";
    cin >> size;
    int arr[size];
    cout << "Enter elements: ";

    for(int i=0;i<=size-1;i++) cin>>arr[i];

    cout << endl;
    cout << "Maximum element in this array is: " << maxElement(arr,size);

    return 0;
}