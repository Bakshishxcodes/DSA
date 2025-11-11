/*Count the number of elements in given array
greater than a given number x.*/

#include<iostream>
using namespace std;

// no of elements greater than x function
int countGreaterThan(int arr[],int size,int x){
    int count = 0;
    for(int i=0;i<=size-1;i++){
        if(arr[i]>x) count++;
    }
    return count;
}

int main(){
    int size;
    cout << "Enter number of elements: ";
    cin >> size;
    int arr[size];
    cout << "Enter elements: ";

    for(int i=0;i<=size-1;i++) cin>>arr[i];

    int x;
    cout << "Type a number to get number of elements in this array greater than the input number: ";
    cin >> x; 
    cout << endl;
    cout << "number of elements greater than " << x << " in this array: " << countGreaterThan(arr,size,x);;
    return 0;
}