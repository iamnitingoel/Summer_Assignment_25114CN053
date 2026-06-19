#include<bits/stdc++.h>
using namespace std;

int main(){
    int m,n,sumDiagonal=0;
    cout<<"Enter the number of rows and columns of the square matrix: ";
    cin>>m;
    cout<<"Enter the elements of the matrix: "<<endl;
    int a[m][m];
    for(int i=0; i<m;i++){
        for(int j=0; j<m;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0; i<m; i++){
        sumDiagonal+=a[i][i];
    }

    cout<<"Sum of the Diagonal is: "<<sumDiagonal;
return 0;
}