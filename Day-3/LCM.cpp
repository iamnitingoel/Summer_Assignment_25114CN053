#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,lcm=1;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    int large= (a<b)?a:b;
    for(int i=large;;i+=large){
        if(i%a==0 && i%b==0){
            lcm=i;
            break;
        }
    }
    cout<<"The LCM of "<<a<<" and "<<b<<" is: "<<lcm;
    return 0;
}