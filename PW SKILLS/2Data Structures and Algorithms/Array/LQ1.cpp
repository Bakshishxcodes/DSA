/*Calculate the sum of all the elements in the
given array.*/

#include<iostream>
using namespace std;

// sum of array elements(int) function
int sumOfElements(int arr[],int size){
    int sum=0;
    for(int i=0;i<=size-1;i++){
        sum+=arr[i];
    }
    return sum;
}

int main(){
    int size;
    cout << "Enter number of elements: ";
    cin >> size;

    int arr[size];

    cout << "Enter elements now: ";
    // input of elements
    for(int i=0;i<=size-1;i++){
        cin>>arr[i];
    }
    
    cout << endl;
    cout << "Sum of all elements: " << sumOfElements(arr,size);
    return 0;
}