#include<bits/stdc++.h>
using namespace std;

unordered_set<int> intersection_arrays(int a[], int b[], int p, int q){
    unordered_set<int> s;
    unordered_set<int> ans;
    for(int i=0;i<p;i++){
        s.insert(a[i]);
    }
    for(int i=0; i<q; i++){
        if(s.find(b[i])!=s.end()){
            ans.insert(b[i]);
            s.erase(b[i]);
        }
    }
    return ans;
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
    unordered_set<int> ans=intersection_arrays(a,b,p,q);
    cout<<"Here is the intersection of arrays: ";
    for(int val: ans){
        cout<<val<<" ";
    }
return 0;
}