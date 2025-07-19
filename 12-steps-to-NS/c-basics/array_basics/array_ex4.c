#include<stdio.h>

/*
Example: In this example, I am trying to initialise an array by assigning same value
to all its elements.
*/

int main()
{
  // Initialising an array to 0
  int arr[5]= {0};
  int i;

  printf("The array values are : \n");

  for (i=0;i<=4;i++)
  {
    printf("a[%d]: %d\n",i,arr[i]);
  }
  return 0;
}