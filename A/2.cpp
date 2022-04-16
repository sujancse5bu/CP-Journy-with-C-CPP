#include <bits/stdc++.h>
#define lli long long int
#define pb push_back
#define rs resize
#define S second
#define F first
#define all(v) v.begin(), v.end()
#define f(i,a,b) for(i=a;i<=b;i++)
#define r(i,a,b) for(i=a;i>=b;i--)
#define cn(a,n) for(i=0;i<n;i++) cin>>a[i];
#define ct(a,n) for(i=0;i<n;i++) cout<<a[i]<<' '; cout<<endl;
#define cc(x) cout<<x<<endl;
#define fast ios :: sync_with_stdio(false); cin.tie(0);
using namespace std;
vector<lli> a,b,c;
vector< pair<lli,lli> > q;
int main ()
{
    fast;
	lli i,j=0,k,l,m=0,n,x=0,y,p,r,d,e,f,g,h;
	string s,t;
	cin>>y;
	for(j=1;j<=y;j++)
	{
		cin>>n>>d;
		vector<lli> a[n+1];
		lli aa[n+1]={0};
		for (i=0;i<d;i++)
		{
			cin>>k;
			if (k==0) 
			{
				cin>>x>>y;
				a[x].pb(y);
				a[y].pb(x);
			}
			if (k==1)
			{
				
			}
		}
		
	}
	return 0;
}

