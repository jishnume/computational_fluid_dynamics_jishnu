// ---------------------- What is this code all about ? --------------------------------------
// To calculate area and volumne of a sphere
// To use user-defined function to calculate the same

// Author - Jishnu Goswami
// MS Engg., EMU, JNCASR

#include<iostream>
using namespace std ;

// -------------------------------------------------------------------------------------------
// This is the first function
double volume(double r)
{
	double v ;
	v = (4.0/3)*(22.0/7)*(r*r*r) ;
	return v ;
}

// -------------------------------------------------------------------------------------------

// This is the second function
double area(double r)
{
	double A ;
	A = 4*(22.0/7)*(r*r) ;
	return A ;
}

// -------------------------------------------------------------------------------------------

// This is the main function

int main()
{
	float r=2.5 ;         // radius in mm
	double pi=22.0/7 ;    // defined pi value

	
	double sphere_vol ;
	double sphere_area ; 

	// Calculating volume of the sphere
	sphere_vol = (4.0/3)*pi*(r*r*r) ;
	cout << "Volume of the sphere is = "<< sphere_vol << " mm^3" << endl ;


	// executing volume function
	double sphere_vol_using_func = volume(r) ;
	cout << "Volume of the sphere (using function) is = "<< sphere_vol_using_func << " mm^3" << endl ;
	

	// calculating area of the sphere
    sphere_area = 4*pi*(r*r) ;
    cout << "Surface area of the sphere is = "<< sphere_area << " mm^2" << endl ;


    // executing area function
	double sphere_area_using_func = area(r) ;
	cout << "Surface area of the sphere (using function) is = "<< sphere_area_using_func << " mm^2" << endl ;
	


	return 0 ;
}




// -------------------------------------------------------------------------------------------