// Anagram: Two strings are anagrams if they contain --
// the same characters with the same frequency,
// but the order of characters may be different.
// eg: silent and listen are anagram strings.

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1,s2;
    cout<<"Enter first string: ";
    getline(cin,s1);
    cout<<"Enter second string: ";
    getline(cin,s2);

    if(s1.size()!=s2.size()){
        cout<<"Not Anagram";
        return 0;
    }

    int freq[256]={0};   //hashing

    for(char ch:s1)
        freq[ch]++;

    for(char ch:s2)
        freq[ch]--;

    for(int i=0;i<256;i++){
        if(freq[i]!=0){
            cout<<"Not Anagram";
            return 0;
        }
    }
    cout<<"Anagram";
    return 0;
}