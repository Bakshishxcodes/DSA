/*Find the element x in the array.Take array and
x as input.*/

#include<iostream>
using namespace std;

// is x present? bool func
bool IsPresent(int arr[],int size,int x){
    for(int i=0;i<=size-1;i++){
        if(arr[i]==x) return 1;
    }
    return 0;
}
// index where x is present function
int WherePresent(int arr[],int size,int x){
    for(int i=0;i<=size-1;i++){
        if(arr[i]==x) return i;
    }
    return -1;
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
    int x;
    cout << "Enter element to search: ";
    cin >> x;

    cout <<  endl;

    if(IsPresent(arr,size,x)==1)
        cout << "Yes, This Element is present!" << endl;
    else 
        cout << "No, This Element is not present!" << endl;
    if(IsPresent(arr,size,x)==1)
        cout << "It is at index number " << WherePresent(arr,size,x) << " !";
    return 0;
}