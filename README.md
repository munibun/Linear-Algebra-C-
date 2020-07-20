# Linear_Algebra_CPP
This is a rudimentary and work in progress pet project for Linear algebra using C++.\
The matrix.h contains a matrix class with all it's property and methods.\
Right now the Matrix Class can deals only integer. Future scope is to extend for float data type.

`Matrix Matrix_object(int m,int n);`          // creates a matrix object "Matrix_object" with dimension m*n 

**Operators:**\
`+`                                          
 :Element wise addition of two Matrix.                                           
 :Addition of a constant and a Matrix.\
 :Addition of a Matrix and a constant.

`*`                                          
:Multiplication between two Matrices if satisfy dimension of Matrix multiplication.\
:Elementwise multiplication between a scalar and a Matrix.\
:Elementwise multiplication between a Matrix and a scalar.
 
**Properties:**

**Private:**\
`int num_row;`                              // Number of rows in the Matrix;\
`int num_column;`                           // Number of column in the Matrix;\
`bool square;`                              // If the Matrix is square or not;\
`bool symmetric;`                           // If the Matrix is symmetric or not;





**Methods:**\
`set_value();`                               // Set the value of the elements of the Matrix.

`print();`                                   // Print the value of a Matrix.
                     
`is_square()`                                // Prints is a Matrix is square or not.                                                

`transpose()`                                // Return the transpose of Matrix.

`is_equal(Matrix A)`                         // Return true or false if two Matrices are equal or not.

`is_symmetric()`                             // Print if a Matrix is symmetric or not.

`zero()`                                     // Initialize each value of a matrix to zero.

`one()`                                      // Initialize each value of a matrix to one.

`Matrix eye(int m)`                          // Create a m*m square identity Matrix. 

`Matrix eye(int m,int n)`                   // Create a m*n identity Matrix
