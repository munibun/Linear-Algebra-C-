# Linear_Algebra_CPP
This is a rudimentary and work-in-progress pet project for Linear algebra using C++.\
The matrix.h contains a matrix class with all its properties and methods.\
Right now the Matrix Class can deal only integers. The future scope is to extend for float data type.

`Matrix Matrix_object(int m,int n);`          // creates a matrix object "Matrix_object" with dimension m*n 

**Operators:**\
`+`                                          
 : Element-wise addition of two Matrix.                                           
 : Addition of a constant and a Matrix.\
 : Addition of a Matrix and a constant.

`*`                                          
: Multiplication between two Matrices if it satisfies the dimension of Matrix multiplication.\
: Elementwise multiplication between a scalar and a Matrix.\
: Elementwise multiplication between a Matrix and a scalar.
 
**Properties:**

**Private:**\
`int num_row;`                              // Number of rows in the Matrix;\
`int num_column;`                           // Number of column in the Matrix;\
`bool square;`                              // If the Matrix is square or not;\
`bool symmetric;`                           // If the Matrix is symmetric or not;





**Methods:**\
`set_value();`                               // set the value of the elements of the Matrix.

`print();`                                   // print Matrix.
                     
`is_square()`                                // prints if a Mtrix is square.                                                

`transpose()`                                // return the transpose of Matrix.

`is_equal(Matrix A)`                         // check if two Matrices are equal.

`is_symmetric()`                             // check if a Matrix is symmetric.

`zero()`                                     // initialize each value of a matrix to zero.

`one()`                                      // initialize each value of a matrix to one.

`Matrix eye(int m)`                          // create a m*m square identity Matrix. 

`Matrix eye(int m,int n)`                   // create a m*n identity Matrix
