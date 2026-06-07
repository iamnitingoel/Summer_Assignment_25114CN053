#include<bits/stdc++.h>
using namespace std;
int max(int a, int b){
    if(a>b){
        return a;
    }
    return b;
}

int main(){
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<max(a,b)<<" is greater among two.";
    return 0;
}