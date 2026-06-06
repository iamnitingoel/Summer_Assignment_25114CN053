//     A
//    ABA
//   ABCBA
//  ABCDCBA
// ABCDEDCBA
#include<bits/stdc++.h>
using namespace std;
int main(){
    int h;
    cout<<"Enter the height of the character pyramid: "<<endl;
    cin>>h;
    cout<<"Here is the required character pyramid:"<<endl;
    for(int i=1;i<=h;i++){                  
        for(int j=1;j<=(h-i);j++){          
            cout<<" ";
        }
        for(int k=1;k<=i;k++){        
            cout<<char(64+k);
        }
        for(int l=(i-1);l>=1;l--){
            cout<<char(64+l);
        }
        cout<<endl;
    }
    return 0;
}