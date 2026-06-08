#include<bits/stdc++.h>
using namespace std;

void fibonacci(int t){
    long long term1=0,term2=1;
    if(t==1){
        cout<<term1;
    }
    else if(t==2){
        cout<<term1<<" "<<term2;
    }
    else{
        cout<<term1<<" "<<term2<<" ";
        for(int i=3;i<=t;i++){
            long long k,temp=0;
            k=term1+term2;
            cout<<k<<" ";
            term1=term2;
            term2=k;
        }
    }
}

int main(){
    int term;
    cout<<"Enter the number of terms you want of the fibonacci series: ";
    cin>>term;
    cout<<"Here is your series: "<<endl;
    fibonacci(term);
    return 0;
}