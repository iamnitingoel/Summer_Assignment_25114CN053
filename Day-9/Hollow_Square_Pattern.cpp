// *****
// *   *
// *   *
// *   *
// *****
#include<bits/stdc++.h>
using namespace std;
int main(){
    int h;
    cout<<"Enter the height of the hollow SQUARE: "<<endl;
    cin>>h;
    cout<<"Here is the required square:"<<endl;
    for(int i=1;i<=h;i++){
        for(int j=1;j<=h;j++){
            if(i==1 || i==h || j==1 || j==h){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}