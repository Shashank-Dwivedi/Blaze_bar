#include "crawler.hpp"
#include <fstream>
using namespace std;

	long hash(string const & s)
     {
	
     }
     
    int fetch_page(string const &url,string const & )
     {
     	
	 }
	 
	 vector<string> get_next(string const & text){
	 	vector<string> v;
	 	while(){
		 // search for <a href=" and "; 
		
		 string s;
	 	v.push_back(s);
	 }
		 return v;
	 }
	 
	void crawl()
	 {
		queue<string> urls;
	 	ifstream fin;
	    fin.open("cs1",ios::in);
	     string url;
	     int limit;
		 while(fin>>url)
		 {
		 	urls.push(url);
		 }
		 
		 unordered_set<string> visited;
		 
		 while(!(urls.empty()) && limit<DEPTH)
		 {
		 	string s= urls.front();
		 	fetch_page(s,);
		 	visited.insert(s);
		 	urls.pop();
		 	
		 	// get next links
		 	vector<string> links = get_next();
		 	if(visited.find(link) == false){
		 		urls.push(link);
			 }else{
			 	// nothing
			 }
		 	limit++;
		 }
	 }
	  void find_link(string &a)
	  {
	  		
	  }
    
    


