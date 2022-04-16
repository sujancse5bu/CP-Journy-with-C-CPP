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
lli a[10];
string s;
int main ()
{
    fast;
    lli c,b=0,i,j,n,m,l,k;
    cin>>n>>m;
    cin>>s;
    f(i,0,n-1) a[s[i]-48]++;
    f(i,0,9) if (a[i]!=0) cout<<i<<' '<<a[i]<<endl;
    cout<<endl;
    f(i,0,9) 
    {
    	if (a[i]>=m) 
    	{
    		cout<<0<<endl;
    		cout<<s<<endl;
		}
		else if (b<a[i])
	}
    return 0;
}
