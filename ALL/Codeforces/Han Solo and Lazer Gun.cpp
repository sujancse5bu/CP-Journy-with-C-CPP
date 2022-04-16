///    OmShantihari
///    Author: Sujan Mridha
///    CSE 5th batch, University of Barishal
#include <iostream>
#include <algorithm>
using namespace std;
int main ()
{
    long long int i,l,n,m,x,y,a[10000][2];
    double b[100000];
    cin>>n>>x>>y;
    for (i=0;i<n;i++)
    {
        cin>>a[i][0]>>a[i][1];
        l=a[i][0]-x;
        m=a[i][1]-y;
        if (m==0) b[i]=1;
        else b[i]=l*1.0/m*1.0;
    }
    sort (b,b+n);
    for (i=0,m=1;i<n-1;i++) if (b[i]!=b[i+1]) m++;
    cout<<m<<endl;
    return 0;
}
