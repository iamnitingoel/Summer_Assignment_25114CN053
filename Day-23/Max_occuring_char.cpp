#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cout<<"Enter string: ";
    getline(cin,s);
    int freq[256]={0};

    for(char ch:s){
        freq[ch]++;
    }
    char ans=s[0];
    int max=0;

    for(char ch:s){
        if(freq[ch]>max){
            max=freq[ch];
            ans=ch;
        }
    }
    cout<<"Maximum occurring character: "<<ans;
    return 0;
}