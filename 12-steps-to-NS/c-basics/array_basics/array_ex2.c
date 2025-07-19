#include<stdio.h>

/*
Example: In the following example, we are declaring an array of 5 integers and
printing the indexes and values of all the array elements -
*/

int main()
{
  // creating an array
  int arr[5];
  int i;

  printf("The array values are : \n");

  for (i=0;i<=4;i++)
  {
    printf("a[%d]: %d\n",i,arr[i]);
  }
  return 0;
}