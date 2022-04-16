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
    long long int i,j,v,n,f,k,c,d,e=0,g,h=0;
    scanf ("%lld %lld",&j,&v);
    long long int m[j+1];
    m[0]=0;
    for (i=1;i<=j;i++)
    {
        scanf ("%lld ",&f);
        m[i]=m[i-1]+f;
    }
    while (v--)
    {
        scanf ("%lld ",&d);
        if (d==1)
        {
            scanf ("%lld ",&k);
            e+=k;
        }
        else if (d==2)
        {
            scanf ("%lld %lld",&k,&c);
            g=m[c]-m[k-1];
            d=c-k+1;
            g+=(d*e);
            printf ("%lld\n",g);
        }
    }
    return 0;
}



