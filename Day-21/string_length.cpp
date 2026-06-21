#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;    
    cout<<"Enter a string: ";
    getline(cin, str);
    int length=0;
    while(str[length]!='\0') {
        length++;
    }
    cout<<"Length of string = "<<length;
    return 0;
}