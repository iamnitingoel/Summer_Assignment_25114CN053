#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,gcd=1;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    int small= (a>b)?b:a;
    for(int i=1;i<=small;i++){
        if(a%i==0 && b%i==0){
            gcd=i;
        }
    }
    cout<<"The GCD of "<<a<<" and "<<b<<" is: "<<gcd;
    return 0;
}