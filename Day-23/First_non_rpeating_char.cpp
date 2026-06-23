#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cout<<"Enter string: ";
    getline(cin,s);
    unordered_map<char,int> freq;

    for(char ch:s)
        freq[ch]++;

    for(char ch:s){
        if(freq[ch]==1){
            cout<<ch;
            return 0;
        }
    }
    cout<<"No non-repeating character exists!!";
    return 0;
}