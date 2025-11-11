/*Find the second largest element in the given
Array.*/

#include<iostream>
#include<climits>
using namespace std;

// second max function(in a single traversal)
int secondMax(int arr[],int size){
    if(size==1) return arr[0];
    int maximum,smax;
    if(arr[0]==arr[1]){
        maximum = arr[1];
        smax = INT_MIN;
    }
    else{
    maximum=max(arr[0],arr[1]);
    smax=min(arr[0],arr[1]);
    }

    for(int i=2;i<=size-1;i++){
        if(maximum==arr[i]) continue;
        if(min(maximum,arr[i]) > smax)
            smax = min(maximum,arr[i]);
        maximum = max(maximum,arr[i]);
       
    }
    if(smax==INT_MIN) return maximum;
    else return smax;
}

int main(){
    int size;
    cout << "Enter number of elements: ";
    cin >> size;
    int arr[size];
    cout << "Enter elements: ";

    for(int i=0;i<=size-1;i++) cin>>arr[i];

    cout << endl;
    cout << "Second maximum element in this array is: " << secondMax(arr,size);

    cout << endl;
    return 0;
}

