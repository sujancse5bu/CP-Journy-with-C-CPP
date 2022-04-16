///ShreeHarichad Smarane
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
#define lli long long int
int main ()
{
    int i,j,n,b,a[1000],s=0,p[1000];
    cin>>n>>b;
    for (i=0;i<n;i++) cin>>a[i];
    if (n%2==1)
    {
        cout<<0;
        return 0;
    }
    n--;
    for (i=0;i<n;i++)
    {
        if (a[i]%2==0 && a[i+1]%2==1 && a[i]<a[i+1])
        {
            b-=abs(a[i]-a[i+1]);
            if (b>=0) s++;
            else break;
        }
    }
    cout<<s;
    return 0;
}
