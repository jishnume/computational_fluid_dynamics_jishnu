#include<stdio.h>
#include<stdlib.h>

int main()
{
  // Getting the size of the array from the user
  int n;
  printf("Enter the size (length) of the array = ");
  scanf("%d",&n);


  // Dynamically allocating the size
  int *my_array = (int *)malloc(n*sizeof(int));
  if (my_array == NULL)
  {
    printf("Memory allocation failed !!\n");
    return 1;
  }

  // filling the array
  for (int i=0;i<n;i++)
  {
    my_array[i]=(i+1)*10;
  }

  // printing the array
  for (int j=0;j<n;j++)
  {
    printf("\n Value = %d",my_array[j]);
  }
  
  // freeing the used memory
  free(my_array);


  printf("\nEverything working properly \n");
  return 0;
}