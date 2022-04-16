/* OmShantihari; Author: Sujan Mridha, CSE 5th batch, University of Barishal */
#include<bits/stdc++.h>
#define lli long long int
#define pb push_back
#define fast ios :: sync_with_stdio(false); cin.tie(0);
//vector <lli> v;

using namespace std;
int main ()
{
    fast;
    lli v,n,f=0,k=0,c=0,g=0,d=0,m=-1,a[100004];
    string s;
    cin>>n>>s;
    for (int i=0;i<n;i++)
    {
        if (s[i]=='S') c++;
        if (s[i]=='G') g++;
    }
    for (int i=0,j=0;i<n;i++)
    {
        if (s[i]=='G') k++;
        else
        {
            if (d<k) d=k;
            k=0;
            if (f==1)
            {
                a[j]=m+d;
            }
        }
        if (i<n-2)
        {
            if (s[i]=='G' && s[i+1]=='S' && s[i+2]=='G')
            {
                m=k;
                f=1;
            }
        }
    }
    return 0;
}
