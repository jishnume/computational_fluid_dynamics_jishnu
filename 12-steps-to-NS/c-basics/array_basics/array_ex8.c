#include<stdio.h>

int main()
{
  // Creating an array
  int arr[5]={10,[4]=5};

  // displaying the memory locations of the array elements
  for (int i=0;i<5;i++)
  {
    printf("Value = %d, Address = %p\n",arr[i], (void *)&arr[i]);
  }
  printf("Size of 'int' data type : %ld\n",sizeof(int));

  for (int i=0;i<4;i++)
  {
    printf("Memory location gap = %ld (bytes)\n", (char *)&arr[i+1]-(char *)&arr[i]);
  }
  return 0;
}