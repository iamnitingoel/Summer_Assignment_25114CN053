// A
// AB
// ABC
// ABCD
// ABCDE

#include<bits/stdc++.h>
using namespace std;
int main(){
    int rows;
    cout<<"How many rows do you want in your character triangle?"<<endl;
    cin>>rows;
     cout<<"Here is the required pyramid: "<<endl;
    for(int i=1;i<=rows;i++){
        for(int j=65;j<(65+i);j++){
            cout<<char(j);
        }
        cout<<endl;
    }
    return 0;
}