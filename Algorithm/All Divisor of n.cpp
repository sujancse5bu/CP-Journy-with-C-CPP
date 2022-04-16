#include <iostream>
#include <algorithm>
#include <math.h>
#include <vector>
#define lli long long int
#define pb push_back
using namespace std;
vector<int> q;
void dvsrn (lli n)
{
    lli i,j;
    j=sqrt(n);
    for (i=1;i<=j;i++)
    {
        if (n%i==0)
        {
            q.pb(i);
            if (n/i!=i) q.pb(n/i);
        }
    }
    j=q.size();
    sort (q.begin(),q.end());
}
int main ()
{
    lli i,m,j,k=0;
    cin>>m;
    dvsrn (m);
    for (i=0;i<q.size();i++) cout<<q[i]<<' ';
    cout<<endl;
    return 0;
}
