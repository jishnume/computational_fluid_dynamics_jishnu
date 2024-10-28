#include<iostream>
#include<cmath>
#include<fstream>

using namespace std;

int main()
{
	fstream myfile ;  //fstream is a data type inside the "fstream" header file
	
	//opening a .txt file
	//syntax : ,myfile.open("name_of_file.txt",ios::mode)
	//mode - out

	myfile.open("sample_file.txt",ios::out) ;   // out - write mode

	if (myfile.is_open())
	{
		myfile <<"Hello, I am writing a file"<< endl ;
		myfile<<"This is the second line"<< endl ;

		myfile.close();
	}

	// opening the file
	myfile.open("sample_file.txt",ios::out) ;
	
	// writing for the second time
	if (myfile.is_open())
	{
		myfile << "This is the 3rd line of the file" << endl ;
		myfile.close();
	}

	// this will overwrite the previously made change
	return 0 ;
}