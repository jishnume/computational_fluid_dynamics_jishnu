#include<iostream>
#include<cmath>
using namespace std ;

int main()
{
	float r = 2.5 ;            // radius of the sphere in mm
	
	// defining value of pi
	double pi = 22.0/7 ;
	cout << "Value of pi = " << pi << endl ;

	double sphere_vol ;
	double sphere_area ;

	// --------------------------------------------------------
	//        Difference between mathematics and c++          -
	// --------------------------------------------------------

	// cout << 4/3 << endl ;
	// cout << 4.0/3 << endl ;

	double volume1,volume2 ;

	volume1 = (4/3)*pi*pow(r,3) ;
	cout << "Volume 1 = "<< volume1 << "m^3" << endl ;

	volume2 = (4.0/3)*pi*pow(r,3) ;
	cout << "Volume 2 = "<< volume2 << "m^3" << endl ;
	
	sphere_vol = volume2 ;
	cout << "Correct volume of the sphere = "<< sphere_vol << " m^3" << endl ;
	
	return 0 ;
}