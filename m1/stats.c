/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  unsigned char arr[SIZE];
  int i;
  /* Statistics and Printing Functions Go Here */
  print_statistics(test,SIZE);

}

/* Add other Implementation File Code Here */
/*A function that prints the statistics of an array including minimum, maximum, mean, 
and median.*/
void print_statistics(unsigned char arr[], unsigned char size)
{

  int median;
  int mean;
  unsigned char max;
  unsigned char min;  

  printf("This is the array elements: \n");
	print_array(arr,size);
  printf("\n");
  find_median(arr,size, &median);
  printf("The median is: %d \n", median);
  find_mean(arr,size, &mean);
  printf("The mean is: %d \n", mean);	

  find_maximum(arr,size, &max);
  printf("The maximum is: %d \n", max);	
  find_minimum(arr,size, &min);
  printf("The maximum is: %d \n", min);	
}

void print_array(unsigned char arr[], unsigned char size)
{
  unsigned char i = 0;
  for(i=0; i< size; i++)
  {
    printf("%d\t\t", arr[i]);
  }

}


void find_median(unsigned char arr[], unsigned char size, int*p)
{
  unsigned char array[size];
  sort_array(arr,size, array);
  *p = array[size/2];
}

void sort_array(unsigned char arr[], unsigned char size, unsigned char * ptrArr)
{
  int i;
  int a;
  for (i = 0; i < size; ++i) 
  {
    for (int j = i + 1; j < size; ++j) 
    {
      if (arr[i] < arr[j]) 
      {
        a = arr[i];
        arr[i] = arr[j];
        arr[j] = a;
      }
    }
  }

  for (i = 0; i<size; i++)
  {
      ptrArr[i] = arr[i];
  }

}

void find_mean(unsigned char arr[], unsigned char size, int*p)
{
  *p =0;
for(int i = 0; i<size; i++)
{
    *p += arr[i];
}

*p = *p /40;

}

void find_maximum(unsigned char arr[], unsigned char size, int*p)
{
  unsigned char array[size];
  sort_array(arr, size, array);

  *p = array[0];

}

void find_minimum(unsigned char arr[], unsigned char size, int*p)
{
  unsigned char array[size];
  sort_array(arr, size, array);

  *p = array[size-1];
  
}