// *****
// ****
// ***
// **
// *
#include<bits/stdc++.h>
using namespace std;
int main(){
    int rows;
    cout<<"How many rows do you want in your reverse pyramid?"<<endl;
    cin>>rows;
    cout<<"Here is the required pyramid: "<<endl;
    for(int i=1;i<=rows;i++){
        for(int j=rows;j>=i;j--){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
