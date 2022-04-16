#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	
	/*ifstream in("text.txt");
	if (!in) cout<<"File can't be opened."<<endl;
	else 
	{
		while (in)
		{
			char c;
			in.get(c);
			if (in) cout<<c<<endl;
		}
		in.close();
	}*/
	ofstream out("text1.txt");
	if (!out) cout<<"Can't be opened."<<endl;
	else 
	{
		int i=0;
		char s[]="Sujan Mridha";
		while (s[i])
		{
			out.put(s[i]);
			i++;
		}
	}
	return 0;
}
