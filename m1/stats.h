/**********************************************************************
 *  Author   : Khalid Mosaad Zakaria.
 *  Date	 : 16/6/2021.
 * 
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**********************************************************
*A function that prints the statistics of an array including minimum, maximum, mean, and median.
* it takes no argument. 
* it returns Nothing. 
* In this function i will call the other functions
*/
void print_statistics(unsigned char arr[], unsigned char size);
/**********************************************************
*Given an array of data and a length, prints the array to the screen.
* it takes The required array to be printed and its length i call it size. 
* it returns Nothing. 
*/

void print_array(unsigned char arr[], unsigned char size);
/**********************************************************
* Given an array of data and a length, gives the median value.
* it takes The required array to be printed and its length i call it size and a pointer to the 
variable that will store the result. 
* it returns Nothing. 
*/
void find_median(unsigned char arr[], unsigned char size, int*p); 

/**********************************************************
* Given an array of data and a length, gives the mean value.
* it takes The required array to be printed and its length i call it size and a pointer to the 
variable that will store the result. 
* it returns Nothing. 
*/
void find_mean(unsigned char arr[], unsigned char size, int*p); 

/**********************************************************
*Given an array of data and a length, gives the maximum.
* it takes The required array to be printed and its length i call it size and a pointer to the 
variable that will store the result. 
* it returns Nothing. 
*/


void find_maximum(unsigned char arr[], unsigned char size, int*p); 

/**********************************************************
*Given an array of data and a length, gives the minimum.
* it takes The required array to be printed and its length i call it size and a pointer to the 
variable that will store the result. 
* it returns Nothing. 
*/
void find_minimum(unsigned char arr[], unsigned char size, int*p); 

/**********************************************************
* Given an array of data and a length, gives the Sort it from largest to smallest .
* it takes The required array to be printed and its length i call it size.
* it returns Nothing. 
*/

void sort_array(unsigned char arr[], unsigned char size,unsigned char * ptrArr);


#endif /* __STATS_H__ */
