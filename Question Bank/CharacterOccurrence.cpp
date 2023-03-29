#include <iostream>
#include <string>
using namespace std;

int main() {
string str;    
char ch;
int count = 0;
cout<<"Enter the string:\n";
getline(cin, str);
cout<<"Enter the Character:\n";
cin>>ch;
for(int i=0; i<str.length(); i++) {
    if(str[i] == ch) { count++; }
}
cout<<"Character "<<ch<<" appears "<<count<<" times in the string.";
}