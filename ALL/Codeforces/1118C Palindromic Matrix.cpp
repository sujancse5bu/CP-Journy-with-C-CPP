/* OmShantihari; Author: Sujan Mridha, CSE 5th batch, University of Barishal */
#include<bits/stdc++.h>
#define lli long long int
#define pb push_back
#define fast ios :: sync_with_stdio(false); cin.tie(0);
using namespace std;//lli b[200000],c[200000],d[200000];////string s,t;
vector <int> t;
lli a[30][30],b[2000];
lli returner (lli d);
void prnt (lli n);
int main ()
{
    fast;
    lli i,j,n,k,l,m,o,x=1,y=0,z=0,g,h,f,w=0,sum=0;
    cin>>n;
    m=n*n;
    for (i=0;i<n;i++) for (j=0;j<n;j++) a[i][j]=0;
    for (i=0;i<m;i++)
    {
        cin>>o;
        t.pb(o);
        b[o]++;
    }
    if (n%2==1)
    {
        for (i=0;i<=n/2;i++)
        {
            for (j=0;j<=n/2;j++)
            {
                if (a[i][j]==0)
                {
                    if (i==n/2 && j==n/2)
                    {
                        w=returner(1);
                        a[i][j]=w;
                    }
                    else if (i==n/2)
                    {
                        w=returner(2);
                        if (w==0) w=returner(4);
                        a[i][j]=w;
                        g=n/2+n/2-j;
                        a[i][g]=w;
                    }
                    else if (j==n/2)
                    {
                        w=returner(2);
                        if (w==0) w=returner(4);
                        a[i][j]=w;
                        g=n/2+n/2-i;
                        a[g][j]=w;
                    }
                    else if (i==j)
                    {
                        w=returner(4);
                        a[i][j]=w;
                        g=n/2+n/2-i;
                        a[g][j]=w;
                        a[j][g]=w;
                        a[g][g]=w;
                    }
                    else
                    {
                        w=returner(4);
                        a[i][j]=w;
                        g=n-1-i;
                        h=n-1-j;
                        a[g][j]=w;
                        a[i][h]=w;
                        a[g][h]=w;

                    }
                    if (w==0)
                    {
                        cout<<"NO"<<endl;
                        return 0;
                    }
                }
            }
        }
    }
    else
    {
        f=n/2-1;
        for (i=0;i<=f;i++)
        {
            for (j=0;j<=f;j++)
            {
                if (a[i][j]==0)
                {
                    w=returner(4);
                    if (w==0)
                    {
                        cout<<"NO"<<endl;
                        return 0;
                    }
                    if (i==j)
                    {
                        a[i][j]=w;
                        g=n-1-i;
                        a[g][j]=w;
                        a[j][g]=w;
                        a[g][g]=w;
                    }
                    else
                    {
                        a[i][j]=w;
                        g=n-1-i;
                        a[g][j]=w;
                        h=n-1-j;
                        a[i][h]=w;
                        a[g][h]=w;
                    }
                }
            }
        }
    }
    for (int i=0;i<n;i++) for (int j=0;j<n;j++) if (a[i][j]<=0 || a[i][j]>1000)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    prnt (n);
    return 0;
}
lli returner (lli d)
{
    if (d==1)
    {
        for (int i=0;i<1002;i++) if (b[i]==1)
        {
            b[i]=0;
            return i;
        }
        for (int i=0;i<1002;i++) if (b[i]%2==1)
        {
            b[i]--;
            return i;
        }
        for (int i=0;i<1002;i++) if (b[i]%4==1)
        {
            b[i]--;
            return i;
        }
        for (int i=0;i<1002;i++) if (b[i]%4==3)
        {
            b[i]--;
            return i;
        }
    }
    if (d==2)
    {

        for (int i=0;i<1002;i++) if (b[i]==2)
        {
            b[i]-=2;
            return i;
        }
        for (int i=0;i<1002;i++) if (b[i]%4==2)
        {
            b[i]-=2;
            return i;
        }
        for (int i=0;i<1002;i++) if (b[i]>=2)
        {
            b[i]-=2;
            return i;
        }
    }
    if (d==4)
    {
        for (int i=0;i<1002;i++) if (b[i]==4)
        {
            b[i]-=4;
            return i;
        }
        for (int i=0;i<1002;i++) if (b[i]>=4)
        {
            b[i]-=4;
            return i;
        }
    }
}
void prnt (lli n)
{
    cout<<"YES"<<endl;
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            cout<<a[i][j]<<' ';

        }
        cout<<endl;
    }
}

