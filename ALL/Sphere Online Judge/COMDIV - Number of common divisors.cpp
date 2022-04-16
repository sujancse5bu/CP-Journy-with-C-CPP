/* OmShantihari; Author: Sujan Mridha, CSE 5th batch, University of Barishal */
#include <iostream>
#include <algorithm>
#include <math.h>
#include<vector>
#define lli long long int
#define pb push_back
#define fast ios :: sync_with_stdio(false); cin.tie(0);
//vector <lli> v;
using namespace std;
int main ()
{
    fast;
    lli i,j,v,n,k,c,d,e,m,f,g,h=0;
    cin>>n;
    while (n--)
    {
        c=0;
        cin>>v>>k;
        for (i=1;i*i<=v;i++)
        {
            if (v%i==i && k%i==0) c++;
            else if (v%i==0)
            {
                f=v/i;
                if (k%i==0) c++;
                if (k%f==0) c++;
            }
        }
        cout<<c<<endl;

    }


    return 0;
}

