#include<bits/stdc++.h>
using namespace std;

int fibonacci(int i){
    if(i==1){
        return 0;
    }
    if(i==2){
        return 1;
    }
   
    return fibonacci(i-1)+fibonacci(i-2);
    
}

int main(){
    int term;
    cout<<"Enter the number of terms you want of the fibonacci series: ";
    cin>>term;
    cout<<"Here is your Series: ";
    for(int i=1;i<=term;i++){
        cout<<fibonacci(i)<<" ";
    }    
    return 0;
}