# 2-D_Arrays
A two-dimensional array in C++ is the simplest form of a multi-dimensional array. It can be visualized as an array of arrays.

## THEORY
A two-dimensional array is also called a matrix. It can be of any type like integer, character, float, etc. depending on the initialization.<br>
We firstly initialize a 2D array with certain values.<br>
After that, we try to print the respective array using two for loops,
the outer for loop iterates over the rows, while the inner one iterates over the columns of the 2D array,
So, for each iteration of the outer loop, i increases and takes us to the next 1D array. Also, the inner loop traverses over the whole 1D array at a time,
And accordingly, we print the individual element arr[ i ][ j ].
Matrix operations like matrix addition can be done by matrices m1 and m2 with a certain number of rows and columns. And another matrix m3 in which we are going to store the result,
As user inputs, we took the number of rows and columns for both the matrices. Since we are performing matrix addition, the number of rows and columns should be the same for both the matrices,
After that, we take both the matrices as user inputs, again using nested for loops,
At this point, we have both the matrices m1 and m2,
then we traverse through the m3 matrix, using two for loops and update the respective elements m3[ i ][ j ] by the value of m1[i][j]+m2[i][j]. In this way, by the end of the outer for loop, we get our desired matrix,
At last, we print out the resultant matrix m3.Similarly operations like subtraction,multiplication,division and transpose can be performed.

## ALGORITHM
