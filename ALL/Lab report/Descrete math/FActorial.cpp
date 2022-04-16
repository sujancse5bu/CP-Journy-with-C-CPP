#include<bits/stdc++.h>
#define lli long long int
using namespace std;
lli fact (lli n)
{
	if (n==1) return n;
	else return n*fact(n-1);
}
int main()
{
	lli n,f;
	cout<<"Please enter the number: ";
	cin>>n;
	cout<<fact(n)<<endl;
	return 0;
}
