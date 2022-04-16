#include<bits/stdc++.h>
#define lli long long int
#define pb push_back
using namespace std;
vector <long long int> a,b,c;
int spc (int p)
{
    while (p--) printf (" ");
}
int main ()
{
    lli i,p,j,n,s;
    printf (" Please enter the (n+1)th terms:");
    scanf ("%lld",&n);
    a.pb(1);
    p=n;
    spc (p+1);
    printf ("1\n");
    for (i=1;i<=n;i++)
    {
        spc (p);
        p--;
        if (i%2==1) 
        {
        	if (b.size()) b.clear();
        	b.pb(1);
        	//if (a.size()==1) b.pb(1);
			for (j=0;j<a.size()-1;j++) b.pb(a[j]+a[j+1]);
			if (a.size()) a.clear();
			b.pb(1);
			for (j=0;j<b.size();j++) cout<<b[j]<<' ';
			cout<<endl;
		}
		else 
		{
			if (a.size()) a.clear();
			a.pb(1);
			for (j=0;j<b.size()-1;j++) a.pb(b[j]+b[j+1]);
			a.pb(1);
			if (b.size()) b.clear();
			for (j=0;j<a.size();j++) cout<<a[j]<<' ';
			cout<<endl;
		}
    }
    return 0;
}















