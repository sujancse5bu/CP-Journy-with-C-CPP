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
		in.getline(s,100,'.'); 
		cout<<s<<endl;
		in.close();
	}
	return 0;
}
