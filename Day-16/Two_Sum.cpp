#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cout<<"Enter target sum: ";
    cin>>target;
    unordered_set <int> s;
    int flag=0;
    for(int i=0;i<n;i++){
        int need=target-arr[i];
        if(s.find(need)!=s.end()){
            flag=1;
            cout<<"The pairs whose sum is "<<target<<" are "<<arr[i]<<" and "<<need;
            break;
        }
        s.insert(arr[i]);
    }
    if(flag==0){
        cout<<"No pairs found!!";
    }
return 0;
}