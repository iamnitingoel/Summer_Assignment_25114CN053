#include<bits/stdc++.h>
using namespace std;

vector<int> mergeArrays(vector<int>&a,vector<int>&b){
    int i=0,j=0;
    vector<int>ans;
    while(i<a.size()&&j<b.size()){
        if(a[i]<=b[j]){          
            ans.push_back(a[i]);
            i++;
        }    
        else if(a[i]>b[j]){
            ans.push_back(b[j]);
            j++;
        }
    }    
    while(i<a.size()){          //if b exhausted
        ans.push_back(a[i]);
        i++;
    }    
    while(j<b.size()){          //if a exhausted
        ans.push_back(b[j]);
        j++;
    }    
    return ans;
}

int main(){
    int n,m;
    cout<<"Enter the size of first array: ";
    cin>>n;
    vector<int>a(n);
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }    
    cout<<"Enter the size of second array: ";
    cin>>m;
    vector<int>b(m);
    cout<<"Enter elements: ";
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    cout<<"Merged array: ";    
    for(auto val: mergeArrays(a,b)){
        cout<<val<<" ";
    }
    return 0;
}