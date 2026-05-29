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
    cout<<"The reverse of "<<m<<" is "<<rev;
    return 0;
}
