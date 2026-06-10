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

    int target,count=0;
    cout<<"Enter the element whose frequency you want to check: ";
    cin>>target;
    
    for(int j=0;j<n;j++){
        if(arr[j]==target){
            count++;
        }
    }
    cout<<"Frequency of "<<target<<" is: "<<count;
return 0;
}