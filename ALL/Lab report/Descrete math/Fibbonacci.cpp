#include<bits/stdc++.h>
#define lli long long int
using namespace std;
lli k,l,n,f;
void fbbncc (int n)
{
	if (n==0)  return ;
	else 
	{
		n--;
		f=k+l;
		k=l;
		l=f;
		cout<<f<<' ';
		fbbncc (n);
	}
}

int main()
{
	cout<<"Please enter the number of turms: ";
	cin>>n;
	k=0;
	l=1;
	if (n==1) cout<<"0"<<endl;
	else cout<<0<<' '<<1<<' ';
	if (n>2) 
	{
		n-=2;
		fbbncc (n);
	}
}

