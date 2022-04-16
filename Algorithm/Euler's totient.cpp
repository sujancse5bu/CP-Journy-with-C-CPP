#include <iostream>
#include <vector>
#include <math.h>
#define lli long long int
#define pb push_back
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
void phi (int n)
{
    int r=n;
    for (int i=0;i<v.size();i++) cout<<i<<' '<<v[i]<<endl;
}
int main ()
{
    lli i;
    cin>>i;
    sieve (i);
    phi(i);
    return 0;
}


