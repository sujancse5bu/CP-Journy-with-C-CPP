#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
int main()
{
	ofstream o;
	ifstream i;
	
	i.open("test.txt");
	o.open("test.txt");
	
	o<<"Hello Dipanwita";
	
	o.flush();
	
	char s[2333];
	i.getline(s,20);
	cout<<s<<endl;
	
	
	
	
	o.close();
	i.close();
	
	
	return 0;
}
