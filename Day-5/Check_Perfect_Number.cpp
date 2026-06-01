// Perfect Number: Adding all factors except the number itself gives the same number 
// (e.g: 6=1+2+3)
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,sum=0;
    cout<<"Enter a number: ";
    cin>>n;
    for(long long i=1;i<n;i++){
        if(n%i==0){
            sum+=i;
        }
    }
    if(n==sum){
        cout<<n<<" is a Perfect Number.";
    }
    else{
        cout<<n<<" is NOT a Perfect Number.";
    }
    return 0;
}