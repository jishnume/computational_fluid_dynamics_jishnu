/*

Purpose of this code -
To understand absolute basics of classes and objects in c++

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
	// yt_chanl is an object (instance) of the class "youtube_channel"
	youtube_channel yt_chanl ;
	yt_chanl.name = "code beauty" ;
	yt_chanl.owner_name = "seldina" ;
	yt_chanl.subs_count = 1000 ;
	yt_chanl.video_titles = {"c++ for beginners","HTML and CSS","object oriented programming"} ;
	
	cout << "Name of the youtube channel : "<< yt_chanl.name << endl ;
	cout << "Owner of the youtube channel : "<< yt_chanl.owner_name << endl ;
	cout << "No of subscribers : "<< yt_chanl.subs_count << endl ;

	cout << "\n------ Video titles -----" << endl ;
	//printing out the list variable
	for (string v:yt_chanl.video_titles){
		cout << v << endl ;
	}
	return 0;
}