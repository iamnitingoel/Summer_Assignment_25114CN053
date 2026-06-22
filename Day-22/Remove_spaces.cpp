#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cout<<"Enter a String: ";
    getline(cin,str);
    string temp="";
    for(int i=0;i<str.length();i++){
        if(str[i]!=' '){
            temp+=str[i];
        }
    }
    cout<<"String after removing spaces: "<<temp;
    return 0;
}