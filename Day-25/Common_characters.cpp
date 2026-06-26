#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1,s2;
   cout<<"Enter first string: ";
    getline(cin,s1);
    cout<<"Enter second string: ";
    getline(cin,s2);

    int freq[256]={0};   //hashing

    for(int i=0;i<s1.length();i++){
        freq[(int)s1[i]]=1;
    }

    cout<<"Common characters: ";
    for(int i=0;i<s2.length();i++){
        if(freq[(int)s2[i]]==1){
            cout<<s2[i]<<" ";
            freq[(int)s2[i]]=0;    //to avoid printing the same common char again and again
        }
    }
    return 0;
}