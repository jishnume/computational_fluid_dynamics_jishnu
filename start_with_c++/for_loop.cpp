#include<iostream>
using namespace std ;

int main()
{
	int i ;  // counter variable

	int num1 ;
	cout <<"Enter the number "<< endl ;
	cin >> num1 ;

	int num ;

	if(num1>0)
	{
		num = num1 ;
		int fact=1 ;

		for(i=1;i<=num;i++)
		{
			
			fact = fact*i ;
			// cout << "fact value = "<< fact << " for i = "<< i << endl ;
		}

		cout << "factorial value = "<< fact << endl ;
	}
	else
	{
		cout << "Number should be greater than 0 "<< endl ;	
	}

	return 0 ;
}