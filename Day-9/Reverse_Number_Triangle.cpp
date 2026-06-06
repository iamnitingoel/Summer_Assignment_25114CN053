// 12345                    (5+1-5)(5+1-4)(5+1-3)(5+1-2)(5+1-1)
// 1234                     (5+1-5)(5+1-4)(5+1-3)(5+1-2)
// 123     equivalent to    (5+1-5)(5+1-4)(5+1-3) 
// 12                       (5+1-5)(5+1-4)
// 1                        (5+1-5)
#include<bits/stdc++.h>
using namespace std;
int main(){
    int rows;
    cout<<"How many rows do you want in your reverse number triangle?"<<endl;
    cin>>rows;
     cout<<"Here is the required triangle: "<<endl;
    for(int i=1;i<=rows;i++){
        for(int j=rows;j>=i;j--){
            cout<<rows+1-j;
        }
        cout<<endl;
    }
    return 0;
}