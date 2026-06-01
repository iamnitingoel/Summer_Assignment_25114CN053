#include<bits/stdc++.h>
using namespace std;
int main(){
    int range;
    cout<<"Enter the range: ";
    cin>>range;
    cout<<"Armstrong numbers in given range: "<<endl;
    for(int i=1;i<=range;i++){
        int a,b,c,sum=0,count=0;
        a=b=c=i;
        while(a>0){
            count+=1;
            a=a/10;
        }
        while(b>0){
            sum+=(int)round(pow((b%10),count));        
            b=b/10;
        }
        if(c==sum){
            cout<<c<<" ";
        }
    }    
    return 0;
}
