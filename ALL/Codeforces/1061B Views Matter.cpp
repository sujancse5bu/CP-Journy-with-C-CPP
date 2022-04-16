/* OmShantihari; Author: Sujan Mridha, CSE 5th batch, University of Barishal */
#include<bits/stdc++.h>
#define lli long long int
#define pb push_back
#define fast ios :: sync_with_stdio(false); cin.tie(0);
//vector <lli> v;

using namespace std;
int main ()
{
    fast;
    lli i,j=0,x=0,y,g,v,n,f,k=0,c,d=1,m;
    cin>>n>>v;
    lli a[n],b[n][2];
    for (i=0,g=0;i<n;i++)
    {
        cin>>a[i];
        g+=a[i];
    }
    sort (a,a+n);
    if (n==1)
    {
        cout<<0<<endl;
        return 0;
    }
    /*for (i=0,j=0;i<n-1;i++)
    {
        if (a[i]==a[i+1]) d++;
        else
        {
            b[j][0]=a[i];
            b[j][1]=d;
            d=1;
            j++;
        }
        if (n-2==i)
        {
            b[j][0]=a[i+1];
            b[j][1]=d;
            d=1;
            j++;
        }
    }
    if (b[0][1]>1 && b[0][0]>0)
    {
        k=b[0][1]*b[0][0];
        if (b[0][1]<b[0][0]) k-=b[0][0];
        else k-=b[0][1];
    }
    //cout<<b[j-1][0]<<' '<<b[j-1][1]<<endl;
    for (i=1;i<j;i++)
    {
        d=b[i][0]-b[i-1][0];
        if (b[i][1]==1)
        {
            k+=b[i-1][0];
        }
        else
        {
            x=b[i][0]*b[i][1];
            if (b[i][0]<b[i][1]) y=x-b[i][0];
            else y=x-b[i][1];
            k+=y;
            //cout<<x-b[i][0]<<endl;
        }
    }
    cout<<k<<endl;
    */
    g-=(n+1);
    cout<<g<<endl;
    return 0;
}

