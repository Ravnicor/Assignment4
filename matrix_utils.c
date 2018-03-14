/*Christopher Carreras
*3/13/2018
*Assignment 4, Program 2
*This program will create a library of function implementations for use in matrix_utilsTester.c.
*/
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<string.h>
#include "matrix_utils.h"


//Write a function that constructs a new n × n identity matrix.  An identity matrix
//is a square matrix with ones on the diagonal and zeros everywhere else.
int **getIdentityMatrix(int n) {
  
	if(n < 0) {
		return NULL;
	}
  
	int **result = (int **) malloc(n * sizeof(int*));
	int i, j;
	for(i=0; i<n; i++) {
		result[i] = (int *) malloc(n * sizeof(int));
	}
	for(i=0; i<n; i++) {
		for(j=0; j<n; j++) {
			if (i == j) {
				result[i][j] = 1;
			} else {
			result[i][j] = 0;
			}
		}
	}
	return result;
}

//Write a function that takes two matrices and determines if they are equal (all of
//their elements are the same).
int isEqual(int **A, int **B, int n) {
	
	if(A == NULL || B == NULL || n < 0) {
		return 0;
	}
	
	int i = 0;
	int j = 0;
	
	for(i=0; i<n; i++) {
		for(j=0; j<n; j++) {
			if (A[i][j] != B[i][j]) {
				return 0;
			} else if (i != n -1) {
				i++;
			} else if (j != n -1) {
				i = 0;
				j++;
			} else {
				i++;
			}
		}
	}
		/*
		while (i < n) {
			if (A[i][j] != B[i][j]) {
				return 0;
			} else if (i != n -1) {
				i++;
			} else if (j != n -1) {
				i = 0;
				j++;
			} else {
				i++;
			}
		}*/
		return 1;
}	

//Write a function that takes a matrix and an index i and returns a new array that
//is equal to the i-th row of the matrix.
int *getRow(int **A, int n, int i) {
	
	if(n < 0 || i >= n || A == NULL) {
		return NULL;
	}
	int *copy = (int *) malloc(n * sizeof(int*));
	int j;
	for(j = 0; j < n; j++) {
		copy[j] = A[i][j];
	}
	return copy;
}
	
//Write a function that takes a matrix and an index j and returns a new array that
//is equal to the j-th column of the matrix.
int *getCol(int **A, int n, int j) {
	
	if(n < 0|| A == NULL || j >= n) {
		return NULL;
	}
	
	int *copy = (int *) malloc(n * sizeof(int*));
	int i;
	for(i = 0; i < n; i++) {
		copy[i] = A[i][j];
	}
	return copy;
}
	
//Write the following function to compute the product of two n × n square matrices.
int ** product(int **A, int **B, int n) {
	
	if(n < 0 || A == NULL || B == NULL) {
		return NULL;
	}
	int i, j, k;
	int **result = (int **) malloc(n * sizeof(int*));
	
	
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			result[i][j] = 0;
			for (k = 0; k < n; k++) {
			result[i][j] += A[i][k] * B[k][j];
			}
		}
	}
return result;	
}
	
//Write  a  function  to  compute  the n-th  power  of  a  matrix  A.
int **matrixPower(int **A, int size, int n) {
	
	if(size < 0 || A == NULL || n < 0) {
		return NULL;
	}
	
	
	
	

	
	return 0;
	
}