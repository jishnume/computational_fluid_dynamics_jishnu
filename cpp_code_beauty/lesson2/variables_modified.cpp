#include<iostream>
using namespace std ;

int main()
{
	float salary, salary_month ;
	cout << "Enter your annual salary " << endl ;
	cin >> salary ;

	salary_month = salary/12 ;
	cout << "your monthly salary is = " << salary_month << endl ;
	return 0 ;
}
