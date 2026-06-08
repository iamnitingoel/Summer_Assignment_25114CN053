#include<bits/stdc++.h>
using namespace std;

void isarmstrong(int n){
    int m=n,sum=0;
    while(n>0){
        sum=(sum*10)+(n%10);
        n/=10;
    }
    if(m==sum){
        cout<<m<<" is a palindrome number.";
    }
    else{
        cout<<m<<" is NOT a palindrome number.";
    }
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    isarmstrong(n);
    return 0;
}