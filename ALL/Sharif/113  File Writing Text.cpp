#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	
	ofstream out("text.txt");
	if (!out) cout<<"File can't be opened."<<endl;
	else 
	{
		out<<"Sujan Mridha";
		out.close();
	}
	
	
	return 0;
}
