#include<iostream>
#include<cmath>

using namespace std ;

int main()
{
	int num;
	cout<<"Enter a number : "<< endl ;
	cin >> num ;
	int fact=1;

	int i ;
	for (i=1;i<=num;i++)
	{
		fact = fact*i ;
		// cout << "factorial value = "<< fact << endl ; 
	}
	cout <<"Factorial value of "<< num << " is = "<< fact << endl ;
	return 0 ;
}