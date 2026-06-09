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
    int largest=arr[0], smallest=arr[0];
    for(int j=0;j<n;j++){
        if(arr[j]>largest){
            largest=arr[j];
        }
        if(arr[j]<smallest){
            smallest=arr[j];
        }
    }
    cout<<"Largest element: "<<largest<<endl;
    cout<<"Smallest element: "<<smallest<<endl;

return 0;
}