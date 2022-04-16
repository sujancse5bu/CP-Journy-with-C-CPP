///ShreeHarichad Smarane
#include <iostream>
using namespace std;
int main ()
{
    int k,n,s,p;
    cin>>k>>n>>s>>p;
    int i,m,d,a=0;
    for (i=0;i<k;i++)
    {
        m=n/s;
        if (n%s>0) m++;
        cout<<m<<" ";
    }

    return 0;
}
