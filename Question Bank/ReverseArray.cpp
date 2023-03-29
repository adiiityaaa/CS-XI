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

 for(int i=0; i<size/2; i++) {
    int temp = arr[i];
    arr[i] = arr[size - i - 1];
    arr[size - i - 1] = temp;
 }

 cout<<"The reversed array is:\n";
 for(int i=0; i<size; i++) {
    cout<<arr[i]<<"\n";
 }
}