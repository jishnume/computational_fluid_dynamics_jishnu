/* problem statement -

I have a sphere lying in a 3D coordinate space. Here I have a few points defined as follows -
1. point A - this is the origin of the sphere.
2. point B - this is a point on the surface of the sphere
3. Point O - this is the origin.

Task1 - To find the radius of the sphere
Task2 - To find out the distance of the sphere from the origin of the coordinate space

coordinates of A = (2,3,5)
coordinates of B = (1,5,6)
coordinates of O = (0,0,0)

*/
#include<iostream>
#include<cmath>

using namespace std ;

// defining a function to calculate distance between two points


// -------------- Wrong version 1 --------------------
/*
double distance_func(double p2,double p1)
{
	double del_x = p2[1]-p1[1] ;
	double del_y = p2[2]-p1[2] ;
	double del_z = p2[3]-p1[3] ;

	double dist = pow(del_x,2)+pow(del_y,2)+pow(del_z,2) ;
	dist = pow(dist,0.5) ;
	return dist ;
}
*/

// -------------- Wrong version 2 --------------------
/*
double distance_func(double p2[],double p1[])
{
	double del_x = p2[1]-p1[1] ;
	double del_y = p2[2]-p1[2] ;
	double del_z = p2[3]-p1[3] ;

	double dist = pow(del_x,2)+pow(del_y,2)+pow(del_z,2) ;
	dist = pow(dist,0.5) ;
	return dist ;
}
*/


// -------------- Wrong version 3 --------------------
/*

double distance_func(double p2[3],double p1[3])
{
	double del_x = p2[1]-p1[1] ;
	double del_y = p2[2]-p1[2] ;
	double del_z = p2[3]-p1[3] ;

	double dist = pow(del_x,2)+pow(del_y,2)+pow(del_z,2) ;
	dist = pow(dist,0.5) ;
	return dist ;
}
*/



double distance_func(double p2[3],double p1[3])
{
	double del_x = p2[0]-p1[0] ;
	double del_y = p2[1]-p1[1] ;
	double del_z = p2[2]-p1[2] ;

	double dist = pow(del_x,2)+pow(del_y,2)+pow(del_z,2) ;
	dist = pow(dist,0.5) ;
	return dist ;
}

int main()
{
	// definition type 1 - defining an array by initializing the array without explicitely defining the size
	double A[] = {2,3,5} ;    // first array
	double B[] = {1,5,6} ;    // second array
	double O[] = {0,0,0} ;

	// definition type 1 - defining an array by initializing the array without explicitely defining the size
	/*
	double A[3] ; 
	A = {2,3,5} ;    // first array
	double B[3] ; 
	B = {1,5,6} ;    // second array
	*/

	double radius_of_sphere = distance_func(A,B) ;
	cout <<"Radius of the sphere is = " << radius_of_sphere << " units" << endl ;
	double distance_of_sphere = distance_func(A,O) ;
	cout << "Distance of the sphere from the origin = "<< distance_of_sphere << " units" << endl ;

	return 0 ;
}