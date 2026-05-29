#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m,product=1;
    cout<<"Enter a number: ";
    cin>>n;
    m=n;
    if(n==0){
        cout<<"The product of digits of "<<m<<" is 0";
    }
    else{
        while(n>0){
            product*=n%10;
            n/=10;
        }
        cout<<"The product of digits of "<<m<<" is: "<<product;
    }    
    return 0;
}