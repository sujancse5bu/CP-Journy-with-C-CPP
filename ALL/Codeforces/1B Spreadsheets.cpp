/*
************************************************
***               OmShantihari               ***
***           Author: Sujan Mridha           ***
***   CSE 5th batch, University of Barishal  ***
************************************************
*/
#include <iostream>
#include <algorithm>
#include<vector>
#define lli long long int
using namespace std;
int main ()
{
    ios :: sync_with_stdio(false);
    cin.tie(0);
    lli i,j,l,v,n,k,c,d,e,f,g,h[10000];
    cin>>n;
    for (i=0;i<n;i++)
    {
        string s;
        cin>>s;
        l=s.size();
        d=0;
        if (s[0]=='R' && s[1]<='9')
        {
            for (j=l-1,k=10;j>=2;k*=10,j--)
            {
                if (s[j]=='C') break;
                d+=((s[j]-48)*k);
            }
            d/=10;
            k=0;
            c=0;
            j=0;
            while (d>0)
            {
                h[j]=d/26;
                d/=26;
            }

        }
    }

    cout<<d<<endl;
/*
1
R1C12345
*/
    return 0;
}
