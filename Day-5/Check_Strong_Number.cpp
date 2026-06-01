// Strong Number: Adding the factorial of each digit of a number gives the number itself
// (e.g: 145= 1! + 4! + 5!)
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long m,n,sum=0;
    cout<<"Enter a number: ";
    cin>>n;
    m=n;
    while(n>0){
        int temp=n%10;
        long long fact=1;
        for(int i=1;i<=temp;i++){
            fact*=i;
        }
        sum+=fact;
        n=n/10;
    }
    if(m==sum){
        cout<<m<<" is a Strong Number.";
    }
    else{
        cout<<m<<" is NOT a Strong Number.";
    }
    return 0;
}