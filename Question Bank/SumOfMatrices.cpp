#include <iostream>
using namespace std;

int main() {
 int r,c;
 cout<<"Enter the Number of Rows and Columns:\n";
 cin>>r>>c;
 int A[r][c], B[r][c], C[r][c];

 cout<<"Enter the Elements of A:\n";
 for(int i=0; i<r; i++) {
    for(int j=0; j<c; j++) {
        cin>>A[i][j];
    }
 }

 cout<<"Enter the Elements of B:\n";
 for(int i=0; i<r; i++) {
    for(int j=0; j<c; j++) {
        cin>>B[i][j];
    }
 }

 cout<<"Sum of Matrices of A and B is:\n";
 for(int i=0; i<r; i++){
    for(int j=0; j<c; j++) {
        cout<<A[i][j] + B[i][j]<< " ";
    }
    cout<<endl;
 }
}