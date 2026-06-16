#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int target;
    cout<<"Enter the element you are looking for: ";
    cin>>target;
    int low=0,high=n-1;
    int flag=0;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(target==arr[mid]){
            cout<<"Element is at index: "<<mid;
            flag=1;
            break;
        }
        else if(target<arr[mid]){
            high=mid-1;
        }
        else if(target>arr[mid]){
            low=mid+1;
        }
    }
    if(flag==0){
        cout<<"Element NOT FOUND!!";
    }
return 0;
}