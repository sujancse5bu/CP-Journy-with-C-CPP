///Shree Harichad Smarane
#include <iostream>
using namespace std;
int main ()
{
    int a[120],k,n,i,t,g,s=0;
    cin>>n>>k;
    for (i=0;i<n;i++) cin>>a[i];
    for (i=0;i<n;i++)
    {
        if (a[i]<=k) s++;
        else break;
    }
    t=i;
    i=n-t;
    while (i>0)
    {
        if (a[n-1]<=k) s++;
        else break;
        n--;
    }
    cout<<s<<endl;
    return 0;
}
