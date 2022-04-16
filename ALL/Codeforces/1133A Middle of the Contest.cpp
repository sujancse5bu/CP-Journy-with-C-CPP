/* OmShantihari; Author: Sujan Mridha, CSE 5th batch, University of Barishal */
#include<bits/stdc++.h>
#define lli long long int
#define pb push_back
#define f(i,a,b) for(i=a;i<=b;i++)
#define r(i,a,b) for(i=a;i>=b;i--)
#define fast ios :: sync_with_stdio(false); cin.tie(0);
using namespace std;
vector <lli> v;
int main ()
{
    fast;
    lli i,j=0,n=0,o=0,h,m,l,p,w,x,y,h1,m1,h2,m2;
    char z;
    cin>>h1>>z>>m1;
    cin>>h2>>z>>m2;
    if (m1<=m2) 
	{
		m=m2-m1;
		h=h2-h1;
		m+=(h*60);
		m/=2;
		h1+=(m/60);
		m%=60;
		m1+=m;
		if (m1>=60)
		{
			h1+=(m1/60);
			m1%=60;
		}
	}
    else 
    {
    	m2+=60;
    	h2--;
    	m=m2-m1;
		h=h2-h1;
		m+=(h*60);
		m/=2;
		h1+=(m/60);
		m%=60;
		m1+=m;
		if (m1>=60)
		{
			h1+=(m1/60);
			m1%=60;
		}
	}
	if (h1<10) cout<<0<<h1;
	else cout<<h1;
	cout<<':';
	if (m1<10) cout<<0<<m1<<endl;
	else cout<<m1<<endl;
    return 0;
}
