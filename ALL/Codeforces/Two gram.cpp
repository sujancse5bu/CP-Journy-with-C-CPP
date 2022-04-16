/* OmShantihari; Author: Sujan Mridha, CSE 5th batch, University of Barishal */
#include<bits/stdc++.h>
#define lli long long int
#define pb push_back
#define fast ios :: sync_with_stdio(false); cin.tie(0);

using namespace std;
int main ()
{
    fast;
    lli i,v,n,f,k=0,c=0,d=0,m,a[91][91]={0};
    string s;
    cin>>n>>s;
    for (i=0;i<n-1;i++) a[s[i]][s[i+1]]++;
    for (i=0;i<n-1;i++)
    {
        if (a[s[i]][s[i+1]]>k)
        {
            k=a[s[i]][s[i+1]];
            c=s[i];
            d=s[i+1];
        }
    }
    printf ("%c",c);
    printf ("%c\n",d);
    return 0;
}
