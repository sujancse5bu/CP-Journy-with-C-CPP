/* OmShantihari; Author: Sujan Mridha, CSE 5th batch, University of Barishal */
#include<bits/stdc++.h>
#define lli long long int
#define pb push_back
#define f(i,a,b) for(i=a;i<=b;i++)
#define r(i,a,b) for(i=a;i>=b;i--)
#define bn begin()
#define en end()
#define pi 3.141592654
#define fast ios :: sync_with_stdio(false); cin.tie(0);
using namespace std;
int main ()
{
    fast;
    lli i,j=0,n,o,m,l,p,k=0,r,w,x=0,y;
    vector <lli> s,t,u;
    cin>>n;
    f(i,0,n-1) 
	{
		cin>>r;
		if (i==0) p=r;
		if (r==2) 
		{
			if (j>0) s.pb(j);
			j=0;
			k++;
		}
		else 
		{
			if (k>0) t.pb(k);
			k=0;
			j++;
		}
	} 
	if (j>0) s.pb(j);
	if (k>0) t.pb(k);
	while (t.size()>s.size()) s.pb(0);
	while (t.size()<s.size()) t.pb(0);
	l=t.size();
	f(i,0,l-1)
	{
		if (p==2 && i!=l-1) 
		{
			w=min(t[i+1],s[i]);
			if (x<w) x=w;
		}
		else if (p==1 && i!=l-1)
		{
			w=min(t[i],s[i+1]);
			if (x<w) x=w;
		}
		w=min(t[i],s[i]);
		if (x<w) x=w;
		
	}
    cout<<x*2<<endl;
    
    
    
    return 0;
}
