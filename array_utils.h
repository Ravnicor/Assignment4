/*Christopher Carreras
*3/9/2018
*Assignment 4, Program 1 
*This program will create a library of function
*prototypes for use in array_utils.c and array_utilsTester.c.
*/
#include<stdlib.h>
#include<stdio.h>	

	//Write a function that takes an integer array and returns the sum of its elements
	//between two given indices, i, j.
	int subSum(const int *a, int size, int i, int j);
		
	//Write a function that takes an integer array and returns the sums all of its elements:
	int sum(const int *a, int size);
	
	/*In an array, a contiguous subarray consists of all the elements between two indices i, j;
	the  sum  of  the  subarray  is  the  sum  of  all  the  elements  between i, j. The
	maximum contiguous  subarray  problem  is  the  problem  of  finding  the i, j whose
	subarray sum is maximal (it may not be unique).  Write a function that takes an
	integer array and returns the sum of the maximum contiguous subarray.
	*/
	int maxSubArraySum(const int *a, int size);
	
	//Write  a  function  that,  given  an  integer  array  and  an  integer x
	//determines  if  the array contains x within two provided indices, i, j 
	
	int containsWithin(const int *a, int size, int x, int i, int j);
	
	//Write  a  function  that,  given  an  integer  array  and  an  integer x
	//determines  if  the array contains x anywhere within the array.
		
	int contains(const int *a, int size, int x);

	/*Write  a  function  that  takes two integer  arrays  and  determines  if  they  are
	equal: that is, each index contains the same element.  If they are equal, then you should
	return true (non-zero), if not return false (zero).
	*/
	int isEqual(const int *a, const int *b, int size);

	/*Write a function that takes two integer arrays and determines if they both contain
	the same elements (though are not necessarily equal) regardless of their multiplicity.
	That is, the function should return true even if the arrays’ elements appear a different number
	of times (for example, 2,2,3 would be equal to an array containing 3,2,3,3,3,2,2,2).
	*/
	int containsSameElements(const int *a, int sizeOfA, const int *b, int sizeOfB);
	
	//An array of size n represents a permutation if it contains all integers 0,1,2, . . . ,(n−1)
	//exactly once.  Write a function to determine if an array is a permutation or not.
	int isPermutation(const int *a, int size);

	/*The k-th order statistic of an array is the k-th largest element.  For our purposes, k
	starts at 0, thus the minimum element is the 0-th order statistic and the largest element
	is the n −1-th order statistic.  Another way to view it is:  suppose we were to sort the
	array, then the k-th order statistic would be the element at index k in the sorted array.
	Write a function to find the k-th order statistic:
	*/
	int orderStatistic(const int *a, int size, int k);
	
	//For Deep Copy of array.
	int* deepCopy(const int *arr, int size);
	
	//To sort an array.
	void selectionSort(int *a, int size);