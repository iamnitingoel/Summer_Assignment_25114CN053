#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,flag=0;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=2;i<n;i++){
        if(n%i==0){
            cout<<n<<" is not a prime number";
            flag=1;
            break;
        }
    }
    if(flag==0){
        cout<<n<<" is a prime number";
    }
    return 0;
}