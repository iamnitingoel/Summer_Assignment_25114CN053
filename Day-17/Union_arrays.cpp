#include<bits/stdc++.h>
using namespace std;

unordered_set<int> union_arrays(int a[], int b[],int p,int q){
    unordered_set<int> s;
    for(int i=0; i<p;i++){
        s.insert(a[i]);
    }
    for(int i=0;i<q;i++){
        s.insert(b[i]);
    }
    return s;
}
int main(){
    int p,q;
    cout<<"Enter the number of elements in first array: ";
    cin>>p;
    int a[p];
    cout<<"Enter the elements of first array: ";
    for(int i=0; i<p; i++){
        cin>>a[i];
    }
    cout<<"Enter the number of elements in second array: ";
    cin>>q;
    int b[q];
    cout<<"Enter the elements of second array: ";
    for(int i=0; i<q; i++){
        cin>>b[i];
    }
    unordered_set<int> ans=union_arrays(a,b,p,q);
    cout<<"Here is the union of arrays: ";
    for(int val: ans){
        cout<<val<<" ";
    }
return 0;
}