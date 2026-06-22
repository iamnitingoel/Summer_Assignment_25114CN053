#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cout<<"Enter a String: ";
    getline(cin,str);
    char ch;
    cout<<"Enter Character: ";
    cin>>ch;
    int count=0;
    for(int i=0;i<str.length();i++){
        if(tolower(str[i])==tolower(ch)){
            count++;
        }
    }
    cout<<"Frequency of "<<ch<<" is: "<<count;
    return 0;
}