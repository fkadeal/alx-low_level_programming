//Prototype : int linear_search(int *array, size_t size, int value);
//Where array is a pointer to the first element of the array to search in
//size is the number of elements in array
//And value is the value to search for
//Your function must return the first index where value is located
//If value is not present in array or if array is NULL, your function must return -1
//Every time you compare a value in the array to the value you are searching, you have to print this value (see example below)
//
#include "search_algos.h"
/**
  * linear_search - Searches for a value in an array
  *                 of integers using linear search.
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the first index where the value is located.
  *
  * Description: Prints a value every time it is compared in the array.
  */
	int linear_search(int *array, size_t size, int value){
	size_t u;
	if(array == NULL){
		return -1;
	}
	for ( u = 0 ; u  <  size ; u++){
		if(array[u] == value){
			//Value checked array[3] = [3]
			return array[u];
		}else {
			 printf("Value checked array [%ld] = [%d]\n",u , array[u]);
		}
	}
	return -1;
	}
