#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,sum=0,power=0;
    cout<<"Enter a Binary Number: ";
    cin>>n;

    while(n>0){
        sum+=(n%10)*pow(2,power);
        n/=10;
        power++;
    }

    cout<<"Binary to Decimal of the given number is: "<<sum;
    return 0;
}