#include <iostream>
#include <conio.h>
using namespace std;

int area(int x) {
 int a = x*x;
 return a;
}

int area(int a, int b) {
 int area = a*b;
 return area;    
}

int main() {
  system("CLS");
  int a,b,c,square,rectangle;
  cout<<"Enter the side of Square:\n";
  cin>>a;
  cout<<"Enter the Length and Breadth of Rectangle:\n";
  cin>>b>>c;
  square=area(a);
  rectangle=area(b, c);
  cout<<"Area of Square is: "<<square<<endl;
  cout<<"Area of rectangle is: "<<rectangle;
  getch();
}
//output: 
//Enter the side of Square:
//4
//Enter the Length and Breadth of Rectangle:
//4
//5
//Area of Square is: 16   
//Area of rectangle is: 20