// 1
// 12
// 123
// 1234
// 12345

#include<bits/stdc++.h>
using namespace std;
int main(){
    int rows;
    cout<<"How many rows do you want in number triangle?"<<endl;
    cin>>rows;
     cout<<"Here is the required pyramid: "<<endl;
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}
    