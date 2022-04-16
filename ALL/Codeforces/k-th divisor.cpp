///SHS
#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
int main ()
{
    long long int i,n,k,l,d,m,s=0;
    cin>>n>>k;
    m=sqrt (n);
    for (i=1;i<=n;i++)
    {
        if (n%i==0 && n%i==0)
        {
            s++;
            if (s==k)
            {
                cout<<i;
                return 0;
            }
        }
    }
    cout<<"-1";
    return 0;
}
