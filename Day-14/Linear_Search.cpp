#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"How many elements do you want in array?"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int target,index=-1;
    cout<<"Enter the element to search: ";
    cin>>target;
    for(int j=0;j<n;j++){
        if(arr[j]==target){
            index=j;
            break;
        }
    }
    if(index!=-1){
        cout<<"Element is at index: "<<index<<" or position: "<<index+1;
    }
    else{
        cout<<"Element Not Found!!";
    }
return 0;
}