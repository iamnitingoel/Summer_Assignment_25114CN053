//                   space   star
//     *               4       1        
//    ***              3       3
//   *****             2       5
//  *******            1       7
// *********           0       9

//if no. of rows=h   (h-i)   (2*i-1)      {where, i=row number}  

#include<bits/stdc++.h>
using namespace std;
int main(){
    int h;
    cout<<"Enter the height of the pyramid: "<<endl;
    cin>>h;
    cout<<"Here is the required pyramid:"<<endl;
    for(int i=1;i<=h;i++){                  //ROWS
        for(int j=1;j<=(h-i);j++){          //No. of spaces in each row
            cout<<" ";
        }
        for(int k=1;k<=(2*i-1);k++){        //No. of stars in each row
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}