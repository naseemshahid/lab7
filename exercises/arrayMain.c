#include <stdlib.h>
#include <stdio.h>
#include <time.h>


#include "array_utils.h"

int main(int argc, char **argv) {
  

  //seed the random number generator with the current time
  srand(time(NULL));

  int n = 10;
  int *arr = generateRandomArray(n);
  printArray(arr, n);

  int sum = getSum(arr, n);
  printf("sum of elements = %d\n", sum);
  printArray(arr, n);

  free(arr);


int size;
printf("\nEnter Size of your array : ");
scanf("%d",&size);

int array[size];

printf("\nEnter elements of your array with wide spaces : ");

for(int i=0;i<size;i++){

scanf("%d",&array[i]);

}

  


//checking  function

printf("\nMean of given array is : %.2lf",getMean(array,size));

//checking function

printf("\n\nMinimum element of array is : %d",getMin(array,size));

//checking  function

printf("\n\nIndex of minimum element of given array is : %d",getIndexOfMin(array,size));

//checking function

printf("\n\nMaximum element of array is : %d",getMax(array,size));

//checking  function

printf("\n\nIndex of maximum element of given array is : %d",getIndexOfMax(array,size));


//checking  function

int threshold;

printf("\n\nEnter Value for threshold : ");
scanf("%d",&threshold);

int resultsize;

int *ptr = filterThreshold(array , size , threshold , &resultsize); 

printf("\nResult size is %d and elements greator or equal than %d are : ",resultsize,threshold);

for(int i=0;i<resultsize;i++){

printf("%d ",ptr[i]);

}


// checking function
printf("Enter the rows: ");
int n2;
scanf("%d",&n2);

printf("Enter the columns: ");
	
int m;
scanf("%d",&m);
	
	int **mt=createMultiplicationTable( n,  m);
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			printf("%4d",mt[i][j]);
		}
		
		printf("\n");
	}
	  return 0;

}
