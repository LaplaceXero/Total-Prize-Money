#include <iostream>
using namespace std;

int main() {
	
	int testCases = 0;
	int x;  //top 10 prize money
	int y;  //bottom 90 prize money
	
	cin >>testCases;
	
	for(auto i = 0; i < testCases; i++)
	{
	    cin >>x >>y;
	    
	    cout <<((x * 10)+(y * 90)) <<endl;
	}
	return 0;
}
