/*Christopher Carreras
*3/12/2018
*Assignment 4, Program 2 
*This program will create a library of function
*prototypes for use in matrix_utils.c and matrix_utilsTester.c.
*/
#include<stdlib.h>
#include<stdio.h>

	//Write a function that constructs a new n × n identity matrix.  An identity matrix
	//is a square matrix with ones on the diagonal and zeros everywhere else.
	int **getIdentityMatrix(int n);
	
	//Write a function that takes two matrices and determines if they are equal (all of
	//their elements are the same).
	int isEqual(int **A, int **B, int n);
	
	//Write a function that takes a matrix and an index i and returns a new array that
	//is equal to the i-th row of the matrix.
	int *getRow(int **A, int n, int i);
	
	//Write a function that takes a matrix and an index j and returns a new array that
	//is equal to the j-th column of the matrix.
	int *getCol(int **A, int n, int j);
	
	//Write the following function to compute the product of two n × n square matrices.
	int ** product(int **A, int **B, int n);
	
	//Write  a  function  to  compute  the n-th  power  of  a  matrix  A.
	int **matrixPower(int **A, int size, int n);