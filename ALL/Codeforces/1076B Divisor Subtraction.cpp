/* OmShantihari; Author: Sujan Mridha, CSE 5th batch, University of Barishal */
#include <iostream>
#include <algorithm>
#include <math.h>
#include<vector>
#define lli long long int
#define pb push_back
using namespace std;
//#define fast ios :: sync_with_stdio(false); cin.tie(0);
vector <lli> v;
void sieve (lli n)
{
    n=sqrt(n)+2;
    lli i,j,mark[n+1]={0},limit=sqrt(n*1.0)+2;
    mark[1]=1;
    for (i=4;i<=n;i+=2) mark[i]=1;
    v.pb (2);
    for (i=3;i<=n;i+=2){if (!mark[i]){v.pb (i);if (i<=limit) for (j=i*i;j<=n;j+=i*2) mark[j]=1;}}
}
int main ()
{
    lli i,j,n,k=0,c,d,e,m,f,g;
    cin>>n;
    sieve (n);
    j=v.size();
    for (i=0;i<j;i++)
    {
        if (n%v[i]==0)
        {
            n-=v[i];
            k++;
            if (n%2==0 && n>0)
            {
                k+=(n/2);
                cout<<k<<endl;
                return 0;
            }
            break;
        }
        //cout<<v[i]<<endl;
    }
    if (k==0) cout<<1<<endl;
    else cout<<k<<endl;
    return 0;
}
