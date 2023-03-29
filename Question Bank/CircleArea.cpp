#include <iostream>
using namespace std;

int area(int x) {
 int a;
 a=3.14*x*x;
 return a;
}

int main() {
 int r,final;
 cout<<"Enter the Radius:";
 cin>>r;
 final=area(r);
 cout<<"Area of circle is "<<final;
}