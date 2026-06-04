// 1
// 22
// 333
// 4444
// 55555

#include<bits/stdc++.h>
using namespace std;
int main(){
    int rows;
    cout<<"How many rows do you want in number triangle?"<<endl;
    cin>>rows;
     cout<<"Here is the required pyramid: "<<endl;
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=i;j++){
            cout<<i;
        }
        cout<<endl;
    }
    return 0;
}
    