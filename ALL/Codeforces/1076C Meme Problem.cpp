/* OmShantihari; Author: Sujan Mridha, CSE 5th batch, University of Barishal */
#include <iostream>
#include <stdio.h>
#include <algorithm>
#include<vector>
#include <math.h>
#define lli long long int
#define pb push_back
#define fast ios :: sync_with_stdio(false); cin.tie(0);
//vector <lli> v;

using namespace std;
int main ()
{
    fast;
    lli i,v,n,k;
    double a,b,d,j;
    cin>>n;
    for (i=0;i<n;i++)
    {
        cin>>j;
        a=j*j*1.0+-4*j*1.0;
        if (a<0.000) printf ("N\n");
        else
        {
            printf ("Y ");
            a=sqrt(a);
            a+=j*1.0;
            a/=2*1.0;
            printf ("%.9lf ",a);
            printf ("%.9lf\n",j-a);
        }
    }
    return 0;
}

