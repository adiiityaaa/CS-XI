#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
 system("CLS");  
 int a,b,c;
 cout<<"Enter the three numbers:\n";
 cin>>a>>b>>c;
 if(a == b || c == a || b == c) { cout<<"Numbers should be distinct."; exit(0); }
 if(a>b) { 
 if(a>c) { cout<<a<<" is the greatest number."; exit(0); } else { cout<<c<<" is the greatest number."; exit(0); }
 } else if(b>a) {
 if(b>c) { cout<<b<<" is the greatest number."; exit(0); } else { cout<<c<<" is the greatest number."; exit(0); }
 }
getch(); 
}
//output:
//Enter the three numbers:
//40 50 60
//60 is the greatest number. 