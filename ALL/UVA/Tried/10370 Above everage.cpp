/* OmShantihari; Author: Sujan Mridha, CSE 5th batch, University of Barishal */
#include<bits/stdc++.h>
#define lli long long int
#define pb push_back
#define fast ios :: sync_with_stdio(false); cin.tie(0);

using namespace std;
int main ()
{
    fast;
    lli v,n,f=0,k=0,a[10004];
    double c=0,g=0,d=0,m=-1;
    cin>>n;
    for (int i=0;i<n;i++)
    {
         cin>>v;
         int j;
         c=0;
         for (j=0;j<v;j++)
         {
             cin>>a[j];
             c+=a[j];
         }
         c/=v*1.0;
         f=0;
         for (k=0;k<j;k++) if (a[k]>c) f++;
         c=(100.0*f)/v*1.0;
         printf ("%.3lf%%\n",c);
    }

    return 0;
}

