///ShreeHarichad Smarne
#include <iostream>
#include <algorithm>
using namespace std;
int main ()
{
    long int i,l,k,j,n,m,d,f,a[100][100],b[200];
    string x,y,s[100];
    cin>>n>>k;
    for (i=0;i<n;i++)
    {
        cin>>s[i];
        b[i]=s[i].size();
    }
    cin>>x;
    m=x.size();
    for (i=0,d=0,f=0;i<n;i++)
    {
        if (b[i]<m) d++;
        else if (b[i]>m) f++;
    }
    f=n-f;
    cout<<d<<f<<endl;
    i=f;
    f/=k;
    i-=f;
    i=i+f*5;
    j=d+1;
    d/=k;
    j-=d;
    j+=d*5;
    cout<<j<<" "<<i<<endl;
    return 0;
}
