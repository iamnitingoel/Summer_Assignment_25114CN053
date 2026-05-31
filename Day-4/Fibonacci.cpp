#include<bits/stdc++.h>
using namespace std;
int main(){
    int term;
    long long term1=0,term2=1;
    cout<<"Enter the number of terms you want of the fibonacci series: ";
    cin>>term;
    cout<<"Here is your series: "<<endl;
    if(term==1){
        cout<<term1;
    }
    else if(term==2){
        cout<<term1<<" "<<term2;
    }
    else{
        long long temp,t;
        cout<<"0 1 ";
        for(int i=3;i<=term;i++){
            t=term1+term2;
            cout<<t<<" ";
            term1=term2;
            term2=t;
        }
    }
    return 0;
}    