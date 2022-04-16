/* OmShantihari; Author: Sujan Mridha, CSE 5th batch, University of Barishal */
#include<bits/stdc++.h>
#define lli long long int
#define pb push_back
#define fast ios :: sync_with_stdio(false); cin.tie(0);

using namespace std;
vector <lli> v;
void sieve (lli n)
{
    lli i,j,mark[n+1]={0},limit=sqrt(n*1.0)+2;
    mark[1]=1;
    for (i=4;i<=n;i+=2) mark[i]=1;
    v.pb (2);
    for (i=3;i<=n;i+=2){if (!mark[i]){v.pb (i);if (i<=limit) for (j=i*i;j<=n;j+=i*2) mark[j]=1;}}
}

int main ()
{
    fast;
    lli i,j,v,n,k,c,d,e,m,f[100000],g,h[100000];
    for (i=1,v=0;i*i<=1000000;i++,v++) h[v]=i*i;
    cin>>n;
    if (n<4)
    {
        cout<<n<<' '<<0<<endl;
        return 0;
    }
    sieve (n);
    k=0;
    while (sqrt(n)==n/sqrt(n))
    {
        n=sqrt(n);
        k++;
    }
    d=n;
    j=q.size();
    for (i=1,d=0;i<j-1;i++)
    {
        n=d*q[i];
        m=0;
        while (sqrt(n)==n/sqrt(n))
        {
            n=sqrt(n);
            m++;
        }
        f[d]=n;
        h[d]=m;
        d++;
    }
    for (i=0,v=1000000000000,c=0;i<d;i++)
    {

        if (f[i]<v)
        {
            v=f[i];
            c=h[i];
        }
    }
    if (n==d)  cout<<n<<' '<<k<<endl;
    else cout<<v<<' '<<c+k<<endl;
    return 0;
}

