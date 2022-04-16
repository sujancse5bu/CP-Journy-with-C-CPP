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
vector <lli> z,zz,z1;
lli nmcnv2 ()
{
    lli b=0,c,i,j,x,p=0,q;
    string s;
    cin>>s;
	q=s.size();
	for (i=0,j=q-1;i<q;i++,j--) b+=(pow(2,j)*(s[i]-48));
	return b;
}
int main ()
{
    fast;
	lli i,k=0,n,m,l=0,f=0,en=0,on=0,om=0,em=0;
	cout<<"Binery to decimal."<<endl;
	cout<<nmcnv2 ()<<endl;
	return 0;
}
