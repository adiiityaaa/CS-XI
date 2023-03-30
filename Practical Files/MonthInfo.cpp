#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
  system("CLS");  
  int a,leap;
  cout<<"Enter the Month Number:\n";
  cin>>a;
  switch(a) {
   case 1: cout<<"Name: January\nDays: 31";
   break;
   case 2: cout<<"Is it a Leap Year?\n1 for Yes\n0 for No\n";
   cin>>leap;
   switch(leap) {
    case 1: cout<<"Name: February\nDays: 29";
    break;
    case 0: cout<<"Name: February\nDays: 28";
    break;
    default: cout<<"You did not enter a valid choice.";
   }
   break;
   case 3: cout<<"Name: March\nDays: 31";
   break;
   case 4: cout<<"Name: April\nDays: 30";
   break;
   case 5: cout<<"Name: May\nDays: 31";
   break;
   case 6: cout<<"Name: June\nDays: 30";
   break;
   case 7: cout<<"Name: July\nDays: 31";
   break;
   case 8: cout<<"Name: August\nDays: 31";
   break;
   case 9: cout<<"Name: September\nDays: 30";
   break;
   case 10: cout<<"Name: October\nDays: 31";
   break;
   case 11: cout<<"Name: November\nDays: 30";
   break;
   case 12: cout<<"Name: December\nDays: 31";
   break;
   default: cout<<"Enter a Valid Month between 1-12.";
   break; 
  }  
  getch();
}    