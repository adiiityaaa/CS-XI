#include <iostream>
#include <conio.h>
int factorial(int n);
using namespace std;

int main() {
system("CLS");    
int x,fact;
cout<<"Enter the number:\n";
cin>>x;
fact=factorial(x);
cout<<"Factorial of "<<x<<" is "<<fact;
getch();
}

int factorial(int n) {
int fact = 1;
if(n == 1) { return 1; }
else {
 fact = factorial(n-1)*n;
 return fact;
}}
//output:
//Enter the number:
//10
//Factorial of 10 is 3628800