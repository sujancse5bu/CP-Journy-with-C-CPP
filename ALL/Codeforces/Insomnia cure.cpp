///SMS
#include <iostream>
using namespace std;
int main ()
{
    int i,s=0,k,l,m,n,x,a[100000];
    cin>>k>>l>>m>>n>>x;
    for (i=0;i<x;i++) a[i]=i+1;
    for (i=0;i<x;i++)
    {
        if (a[i]!=0)
        {
            if (a[i]%k==0 || a[i]%l==0 || a[i]%m==0 || a[i]%n==0)
            {
                s++;
                a[i]=0;
            }
        }
    }
    cout<<s;
    return 0;
}
