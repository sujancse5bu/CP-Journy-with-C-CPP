///SHS
#include <iostream>
using namespace std;
int main ()
{
    int i,k,s,m,n,d;
    cin>>k;
    for (i=0,s=19;i<k;s++)
    {
        m=0;
        n=s;
        while (n>0)
        {
            d=n%10;
            n/=10;
            m+=d;
        }
        if (m==10) i++;
    }
    cout<<--s<<endl;
    return 0;
}
