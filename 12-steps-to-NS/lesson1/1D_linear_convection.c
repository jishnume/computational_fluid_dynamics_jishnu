#include<stdio.h>
#include<stdlib.h>

int main()
{
  // Specification of 1D problem
  double L=1;          // length of the 1D domain
  double dx=0.1;       // Spatial resolution
  int n=L/dx;          // no of intervals
  
  printf("No of intervals = %d\n",n);

  // Creating the initial condition
  int *u = (int *)malloc(n*sizeof(int));
  int f1=1;      // first step value
  int f2=2;      // second step value
  
  for (float i=0;i<=1;)
  {
    printf("\n");
    printf("original value (i) = %f\n",i);
    i=i+dx;
    printf("updated value = %f\n",i);
  }

  // // printing the values
  // for (int j=0;j<n;j++)
  // {
  //   printf("%d\n",u[j]);
  // }

  free(u);
  u=NULL;
  printf("Everything running smoothly\n");
  return 0;
}