#include<stdio.h>

/*
Example: Getting the size of an array
*/

int main()
{
  // creating an array
  int arr[5]= {10,20,30,40,50};

  // displaying the size of the array
  printf("Size of the array = %ld\n",sizeof(arr));

  return 0;
}