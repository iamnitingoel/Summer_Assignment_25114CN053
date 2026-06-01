#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,factor;
    cout<<"Enter a number: ";
    cin>>n;
    if(n<=1){
        cout<<"No Prime Factors.";
    }
    else{
        cout<<"Biggest Prime Factor of "<<n<<" is: ";
        for(int i=2;i<=n;i++){\
            int flag=0;
            if(n%i==0){
                for(int j=2;j<i;j++){
                    if(i%j==0){
                        flag=1;
                        break;
                    }
                }
                if(flag==0){
                    factor=i;
                }
            }
        }
        cout<<factor;
    }    
    return 0;
}