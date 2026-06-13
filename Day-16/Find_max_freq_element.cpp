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

    unordered_map<int,int> frequency;
    for(int i=0;i<n;i++){
        frequency[arr[i]]++;
    }

    int max_element=0, max_freq=0;
     for(auto p: frequency){
        if(p.second>max_freq){
            max_freq=p.second;
            max_element=p.first;
        }
     }
     cout<<"Element with highest frequency is: "<<max_element<<endl<<"with frequency of: "<<max_freq;
return 0;
}