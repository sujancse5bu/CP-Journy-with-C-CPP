///Shree Harichad Smarane
#include <iostream>
#include <algorithm>
using namespace std;
int main ()
{
    int i,j,n,k,c,v,w,a[100000][3],b[100000];
    cin>>n>>c;
    for (i=0;i<n;i++)
    {
        cin>>a[i][0];
        a[i][1]=i+1;
    }
    for (i=0;i<n-1;i++)
    {
        if (a[i][0]>a[i+1][0])
        {
            k=a[i][0];
            a[i][0]=a[i+1][0];
            a[i+1][0]=k;
            k=a[i][1];
            a[i][1]=a[i+1][1];
            a[i+1][1]=k;
            i=-1;
        }
    }
    for (i=0,j=0,v=0;i<n;i++)
    {
        v+=a[i][0];
        if (v<=c)
        {
            b[j]=a[i][1];
            j++;
        }
        else break;
    }
    sort (b,b+j);
    cout<<j<<endl;
    for (i=0;i<j;i++) cout<<b[i]<<" ";
    return 0;
}
