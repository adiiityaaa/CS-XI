#include <iostream>
#include <conio.h>
using namespace std;

int add(int x, int y) {
 int sum=x+y;
 return sum;
}

int main() {
 system("CLS");
 int a,b, sum;
 cout<<"Enter two numbers:\n";
 cin>>a>>b;
 sum=add(a,b);
 cout<<"Sum of numbers is "<<sum;
 getch();
 }
//output:
//Enter two numbers:
//12
//13
//Sum of numbers is 25