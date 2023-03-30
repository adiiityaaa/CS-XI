#include <iostream>
#include <cmath>
#include <conio.h>
using namespace std;

bool isPrime(int x) {
 if(x <= 1) {
    return false;
 }
 
 int max = sqrt(x);
 for(int i=2; i<=max; i++) {
    if(x%i == 0) { return false; }
 }

 return true;
}

int main() {
int size;
system("CLS");
 cout<<"Enter the array size:\n";
 cin>>size;
 int arr[size];
 cout<<"Enter elements for array:\n";
 for(int i=0; i<size; i++) {
    cin>>arr[i];
 }
 cout<<"Prime numbers in the array are:\n";
 for(int i=0; i<size; i++) {
    if(isPrime(arr[i])) {
     cout<<arr[i]<<" ";
    }
 }
 getch();
}