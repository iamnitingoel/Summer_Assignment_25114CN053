// A
// BB
// CCC
// DDDD
// EEEEE
#include<bits/stdc++.h>
using namespace std;
int main(){
    int rows;
    cout<<"How many rows do you want in your repeated character triangle?"<<endl;
    cin>>rows;
     cout<<"Here is the required triangle: "<<endl;
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=i;j++){
            cout<<char(64+i);
        }
        cout<<endl;
    }
    return 0;
}