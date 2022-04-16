/* OmShantihari; Author: Sujan Mridha, CSE 5th batch, University of Barishal */
#include<bits/stdc++.h>
#define lli long long int
#define pb push_back
#define bn begin()
#define en end()
#define pi 3.141592654
#define f(i,a,b) for(i=a;i<=b;i++)
#define r(i,a,b) for(i=a;i>=b;i--)
#define fast ios :: sync_with_stdio(false); cin.tie(0);
using namespace std;
string s,t;
lli n,m,v[1000][1000];
lli lcs ()
{
	int i,j;
    f(i,0,m) f(j,0,n)
    {
    	if (i==0 || j==0) v[i][j]=0;
    	else if (s[i-1]==t[j-1]) v[i][j]=v[i-1][j-1]+1;
    	else v[i][j]=max(v[i][j-1],v[i-1][j]);
	}
    cout<<v[m][n]<<endl;
    vector <char> xx;
    for(i=m,j=n;i>0 && j>0;)
    {
    	if (s[i-1]==t[j-1])
    	{
    		xx.pb(s[i-1]);
    		i--;
    		j--;
		}
		else if (v[i-1][j]>v[i][j-1]) i--;
		else j--;
	}
	reverse(xx.begin(),xx.end());
	f(i,0,xx.size()-1) cout<<xx[i];
	cout<<endl;
}
int main ()
{
    fast;
    cin>>s>>t;
    m=s.size();
    n=t.size();
	lcs ();
    return 0;
}

