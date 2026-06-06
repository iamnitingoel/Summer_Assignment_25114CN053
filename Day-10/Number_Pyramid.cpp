//     1
//    121
//   12321
//  1234321
// 123454321
#include<bits/stdc++.h>
using namespace std;
int main(){
    int h;
    cout<<"Enter the height of the number pyramid: "<<endl;
    cin>>h;
    cout<<"Here is the required number pyramid:"<<endl;
    for(int i=1;i<=h;i++){                  
        for(int j=1;j<=(h-i);j++){          
            cout<<" ";
        }
        for(int k=1;k<=i;k++){        
            cout<<k;
        }
        for(int l=(i-1);l>=1;l--){
            cout<<l;
        }
        cout<<endl;
    }
    return 0;
}