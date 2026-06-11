//input= 1 2 3 4 5
//output= 4 5 1 2 3, if k=2 (rotated right by 2)
//1 2 3   4 5  break the array like this
//3 2 1   5 4  reverse the last 2 elements and then reverse the "right ones"
//4 5 1 2 3    reverse the whole array ---> gives the required output
#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[], int a, int b){
    while(a<b){
        int temp=arr[b];
        arr[b]=arr[a];
        arr[a]=temp;
        a++;
        b--;
    }
}
int main(){
    int n,k;
    cout<<"How many elements do you want in array?"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter number of right rotations: ";
    cin>>k;
    k%=n;
    reverse(arr, 0, (n-k)-1);
    reverse(arr, (n-k), n-1);
    reverse(arr, 0, n-1);
    
    cout<<"Here is the rotated array: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
return 0;
}