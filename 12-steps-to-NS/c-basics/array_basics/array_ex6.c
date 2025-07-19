#include<stdio.h>

/*
Example: Partial initialisation of an array with specifying
some elements in between.
*/

int main()
{
  // creating an array
  int arr[5]= {10,[4]=40};
  int i;

  printf("The array values are : \n");

  for (i=0;i<=4;i++)
  {
    printf("a[%d]: %d\n",i,arr[i]);
  }
  return 0;
}