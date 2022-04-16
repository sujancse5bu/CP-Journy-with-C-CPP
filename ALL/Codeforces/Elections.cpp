#include <iostream>
using namespace std;
typedef long long int lli;
int main ()
{
    lli i,j,d,f,n,m,x,y,z;
    cin>>n>>m;
    lli a[n],b[n]={0};
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++) cin>>a[j];
        d=a[0];
        f=0;
        j=1;
        while (j<n)
        {
            if (d<a[j])
            {
                d=a[j];
                f=j;
            }
            j++;
        }
        b[f]++;
    }
    d=b[0];
    j=1;
    f=0;
    while (j<n)
    {
        if (d<b[j])
        {
            f=j;
            d=b[j];
        }
        j++;
    }
    cout<<f+1<<endl;
    return 0;
}
