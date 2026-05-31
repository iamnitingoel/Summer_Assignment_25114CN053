#include<bits/stdc++.h>
using namespace std;
int main(){
    int term;
    long long term1=0,term2=1;
    cout<<"Which term are you looking for...in the fibonacci series??"<<endl;
    cin>>term;
    cout<<"Here is the number at that term: "<<endl;
    if(term==1){
        cout<<term1;
    }
    else if(term==2){
        cout<<term1<<" "<<term2;
    }
    else{
        long long temp,t;
        for(int i=3;i<=term;i++){
            t=term1+term2;
            term1=term2;
            term2=t;
        }
        cout<<t;
    }
    return 0;
}    