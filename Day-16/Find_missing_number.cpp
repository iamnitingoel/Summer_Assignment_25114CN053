//Assumed that only 1 element is missing
//Assumed that the elements are from range 1 to n+1, where is n is number of elements in array
//Assumed no duplicate elements are there in the array
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, sum=0;
    cout<<"How many elements do you want in array?"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }

    cout<<"The missing element is: "<<(n+1)*(n+2)/2-sum;
return 0;
}