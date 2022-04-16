#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
int main()
{
	ifstream in;
	in.open("test.txt");
	if (!in) cout<<"File can't be opened"<<endl;
	else 
	{
		char s[2323];
		while (!in.eof())
		{
			in.getline(s,100,'\n'); 
			cout<<s<<endl;
		}
		in.close();
	}
	return 0;
}
