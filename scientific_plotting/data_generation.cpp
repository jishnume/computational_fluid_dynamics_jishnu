#include<iostream>
#include<fstream>
#include<string>
#include<cmath>

using namespace std ;

int main()
{
	double x[100],y1[100],y2[100] ;
	int n = 100 ;
	double pi =22.0/7 ;

	// creating input data vector
	x[0]  = 0 ;
	for (int k=1;k<n+1;k++)
	{
		x[k] =  x[k-1]+2*pi/n;
	}


	// creating data
	for(int i=0;i<n;i++)
	{
		y1[i] = sin(x[i]) ;
		y2[i] = cos(x[i]) ;
	}

	// writing the data to a file
	fstream myfile ;

	myfile.open("sinusoidal_data_file.csv",ios::out) ;

	if (myfile.is_open())
	{
		for (int j=0;j<n;j++)
		{
			myfile << x[j] << ","<< y1[j] << "," << y2[j] << endl ;
		}

		myfile.close() ;
	}

	return 0 ;
}