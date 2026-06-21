#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    for(int i=0; str[i]!='\0'; i++){
        if(str[i]>='a' && str[i]<='z')
            str[i]=str[i]-32;
    }
    cout<<"Uppercase String = "<<str;
    return 0;
}