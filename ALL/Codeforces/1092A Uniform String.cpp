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
    lli i,j,k,l,z,x,c,v,b=0,n,m=0;
    cin>>n;
    while (n--)
    {
        cin>>z>>x;
        b=z/x;
        v=z%x;
        for (i='a'+x-1;i>='a';i--)
        {
            for (j=0;j<b;j++)
            {
                printf ("%c",i);
            }
        }
        while (v--)
        {
            printf ("%c",'a'+x-1);
        }
        printf ("\n");
    }
    return 0;
}
