#include<bits/stdc++.h>
using namespace std;
int factorial(int n){
    long long mul=1;
    for(int i=1;i<=n;i++){
        mul*=i;
    }
    return mul;
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<n<<"!="<<factorial(n);
    return 0;
}