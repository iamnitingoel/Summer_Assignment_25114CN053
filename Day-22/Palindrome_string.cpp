#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cout<<"Enter a String: ";
    getline(cin,str);
    string temp="";
    for(int i=0;i<str.length();i++){
        if(str[i]!=' '){
            temp+=tolower(str[i]);
        }
    }
    int n=temp.length();
    int flag=1;
    for(int i=0;i<n/2;i++){
        if(temp[i]!=temp[n-i-1]){
            flag=0;
            break;
        }
    }
    cout<<(flag==1?"It is a palindrome string":"It is NOT a palindrome string");
    return 0;
}