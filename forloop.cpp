#include <iostream>
using namespace std;
int main() {
 // Declare and initialize a 2x3 integer array
 int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};
 // Access and print elements
 cout <<"Element at matrix[0][0]: "<<matrix[0][0]<<
endl;
 cout << "Element at matrix[1][2]: " << matrix[1][2] <<
endl;
 // Iterate through the 2D array
 cout << "Matrix elements:" << endl;
 for (int i = 0; i < 2; ++i) { // Rows
 for (int j = 0; j < 3; ++j) { // Columns
 cout << matrix[i][j] << " ";
 }
 cout << endl;
 }
 return 0;
}
