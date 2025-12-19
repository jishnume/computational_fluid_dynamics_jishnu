/*
A sample program to illustrate  some basic features of c++.

====== What the program does =======
It adds all integers between two given integers and
outputs the sum to the screen 
*/

#include<iostream>  // standard library for I/O

int main()
{
  int num1,num2;
  std::cout<<"Enter two integers: "<<std::endl;
  std::cin>>num1>>num2;

  // checking which number is the largest
  if (num1>num2)
  {
    int temp;
    temp=num1;
    num1=num2;
    num2=temp;
  }

  std::cout<<"The entered integers are (in order): "<<num1<<" & "<< num2<<std::endl;
  
  // Calculating the sum of all integers between num1 and num2
  double sum=0;
  for (int i=num1;i<=num2;i++)
  {
    sum=sum+i;
  }
  std::cout<<"Sum of all the integers from "<< num1 << " and "<< num2 << " is = "<<sum<<std::endl;
  
  return 0;
}