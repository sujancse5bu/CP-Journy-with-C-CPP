///SHS
#include <iostream>
using namespace std;
int main ()
{
    long long int i,j,c,v,n,b,m=0,max,min,s=0,a[100000];
    max=-1000000000000000;
    min=10000000000000000;
    cin>>n;
    for (i=0;i<n;i++)
    {
        cin>>a[i];
        if (a[i]<min) min=a[i];
        if (a[i]>max) max=a[i];
    }
    for (i=0;i<n;i++) if (a[i]>min && a[i]<max) s++;
    cout<<s<<endl;
    return 0;
}
