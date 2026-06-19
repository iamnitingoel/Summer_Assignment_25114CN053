#include<bits/stdc++.h>
using namespace std;

int main(){
    int m,n;
    cout<<"Enter number of rows: ";
    cin>>m;
    cout<<"Enter number of columns: ";
    cin>>n;
    cout<<"Enter the elements of first matrix: "<<endl;
    int a[m][n], b[m][n], c[m][n];
    for(int i=0; i<m;i++){
        for(int j=0; j<n;j++){
            cin>>a[i][j];
        }
    }  
    cout<<"Enter the elements of second matrix: "<<endl;
    for(int i=0; i<m;i++){
        for(int j=0; j<n;j++){
            cin>>b[i][j];
        }
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            c[i][j]=a[i][j]+b[i][j];
        }
    }

    cout<<"Addition of both matrices is: "<<endl;
    for(int i=0; i<m;i++){
        for(int j=0; j<n;j++){
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }    
return 0;
}