#include<bits/stdc++.h>
using namespace std;

int main(){
    int m,n;
    cout<<"Enter the order of matrix: ";
    cin>>m;
    cout<<"Enter the elements of the matrix: "<<endl;
    int a[m][m];
    for(int i=0; i<m;i++){
        for(int j=0; j<m;j++){
            cin>>a[i][j];
        }
    }
    int flag=0;
    for(int i=0; i<m; i++){
        for(int j=0; j<m; j++){
            if(a[i][j]!=a[j][i]){
                flag=1;
                break;
            }
        }
        if(flag==1){
            break;
        }
    }
    cout<<(flag==0?"It is a symmetric matrix.":"It is NOT a symmetric matrix.");
return 0;
}