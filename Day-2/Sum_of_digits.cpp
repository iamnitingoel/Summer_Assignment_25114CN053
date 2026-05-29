#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m,sum=0;
    cout<<"Enter a number: ";
    cin>>n;
    m=n;
    while(n>0){
        sum+=n%10;
        n/=10;
    }
    cout<<"The sum of digits of "<<m<<" is: "<<sum;
    return 0;
}