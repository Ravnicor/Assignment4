/*Christopher Carreras
*3/9/2018
*Assignment 4, Program 1 
*This program will create a library of function
*prototypes for use in array_utils.c and array_utilsTester.c.
*/
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<string.h>
#include "array_utils.h"

	//Write a function that takes an integer array and returns the sum of its elements
	//between two given indices, i, j.
	
	int subSum(const int *a, int size, int i, int j) {
				
			size = 0;
			while (i <= j) {
				size += a[i];
				i++;
			}
 
		return size;
	}

	//Write a function that takes an integer array and returns the sums all of its elements:
	
	int sum(const int *a, int size) {
		
		int i;
		int total = 0;
		for (i = 0; i < size; i++) {
			total += a[i];
		}
		return total;
	}
	/*In an array, a contiguous subarray consists of all the elements between two indices i, j;
	the  sum  of  the  subarray  is  the  sum  of  all  the  elements  between i, j. The
	maximum contiguous  subarray  problem  is  the  problem  of  finding  the i, j whose
	subarray sum is maximal (it may not be unique).  Write a function that takes an
	integer array and returns the sum of the maximum contiguous subarray.
	*/

	int maxSubArraySum(const int *a, int size) {
    
		int maximum = a[0];
		int nextNumber = 0;
		int i =0;
		
		while (i < size) {
			nextNumber += a[i];
			if (maximum < nextNumber) {
				maximum = nextNumber;
			} 
			if (nextNumber < 0) {
				nextNumber = 0;
			} i++;
		}
		
		
		
 
		/*for (int i = 0; i < size; i++ ) {
			nextNumber += a[i];
			if (maximum < nextNumber) {
				maximum = nextNumber;
			} 
			if (nextNumber < 0) {
				nextNumber = 0;
			}
		}*/
	
		return maximum;
	}
		
	//Write  a  function  that,  given  an  integer  array  and  an  integer x
	//determines  if  the array contains x within two provided indices, i, j 
	
	int containsWithin(const int *a, int size, int x, int i, int j) {
		
		while (i <= j) {
			if (x == a[i]) {
				return 1;
			} else {
				i++;
			}
		}
		
		return 0;
}

	//Write  a  function  that,  given  an  integer  array  and  an  integer x
	//determines  if  the array contains x anywhere within the array.
		
	int contains(const int *a, int size, int x){
		
		int i = 0;
		
		while (i < size) {
			if (x == a[i]) {
				return 1;
			} else {
				i++;
			}
		}
		return 0;
	}

	/*Write  a  function  that  takes two integer  arrays  and  determines  if  they  are
	equal: that is, each index contains the same element.  If they are equal, then you should
	return true (non-zero), if not return false (zero).
	*/
	
	int isEqual(const int *a, const int *b, int size) {
		
		int i = 0;
		
		while (i < size) {
			if (a[i] != b[i]) {
				return 0;
			} else {
				i++;
			}
		}
		return 1;
	}		

	/*Write a function that takes two integer arrays and determines if they both contain
	the same elements (though are not necessarily equal) regardless of their multiplicity.
	That is, the function should return true even if the arrays’ elements appear a different number
	of times (for example, 2,2,3 would be equal to an array containing 3,2,3,3,3,2,2,2).
	*/
	
	int containsSameElements(const int *a, int sizeOfA, const int *b, int sizeOfB) {
		
		int i = 0;
		int j = 0;
			
		if (sizeOfA >= sizeOfB) {
			while (j <= sizeOfB) {
				if (b[j] != a[i] && i == sizeOfA) {
					return 0;
				} else if (b[j] == a[i]) {
					j++;
					i = 0;
				} else {
					i++;
				}
			}
		}else {
			while (j <= sizeOfA) {
				if (a[j] != b[i] && i == sizeOfB) {
					return 0;
				} else if (b[j] == a[i]) {
					j++;
					i = 0;
				} else {
					i++;
				}
			}
		}
		
		return 1;
	}		
	
	//An array of size n represents a permutation if it contains all integers 0,1,2, . . . ,(n−1)
	//exactly once.  Write a function to determine if an array is a permutation or not.
	
	int isPermutation(const int *a, int size) {
		
		int i = 1;
		int j = 0;
		int count = 1;
		
		if (i <= size) {
			while (i <= size) {
				if (a[i] == a[j] && i != size) {
					return 0;
				} else if (a[i] != a[j] && i != size) {
					i++;
				} else if (count < size) {;
					j++;
					count++;
					i = count;
				} else {
					i = size +1;
				}
			}
		}
		return 0;
	}
	
	/*The k-th order statistic of an array is the k-th largest element.  For our purposes, k
	starts at 0, thus the minimum element is the 0-th order statistic and the largest element
	is the n −1-th order statistic.  Another way to view it is:  suppose we were to sort the
	array, then the k-th order statistic would be the element at index k in the sorted array.
	Write a function to find the k-th order statistic:
	*/
	
	int orderStatistic(const int *a, int size, int k){
		
		
	
		return 0;
		
	}
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
			
	