///    10^6 er beshi input neoya jabe na.
#include <iostream>
#include <math.h>
#include <vector>
#define lli long long int
#define pb push_back
using namespace std;
vector <lli> p; ///have to load primes once at the beginning
void sieve (lli n)
{
    n=sqrt(n)+2;
    lli i,j,mark[n+1]={0},limit=sqrt(n)+1;
    mark[1]=1;
    for (i=4;i<=n;i+=2) mark[i]=1;
    p.pb(2);
    for (i=3;i<=n;i+=2)
    {
        if (!mark[i]) /// mark[i]==0
        {
            p.pb(i);
            if (i<=limit) for (j=i*i;j<=n;j+=i*2) mark[j]=1;
        }
    }
    //for (i=0;i<p.size();i++) cout<<p[i]<<endl;
}
lli dvsrcnt (lli n)
{
    sieve (n);
    lli d=1;
    for (lli i=0;i<p.size();i++)
    {
        if (n%p[i]==0)
        {
            int c=1;
            while (n%p[i]==0)
            {
                n/=p[i];
                c++;
            }
            d*=c;
            //cout<<p[i]<<' '<<c<<' '<<d<<endl;
        }
    }
    return d;
}
int main ()
{
    lli i,m;
    cin>>i;
    m=dvsrcnt(i);
    cout<<m<<endl;
    return 0;
}

