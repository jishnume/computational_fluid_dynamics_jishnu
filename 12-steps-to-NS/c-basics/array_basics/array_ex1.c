#include<stdio.h>

int main()
{
  int marks[10]={50,55,67,73,45,21,39,70,49,51};
  int i,sum=0;
  float avg;

  for (i=0;i<=9;i++)
  {
    sum = sum+marks[i];
  }

  avg=(float)sum/10;
  printf("Average: %.2f\n",avg);
  return 0;
}