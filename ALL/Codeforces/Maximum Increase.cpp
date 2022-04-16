///ShreeHarichad SMrane
#include <iostream>
using namespace std;
int main ()
{
    int i,n,f,d;
    cin>>n;
    int a[n];
    for (i=0;i<n;i++) cin>>a[i];
    f=1;i=1;d=1;
    while (i<n)
    {
        if (a[i-1]<a[i])
        {
            f++;
            if (f>d) d=f;
        }
        else f=1;
        i++;
    }
    cout<<d;
    return 0;
}
