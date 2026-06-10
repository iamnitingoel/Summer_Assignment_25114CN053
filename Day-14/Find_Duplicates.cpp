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

    cout<<"Duplicate elements are: ";
    set<int> s;
    for(int j=0;j<n;j++){
        for(int k=j+1;k<n;k++){
            if(arr[j]==arr[k]){
                s.insert(arr[k]);
                break;
            }
        }
    }
    for(auto val : s){
        cout<<val<<" ";
    }
return 0;
}