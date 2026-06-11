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

    int m=0, t=n-1;
    while(m<t){
        int temp=arr[t];
        arr[t]=arr[m];
        arr[m]=temp;
        m++;
        t--;
    }

    cout<<"Reversed Array: "<<endl;
    for(int j=0;j<n;j++){
        cout<<arr[j]<<" ";
    }
return 0;
}