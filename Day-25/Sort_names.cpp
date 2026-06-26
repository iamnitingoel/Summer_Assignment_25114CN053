#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of names: ";
    cin>>n;
    vector<string> names(n);
    cout<<"Enter names:"<<endl;
    for(int i=0;i<n;i++){
        cin>>names[i];
    }
    sort(names.begin(),names.end());  //used STL instead of bubble/insertion sort for an optimal solution O(nlogn)
    cout<<"Sorted names:"<<endl;
    for(int i=0;i<n;i++){
        cout<<names[i]<<endl;
    }
    return 0;
}