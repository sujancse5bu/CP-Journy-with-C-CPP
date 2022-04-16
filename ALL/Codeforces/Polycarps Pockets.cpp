///ShreeHarichad Smarane
#include <iostream>
using namespace std;
int main ()
{
    int i,n,a[1000],d=0,s[101]={0};
    cin>>n;
    for (i=0;i<n;i++)
    {
        cin>>a[i];
        s[a[i]]++;
    }
    for (i=0;i<101;i++) if (s[i]>d) d=s[i];
    cout<<d;
    return 0;
}
