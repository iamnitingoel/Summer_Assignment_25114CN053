#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m,rev=0;
    cout<<"Enter a number: ";
    cin>>n;
    m=n;

    while(n>0){
        rev=rev*10+(n%10);
        n=n/10;
    }
    
    if(m==rev){
        cout<<m<<" is palindrome";
    }
    else{
        cout<<m<<" is not palindrome";
    }
    return 0;
}
