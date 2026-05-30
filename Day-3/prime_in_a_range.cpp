#include <bits/stdc++.h>
using namespace std;
int main(){
    int range,n;
    cout<<"Enter a range: ";
    cin>>range;
    cout<<"Prime numbers in given range: ";
    for(int i=2;i<=range;i++){
        int flag=0;
        for(int j=2;j<i;j++){
            if(i%j==0){
                flag=1;
                break;
            }
        }
    
        if(flag==0){
            cout<<i<<" ";
        } 
    }
    return 0;
}
