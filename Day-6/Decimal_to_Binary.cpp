#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string binary="";
    cout<<"Enter a Decimal Number: ";
    cin>>n;
    while(n>0){
        int temp=n%2;
        if(temp==0){
            binary+="0";
        }
        else{
            binary+="1";
        }
        n=n/2;
    }
    reverse(binary.begin(),binary.end());
    cout<<"Decimal to Binary of the given number is: "<<binary;
    return 0;
}
