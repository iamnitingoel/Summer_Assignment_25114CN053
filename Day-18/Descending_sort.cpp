#include<bits/stdc++.h>
using namespace std;

void descending_sort(int arr[], int n){
    for(int i=0;i<n-1;i++){
        int doneswap=0;
        for(int j=n-1;j>i;j--){
            if(arr[j]>arr[j-1]){
                swap(arr[j-1],arr[j]);
                doneswap=1;
            }
        }
        if(doneswap==0){
            break;
        }
    }
}
int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    descending_sort(arr, n);
    cout<<"Here is the sorted aray: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
return 0;
}