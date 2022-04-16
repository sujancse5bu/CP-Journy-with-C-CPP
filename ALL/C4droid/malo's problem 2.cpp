#include <iostream>
using namespace std;
int main ()
{
    int i,n,m,o,d[2000];
    cin>>n;
    for (i=0;i<n;i++) cin>>d[i];
    for (i=0;i<n-1;i++)
    {
        if (d[i]<d[i+1])
        {
            m=d[i];
            d[i]=d[i+1];
            d[i+1]=m;
            i=0;
        }
    }
}
