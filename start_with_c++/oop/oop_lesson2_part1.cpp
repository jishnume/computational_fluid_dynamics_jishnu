/*

Purpose of this code -
To demonstrate the need for constructors

*/


#include<iostream>
#include<list>

using namespace std ;

// class is a user defined datatype
class youtube_channel{
public:
	string name ;                   // attribute 1 of the class
	string owner_name ;             // attribute 2 of the class
	int subs_count ;                // attribute 3 of the class
	list<string> video_titles ;     // attribute 4 of the class
};


int main(){

	// ------------- Object first ----------------------

	// Creating the first object of the class youtube_channel
	youtube_channel yt_chanl1 ;
	yt_chanl1.name = "code beauty" ;
	yt_chanl1.owner_name = "seldina" ;
	yt_chanl1.subs_count = 1000 ;
	yt_chanl1.video_titles = {"c++ for beginners","HTML and CSS","object oriented programming"} ;
	
	cout << "Name of the youtube channel : "<< yt_chanl1.name << endl ;
	cout << "Owner of the youtube channel : "<< yt_chanl1.owner_name << endl ;
	cout << "No of subscribers : "<< yt_chanl1.subs_count << endl ;

	cout << "\n------ Video titles (first youtube channel)-----" << endl ;
	//printing out the list variable
	for (string v:yt_chanl1.video_titles){
		cout << v << endl ;
	}

	cout << "\n*********************************" << endl ;
	// ------------- Object second ----------------------
	
	// Creating the first object of the class youtube_channel
	youtube_channel yt_chanl2 ;
	yt_chanl2.name = "code with harry" ;
	yt_chanl2.owner_name = "harry" ;
	yt_chanl2.subs_count = 2000 ;
	yt_chanl2.video_titles = {"python for beginners","Machine learning","C programming"} ;
	
	cout << "Name of the youtube channel : "<< yt_chanl2.name << endl ;
	cout << "Owner of the youtube channel : "<< yt_chanl2.owner_name << endl ;
	cout << "No of subscribers : "<< yt_chanl2.subs_count << endl ;

	cout << "\n------ Video titles (second youtube channel)-----" << endl ;
	//printing out the list variable
	for (string v:yt_chanl2.video_titles){
		cout << v << endl ;
	}


/*
Comment - To create two objects for the same class, we need to write a lot of same lines. 
		  Basically we are repeating our code. This is not a feasible way of writing code
		  A general guideline is to not repeat your code unless and until you really need to.		
*/



	return 0;
}