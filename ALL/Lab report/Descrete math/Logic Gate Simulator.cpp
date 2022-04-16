/* OmShantihari; Author: Sujan Mridha, CSE 5th batch, University of Barishal */
#include<bits/stdc++.h>
#define lli long long int
#define pb push_back
using namespace std;
bool a,b;
void input()
{
	cout<<"    Please input two boolean digit:";
	cin>>a>>b;
}
int main ()
{
	lli i;
    cout << "\n   Logic Gate Simulator."<<endl; 
	input();
	if (a&&b) cout<<"  NAND operation between "<<a<<" and "<<b<<" is "<<0<<endl;
	else cout<<"  NAND operation between "<<a<<" and "<<b<<" is "<<1<<endl;
	if (a||b) cout<<"  NOR operation between "<<a<<" and "<<b<<" is "<<0<<endl;
	else cout<<"  NOR operation between "<<a<<" and "<<b<<" is "<<1<<endl;
	if (a==b) cout<<"  X-OR operation between "<<a<<" and "<<b<<" is "<<0<<endl;
	else cout<<"  X-OR operation between "<<a<<" and "<<b<<" is "<<1<<endl;
    return 0;
}


