#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"How many elements do you want in array?"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }

    cout<<"The SUM of the elements of the array is: "<<sum<<endl;
    cout<<"The AVERAGE of the elements of the array is: "<<(float)sum/n;
    
return 0;
}