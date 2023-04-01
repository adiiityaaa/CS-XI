#include <iostream>
#include <conio.h>
using namespace std;

int main() {
 int num = 11;

 cout<<"Multiplication Table of 1 to 10 is:\n";
 for(int i=1; i<num; i++){
    for(int j=1; j<num; j++) {
      cout<<i*j<<" ";
    }
    cout<<endl;
 }
getch(); 
}