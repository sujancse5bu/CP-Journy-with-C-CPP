#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	
	ifstream in("text.txt");
	if (!in) cout<<"File can't be opened."<<endl;
	else 
	{
		string s;
		in>>s;
		cout<<s<<endl;
		in.close();
	}
	return 0;
}
