#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    if(n==0||n==1){
        return 1;
    }
    
    return n*factorial(n-1);

}

int main(){
    int n;
    cout<<"Enter a Number: ";
    cin>>n;
    cout<<n<<"!=";
    cout<<factorial(n);
    return 0;
}