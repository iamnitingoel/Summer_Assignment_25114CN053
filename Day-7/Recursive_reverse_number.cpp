#include<bits/stdc++.h>
using namespace std;

long long rev=0;

long long reverse(long long n){
    if(n==0){
        return rev;
    }
    
    rev=rev*10+(n%10);
    return reverse(n/10);

}

int main(){
    long long n;
    cout<<"Enter a Number: ";
    cin>>n;
    reverse(n);
    cout<<"Reverse of the given number is: "<<rev;
    return 0;
}