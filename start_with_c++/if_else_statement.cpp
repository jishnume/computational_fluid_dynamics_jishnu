#include<iostream>

using namespace std ;

int main()
{
	// defining Reynolds number in case of a pipe flow
	double Re ;

	// defining the fluid properties
	//let's assume our fluid is water

	// defining the fluid properties
	double rho_water = 1000 ;   // unit - in kg/m^3
	double mu_water = 0.001 ;   // unit - in Pas

	// defining the fluid flow characteristics
	double vel = 10*1e-2 ;   // unit - m/s

	// defining the pipe diameter
	double d = 10*1e-3 ;  // unit - m

	Re = rho_water*vel*d/mu_water ;
	cout << "Reynolds number = " << Re << endl ;
	
	double Re_critical = 2000 ;

	if(Re<Re_critical)
	{
		cout <<" The flow is laminar "<< endl ;
	}
	else if(Re>Re_critical)
	{
		cout<< " The flow is turbulent" << endl ;
	}

	return 0 ;
}