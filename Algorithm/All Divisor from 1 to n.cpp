#include <iostream>
#include <math.h>
#include <vector>
#define lli long long int
#define pb push_back
using namespace std;
vector<int> d[1000000];
void dvsr (lli n)
{
    lli i,j;
    for (i=1;i<=n;i++) for (j=i;j<=n;j+=i) d[j].pb(i);
}
int main ()
{
    lli i,m,j,k=0;
    cin>>m;
    dvsr (m);
    for (i=1;i<=m;i++)
    {
        cout<<i<<endl;
        for (j=0;j<d[i].size();j++) cout<<d[i][j]<<' ';
        cout<<endl;
    }
    return 0;
}


