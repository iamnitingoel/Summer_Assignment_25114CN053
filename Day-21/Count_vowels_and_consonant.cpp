#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    int vowels=0, consonants=0;
    cout<<"Enter a string: ";
    getline(cin, str);

    for(char ch : str) {
        if((ch>='a' && ch <='z') ||
           (ch>='A' && ch<='Z')) {

            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
                vowels++;
            }
            else{
                consonants++;
            }    
        }
    }
    cout<<"Vowels = "<<vowels<<endl;
    cout<<"Consonants="<<consonants;
    return 0;
}