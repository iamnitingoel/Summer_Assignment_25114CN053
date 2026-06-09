#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,counteven=0,countodd=0;
    cout<<"How many elements do you want in array?"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]%2==0){
            counteven++;
        }
        else{
            countodd++;
        }
    }

    cout<<"Number of EVEN elements: "<<counteven<<endl;
    cout<<"Number of ODD elements: "<<countodd<<endl;
return 0;
}