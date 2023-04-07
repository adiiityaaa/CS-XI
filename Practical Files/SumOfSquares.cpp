#include <iostream>
#include <conio.h>

using namespace std;
int main()
{ 
 int num = 10;   
 float square = 0, x=0;
 system("CLS");  
 while(x!=(num+1)) {
 square=square+(x*x);
 x++;
 }
 cout<<"Sum of squares of first 10 numbers is: "<<square;
 getch();
}    
//output:
//Sum of squares of first 10 numbers is: 385