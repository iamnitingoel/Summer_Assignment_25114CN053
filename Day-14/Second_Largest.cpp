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
    int largest=arr[0],slargest=-1;
    for(int j=0;j<n;j++){
        if(arr[j]>largest){
            slargest=largest;
            largest=arr[j];    
        }
        else if(arr[j]<largest && arr[j]>slargest){
            slargest=arr[j];
        }
    }
    if(slargest==-1){
        cout<<"There is NO second largest element";
    }
    else{
        cout<<"The second largest element is: "<<slargest;
    }
return 0;
}