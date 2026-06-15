#include<bits/stdc++.h>
using namespace std;

void merge_arrays(int a[], int b[], int c[],int p,int q){
    for(int i=0; i<p;i++){
        c[i]=a[i];
    }
    for(int i=0;i<q;i++){
        c[p+i]=b[i];
    }
}
int main(){
    int p,q;
    cout<<"Enter the number of elements in first array: ";
    cin>>p;
    int a[p];
    cout<<"Enter the elements of first array: ";
    for(int i=0; i<p; i++){
        cin>>a[i];
    }
    cout<<"Enter the number of elements in second array: ";
    cin>>q;
    int b[q],c[p+q];
    cout<<"Enter the elements of second array: ";
    for(int i=0; i<q; i++){
        cin>>b[i];
    }
    merge_arrays(a,b,c,p,q);
    cout<<"Here is the merged array: "<<endl;
    for(int i=0; i<p+q; i++){
        cout<<c[i]<<" ";
    }
return 0;
}