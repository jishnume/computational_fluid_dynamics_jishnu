#include<stdio.h>

/*
Example: Partial initialisation of an array
Here some of the elements will be explicitely initialised and the
rest will be by default equal to zero.
*/

int main()
{
  // Creating an array by partial initialisation
  int arr[5]= {10,20};
  int i;

  printf("The array values are : \n");

  for (i=0;i<=4;i++)
  {
    printf("a[%d]: %d\n",i,arr[i]);
  }
  return 0;
}