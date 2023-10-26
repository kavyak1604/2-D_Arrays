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
a)Matrix multiplication<br>
1)Start<br>
2)Ask the user to specify how many rows and columns there are in arrays 1 and 2.<br>
3)After receiving the user's input for arrays 1 and 2, read it and store the values in r1, c1, r2, and c2.<br>
4)Create a pair of 2D arrays<br>
5)Iterate through the rows and columns of arrays 1 and 2 using nested loops to input elements.<br>
6)For matrix multiplication compatibility, confirm that the number of rows in array2 (r2) and the number of columns in array1 (c1) are equal. If not, the programme will end and an error message will appear.<br>
7)Declare a result if the dimensions are appropriate for multiplication.<br>
8)End<br>
b)Displaying 2d array<br>
1)Start<br>
2)In order to hold the number of rows and columns, respectively, declare integer variables x and y.<br>
3)Request that the user input the number of rows and columns, then read the values into the variables x and y.<br>
4)To hold the matrix elements, declare a 2D integer array mat with x rows and y columns.<br>
5)Iterate through the rows and columns of the matrix using nested loops to input elements<br>
6)The rows from 0 to x-1 are iterated over by the outer loop (variable i).<br>
7)The columns from 0 to y-1 are iterated over by the inner loop (variable j).<br>
8)Give the user a popup to enter the matrix element at location [i][j], then read the input into mat[i][j].<br>
9)Use nested loops once all elements have been entered to.<br>
10)End<br>

## CONCLUSION
Hence in this repository programs like matrix multiplication display and addition were done using 2d arrays.
