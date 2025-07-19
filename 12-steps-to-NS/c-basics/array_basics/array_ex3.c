#include<stdio.h>

/*
Example: In this example, I am trying to initialise an array by manually passing
values in between two curly braces {}
*/

int main()
{
  // creating an array
  int arr[5]= {10,20,30,40,50};
  int i;

  printf("The array values are : \n");

  for (i=0;i<=4;i++)
  {
    printf("a[%d]: %d\n",i,arr[i]);
  }
  return 0;
}