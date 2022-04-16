///    OmShantihari
///    Author: Sujan Mridha
///    CSE 5th batch, University of Barishal
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main ()
{
    int i,j,k,l,m=0,n,b[4],a[10000][2];
    cin>>n;
    for (i=0;i<n;i++)
    {
        cin>>b[0]>>b[1]>>b[2]>>b[3];
        a[i][0]=i+1;
        a[i][1]=b[0]+b[1]+b[2]+b[3];
    }
    //for (i=0;i<n;i++) cout<<a[i][1]<<endl;
    for (i=0;i<n-1;i++)
    {
        if (a[i][1]<a[i+1][1])
        {
            l=a[i][1];
            a[i][1]=a[i+1][1];
            a[i+1][1]=l;
            l=a[i][0];
            a[i][0]=a[i+1][0];
            a[i+1][0]=l;
            i=-1;
        }
    }
    //for (i=0;i<n;i++) cout<<a[i][1]<<endl;
    for (i=0;i<n-1;i++)
    {
        if (a[0][1]==a[i+1][1]) m++;
    }

    for (i=0;i<m;i++)
    {
        if (a[i][0]>a[i+1][0])
        {
            l=a[i][0];
            a[i][0]=a[i+1][0];
            a[i+1][0]=l;
            i=-1;
        }
        //cout<<m<<endl;
    }
    cout<<a[0][0]<<endl;
    return 0;
}
