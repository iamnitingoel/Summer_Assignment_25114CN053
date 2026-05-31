#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,count=0,sum=0;
    cout<<"Enter a number: ";
    cin>>a;
    b=c=a;
    while(a>0){
        count+=1;
        a=a/10;
    }
    while(b>0){
        sum+=(int)round(pow((b%10),count));           /*pow() returns double, so (int)round is used to avoid precision errors 
                                                        [for future ref. remove (int)round and check the result]*/
        b=b/10;
    }
    if(c==sum){
        cout<<c<<" is an Armstrong number.";
    }
    else{
        cout<<c<<" is not an Armstrong number";
    }
    return 0;
}
