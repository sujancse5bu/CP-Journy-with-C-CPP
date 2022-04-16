
/* OmShantihari; Author: Sujan Mridha, CSE 5th batch, University of Barishal */
#include<bits/stdc++.h>
#define lli long long int
#define pb push_back
#define fast ios :: sync_with_stdio(false); cin.tie(0);
using namespace std;
lli a[1000006];
lli binarySearch(lli x,lli h)
{
    lli m,i=-1,l=0;
    while(l<=h)
    {
        m=(l+h)/2;
        if (x==a[m]) 
        {
        	
        	return m;
		}
        else if (x<a[m]) h=m-1;
        else l=m+1;
    }
    return -1; //value not found
}
int main ()
{
    fast;
    lli i,j,k,l,z,x,c,v,b=0,n,m=0;
    //cin>>n;
    //for (i=0;i<n;i++) cin>>a[i];
    //cin>>x;
    //cout<<binarySearch(x,n-1)<<endl;
    return 0;
}/*
6
1 3 5 7 9 11
4
*/
