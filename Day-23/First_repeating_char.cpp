#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cout<<"Enter string: ";
    getline(cin,s);
    unordered_set<char> st;

    for(char ch:s){
        if(st.find(ch)!=st.end()){
            cout<<ch;
            return 0;
        }
        st.insert(ch);
    }
    cout<<"No repeating character exists!!";
    return 0;
}