#include <iostream>
#include <conio.h>
using namespace std;

int main() {
 system("CLS");
 int size = 10;
 if(size>30) { cout<<"Size greater than 30!"; exit(0); }
 int arr[size];
 cout<<"Enter "<<size<<" elements for the array:\n";
 for(int i=0; i<size; i++) {
  cin>>arr[i];
 }

 for(int i=0; i<size/2; i++) {
    int temp = arr[i];
    arr[i] = arr[size - i - 1];
    arr[size - i - 1] = temp;
 }

 cout<<"The reversed array is:\n";
 for(int i=0; i<size; i++) {
    cout<<arr[i]<<"\n";
 }
 getch();
}
//output:
//Enter 10 elements for the array:
//4 5 6 02 40 484854 8383893 585824 2389 203
//The reversed array is:
//203 2389 585824 8383893 484854 40 2 6 5 4