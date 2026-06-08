#include<bits/stdc++.h>
using namespace std;

void ispalindrome(int a){
    int b,c,count=0,sum=0;
    b=c=a;
    while(a>0){
        count+=1;
        a=a/10;
    }
    while(b>0){
        sum+=(int)round(pow((b%10),count));          
        b=b/10;
    }
    if(c==sum){
        cout<<c<<" is an Armstrong number.";
    }
    else{
        cout<<c<<" is NOT an Armstrong number";
    }
}

int main(){
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    ispalindrome(a);
    return 0;
}