#include<bits/stdc++.h>
using namespace std;

int main(){
    int m,n;
    cout<<"Enter the number of rows: ";
    cin>>m;
    cout<<"Enter the number of columns: ";
    cin>>n;
    int a[m][n];
    cout<<"Enter the elements of the matrix:"<<endl;

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>a[i][j];
        }
    }

    for(int j=0; j<n; j++){
        int sum=0;
        for(int i=0; i<m; i++){
            sum+=a[i][j];
        }

        cout<<"Sum of column "<<j+1<<" = "<<sum<<endl;
    }

    return 0;
}