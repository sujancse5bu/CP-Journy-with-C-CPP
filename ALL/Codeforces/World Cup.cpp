///ShreeHarichad Smrane
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    long long int i,n,c=0,d=1000000000000,k=0,s=0;
    cin>>n;
    long long int a[n],f[n];
    for (i=0;i<n;i++)
    {
        cin>>a[i];
        if (a[i]<=i)
        {
            cout<<i+1;
            return 0;
        }
        if (a[i]<d)
        {
            d=a[i];
            k=i;
        }
        if (i>0)
        {
            if (a[i]==a[i-1]) c++;
        }
    }
    if (c==n-1)
    {
        cout<<1<<endl;
        return 0;
    }
    i=k+1;
    while (i<n)
    {
        if (a[i]<=d)
        {
            k=i;
            break;
        }
        i++;
        d++;
    }
    cout<<k+1;
    return 0;
}
