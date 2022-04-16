/* OmShantihari; Author: Sujan Mridha, CSE 5th batch, University of Barishal */
#include<bits/stdc++.h>
#define lli long long int
#define pb push_back
#define fast ios :: sync_with_stdio(false); cin.tie(0);
using namespace std;
//vector <int> v,t;lli
int main ()
{
	lli i,j,k,l,m,n,a,b,c,x,y,z;
	char s[100006];
	scanf("%lld%s",&l,&s);
	for (i=0,x=0,y=0,z=0;i<l;i++)
	{
		if (s[i]=='0') x++;
		if (s[i]=='1') y++;
		if (s[i]=='2') z++;
	}
	m=l/3;
	if (x==y && y==z) printf ("%s\n",s);
	else
	{
		a=m-x;
		b=m-y;
		c=m-z;
		if (a>0)
		{
			//for (
		}
	}

	return 0;
}
