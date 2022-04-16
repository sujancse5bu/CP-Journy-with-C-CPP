#include<bits/stdc++.h>
#define lli long long int
using namespace std;
lli a,k,l,n,f,r;
void gmtc_pgtn (int x)
{
	cout<<a<<' ';
	x--;
	if (x==0) return ;
	else 
	{
		a*=r;
		gmtc_pgtn (x);
	}
}

int main()
{
	cout<<"Please enter the first number of GP: ";
	cin>>a;
	cout<<"Please enter the Common Ratio of GP: ";
	cin>>r;
	cout<<"Please enter the Number of Item of GP: ";
	cin>>n;
	gmtc_pgtn (n);
	return 0;
}

