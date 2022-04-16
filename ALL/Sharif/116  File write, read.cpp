#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
struct student{
	char name[];
	int sid;
};
int main()
{
	struct student a,b;
	strcpy(a.name,"Sujan");
	
	ofstream out("info.txt");
	if (!out) cout<<"File can't be opened"<<endl;
	else 
	{
		out.write((char *)&a, sizeof(struct student));
		
		
		out.close();
	}
	return 0;
}
