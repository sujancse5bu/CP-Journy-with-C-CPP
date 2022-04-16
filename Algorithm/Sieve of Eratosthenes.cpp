#include <iostream>
#include <math.h>
#define lli long long int
using namespace std;
lli prime[300000],nprime;
lli mark[1000000];
void sieve (lli n)
{
    lli i,j,limit=sqrt(n*1.0)+2;
    mark[1]=1;
    for (i=4;i<=n;i+=2) mark[i]=1;
    prime[nprime++]=2;
    for (i=3;i<=n;i+=2)
    {
        if (!mark[i])
        {
            prime[nprime++]=i;
            if (i<=limit) for (j=i*i;j<=n;j+=i*2) mark[j]=1;
        }
    }
    for (i=0;i<nprime-1;i++) cout<<prime[i+1]-prime[i]<<endl;
}
int main ()
{
    lli i;
    cin>>i;
    sieve (i);

    return 0;
}
