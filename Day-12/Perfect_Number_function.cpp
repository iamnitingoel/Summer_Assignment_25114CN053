#include<bits/stdc++.h>
using namespace std;

void isPerfect(int n){ 
    long long sum=0;
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
}

int main(){
    long long n;
    cout<<"Enter a number: ";
    cin>>n;
    isPerfect(n);
    return 0;
}