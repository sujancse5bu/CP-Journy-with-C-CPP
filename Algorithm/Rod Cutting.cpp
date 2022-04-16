/* OmShantihari; Author: Sujan Mridha, CSE 5th batch, University of Barishal */
#define fast ios :: sync_with_stdio(false); cin.tie(0);
#define f(i,a,b) for(i=a;i<=b;i++)
#define r(i,a,b) for(i=a;i>=b;i--)
#define lli long long int
#include<bits/stdc++.h>
#define pb push_back
#define rs resize
#define S second
#define F first
#define all(v) v.begin(), v.end()
using namespace std;
vector <lli> a,b,c;
lli n;
lli rod()
{
	int i,j,k,l=LONG_LONG_MIN;
	a.rs(n);
	b.rs(n+1);
	b[0]=0;
	f(i,0,n-1) cin>>a[i];
	f(i,1,n) 
	{
		f(j,0,i-1) if ((a[j]+b[i-j-1])>l) l=a[j]+b[i-j-1];
		b[i]=l;
	}
	return b[n];
}
int main ()
{
    fast;
	//lli i,j,k,n,m,f;
	cin>>n;
	cout<<rod()<<endl;
	return 0;
}



