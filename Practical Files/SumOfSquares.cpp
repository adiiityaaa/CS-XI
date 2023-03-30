#include <iostream>
#include <conio.h>

using namespace std;
int main()
{ 
 float num;
 float square = 0, x=0;
 system("CLS");  
 cout<<"Enter the Number:\n";   
 cin>>num;
 while(x!=(num+1)) {
 square=square+(x*x);
 x++;
 }
 cout<<"Sum of squares of first"<<num<<"is: "<<square;
 getch();
}    
