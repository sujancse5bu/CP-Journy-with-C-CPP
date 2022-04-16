///ShreeHarichad Smarane
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int main ()
{
    int i,l,n,t;
    cin>>n;
    int f[n];
    char x[1000][1001];
    for (i=0;i<n;i++)
    {
        cin>>x[i];
        l=strlen (x[i]);
        int j,s=0,d,ar[26]={0};
        for (j=0;j<l;j++)
        {
            d=x[i][j];
            ar[d-96]=d;
        }
        for (j=0;j<26;j++) s+=ar[j];
        f[i]=s;
    }
    sort (f,f+n);
    i=0;
    n--;
    t=1;
    while (i<n)
    {
        if (f[i]!=f[i+1]) t++;
        i++;
    }
    cout<<t;
    return 0;
}
