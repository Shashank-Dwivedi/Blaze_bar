#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;
#define DEPTH 6

#define CRAWLER_SEED  "crawler_seed.txt" 

class Crawler {
	private:
		unordered_set<string> crawled_ids;
		
		
	public:
		long hash(string const & s);
		int fetch_page();
		void crawl();
	
};   
