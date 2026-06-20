#include<bits/stdc++.h>
using namespace std;

int main(){
    int m,n,o;
    cout<<"Enter the number of rows of first matrix: ";
    cin>>m;
    cout<<"Enter the number of columns of first matrix: ";
    cin>>n;
    cout<<"Enter the number of columns of second matrix: ";
    cin>>o;
    int a[m][n], b[n][o], c[m][o];
    cout<<"Enter the elements of first matrix: "<<endl;
    for(int i=0; i<m;i++){
        for(int j=0; j<n;j++){
            cin>>a[i][j];
        }
    }  
    cout<<"Enter the elements of second matrix: "<<endl;
    for(int i=0; i<n;i++){
        for(int j=0; j<o;j++){
            cin>>b[i][j];
        }
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<o; j++){
            c[i][j]=0;
            for(int k=0; k<n; k++){
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }

    cout<<"Multiplication of both matrices is: "<<endl;
    for(int i=0; i<m;i++){
        for(int j=0; j<o;j++){
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }    
return 0;
} 