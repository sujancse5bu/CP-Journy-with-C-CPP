#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
int main()
{
	ofstream o("test.txt");
	
	if (o)
	{
		o.seekp(4);
		o<<"Hello Shanta";
		o.close();
	}
	else cout<<"Can't Be Opened"<<endl;
	
	return 0;
}
