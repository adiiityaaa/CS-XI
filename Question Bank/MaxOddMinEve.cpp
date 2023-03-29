#include <iostream>
using namespace std;

int main() {
 int size;
 cout<<"Enter the size of the array [Max 30]:\n";
 cin>>size;
 if(size>30) { cout<<"Size greater than 30!"; exit(0); }
 int arr[size];
 cout<<"Enter "<<size<<" elements for the array:\n";
 for(int i=0; i<size; i++) {
  cin>>arr[i];
 }
 
 int maxo = -1;
 int mine = 999999;
 for(int i=0; i<size; i++) {
  if(arr[i] % 2 == 1 && arr[i] > maxo) { maxo = arr[i]; }
  else if(arr[i] % 2 == 0 && arr[i] < mine ) { mine = arr[i]; }
 }
 if(maxo == -1) { cout<<"There are no Odd Numbers.\n"; } else { cout<<"Maximum odd number is "<<maxo<<"\n"; }
 if(mine == 999999) { cout<<"There are no even Numbers.\n"; } else { cout<<"Minimum even number is "<<mine<<"\n"; }
} 