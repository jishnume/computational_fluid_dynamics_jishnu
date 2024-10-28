#include<iostream>
#include<fstream>
using namespace std ;

int main()
{
	fstream myfile ;

	// Making changes to the file in the write mode
	myfile.open("sample_file.txt",ios::out);

	if (myfile.is_open())
	{
		myfile <<"This is the first line" << endl ;
		myfile <<"This is the second line" << endl ;
		myfile.close() ;
	}


	// Making changes to the file in the append mode
	myfile.open("sample_file.txt",ios::app) ;    // Enabling append mode

	if (myfile.is_open())
	{
		myfile<< "This is the third line" << endl ;
		myfile.close() ;
	}
	return 0 ;
}