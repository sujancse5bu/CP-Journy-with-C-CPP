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
    lli i,j[100000],v,n,k[100000]={0},c,d,e,m,f,g,h=0;
    cin>>c>>d;
    g=c+d;
    for (i=1;;i++)
    {
        v=((i*(i+1))/2);
        if (g<v)
        {
            i--;
            break;
        }
        else if (g==v) break;
    }
    h=i;
    n=0;
    while (c>0 && h>0)
    {
        if (c==h)
        {
            j[n]=h;
            n++;
            break;
        }
        else if (c<h)
        {
            j[n]=c;
            n++;
            break;
        }
        else
        {
            j[n]=h;
            n++;
            c-=h;
            h--;
        }
    }
    cout<<n<<endl;
    for (f=n-1;f>=0;f--)
    {
        cout<<j[f]<<' ';
        k[j[f]]=3;
    }
    cout<<endl;
    cout<<i-n<<endl;
    for (h=1;h<=i;h++) if (k[h]==0) cout<<h<<' ';
    cout<<endl;







    return 0;
}
