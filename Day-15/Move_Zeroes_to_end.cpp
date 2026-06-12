#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"How many elements do you want in array?"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int j=-1;
    for(int i=0;i<n;i++){     //finding first zero
        if (arr[i]==0){
            j=i;
            break;
        }
    }

    if(j!=-1){                    //if a zero exists in the array
        for(int k=j+1;k<n;k++){   //used two pointer approach
            if(arr[k]!=0){
                int temp=arr[k];
                arr[k]=arr[j];
                arr[j]=temp;
                j++;
            }
        }
    }
    cout<<"Array after moving zeroes to end: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
return 0;
}