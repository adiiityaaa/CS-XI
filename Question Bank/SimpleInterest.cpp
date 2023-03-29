#include <iostream>
using namespace std;

int interest(int x, int y, int z) {
  int si;
  si=(x*y*z)/100;
  return si;  
}

int main()
{
 int p,n,r,si;
 cout<<"Interest Rate Calculator\n";
 cout<<"Enter the Principle Amount:\n";
 cin>>p;
 cout<<"Enter the Interest Rate:\n";
 cin>>r;
 cout<<"Enter the Time Period:\nPeriod should be in Years.\n";
 cin>>n;
 si=interest(p,n,r);
 cout<<"Simple Interest on "<<p<<" for "<<n<<" year(s) at "<<r<<"% interest is "<<si<<". Total Amount will be: "<<p+si;
}  