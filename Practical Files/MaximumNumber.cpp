#include <iostream>
#include <conio.h>
using namespace std;

int main() {
int size = 10;
system("CLS");
 int arr[size];
 cout<<"Enter elements for array:\n";
 for(int i=0; i<size; i++) {
    cin>>arr[i];
 }
 int max = arr[0];
 for(int i=0; i<=9; i++) {
  if(max < arr[i]) { max = arr[i]; }
 }
 cout<<"Maximum element of the Array is "<<max;
 getch();
}
//output: 
//Enter elements for array:
//1 555 494 303 214 60 292 391 600 302
//Maximum element of the Array is 600