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
    unordered_set <int> s;
    for(int i=0;i<n;i++){
        s.insert(arr[i]);
    }
    cout<<"Array without duplicate elements: ";
    for (int val: s){
        cout<<val<<" ";
    }
return 0;
}