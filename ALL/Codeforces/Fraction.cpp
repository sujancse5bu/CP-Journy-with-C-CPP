///ShreeHarichad Smarne
#include <iostream>
using namespace std;
int main ()
{
    long int i,k,l,j,n,m,d;
    cin>>n;
    if (n%2==1)
    {
        m=n/2;
        d=m+1;
        cout<<m<<" "<<d<<endl;
        return 0;
    }
    m=n/2-1;
    d=n/2+1;
    if (m==1)
    {
        cout<<m<<" "<<d<<endl;
        return 0;
    }
    while (1)
    {
        i=2;
        j=0;
        while (i<=m)
        {
            if (m%i==0 && d%i==0)
            {
                j=2;
                m--;
                d++;
                break;
            }
            i++;
        }
        if (j==0)
        {
            cout<<m<<" "<<d<<endl;
            return 0;
        }
    }
}
