//                   space   star
// *********           0      9
//  *******            1      7
//   *****             2      5
//    ***              3      3
//     *               4      1

//if no. of rows=h   (i-1)   2*(h-i)+1    {where, i=row number}  

#include<bits/stdc++.h>
using namespace std;
int main(){
    int h;
    cout<<"Enter the height of the reverse pyramid: "<<endl;
    cin>>h;
    cout<<"Here is the required reverse pyramid:"<<endl;
    for(int i=1;i<=h;i++){                  //ROWS
        for(int j=1;j<=(i-1);j++){          //No. of spaces in each row
            cout<<" ";
        }
        for(int k=1;k<=2*(h-i)+1;k++){      //No. of stars in each row
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}