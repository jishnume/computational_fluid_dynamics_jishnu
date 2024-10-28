#include<iostream>
#include<fstream>
#include<string>

using namespace std ;

int main()
{
	fstream myfile ;

	//opening of the file
	myfile.open("sample_file.txt",ios::in) ;   // this is read mode

	if (myfile.is_open())
	{
		string line ;
		while(getline(myfile,line))
		{
			cout << line << endl ;
		}	

	myfile.close() ;   //closing the file
	
	}
}