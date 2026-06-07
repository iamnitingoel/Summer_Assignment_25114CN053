#include<bits/stdc++.h>
using namespace std;
int prime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return 1;
        }
    }
    return 0;
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(n<=1){
        cout<<n<<" is NOT a Prime Number.";
    }
    else{
        int x=prime(n);
        if(x==0){
            cout<<n<<" is a Prime Number.";
        }
        else{
            cout<<n<<" is NOT a Prime Number.";
        }
    }
    return 0;
}