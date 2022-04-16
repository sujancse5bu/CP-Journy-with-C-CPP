/*
************************************************
***               OmShantihari               ***
***           Author: Sujan Mridha           ***
***   CSE 5th batch, University of Barishal  ***
************************************************
*/
#include <iostream>
#include <algorithm>
#include<math.h>
#define lli long long int
using namespace std;
int main ()
{
    lli i,g,f,d,j=0,n,k[9],c[9];
    cin>>n;
    for (i=0;i<n;i++) cin>>k[i]>>c[i];
    for (i=0,d=2;i<n;i++,d=2)
    {
        if (c[i]>6)
        {
            f=sqrt(c[i]);
            for (j=2,d=0;j<=f;j++)
            {
                if (c[i]%j==0)
                {
                    d=4;
                    break;
                }
            }
        }
        if (k[i]-c[i]==1 && d==2) cout<<"YES"<<endl;
        else if (k[i]-c[i]==1 && d==4) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}

