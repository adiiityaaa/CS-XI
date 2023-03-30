#include <iostream>
#include <conio.h>
using namespace std;

float area(float x) {
 float a;
 a=3.14*x*x;
 return a;
}

int main() {
 float r,final;
 system("CLS");
 cout<<"Enter the Radius:";
 cin>>r;
 final=area(r);
 cout<<"Area of circle is "<<final;
getch();  
}