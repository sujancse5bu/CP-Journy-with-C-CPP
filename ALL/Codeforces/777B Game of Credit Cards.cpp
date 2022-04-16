#include <iostream>
#include <vector>
#include <math.h>
#define lli long long int
#define pb push_back
using namespace std;
vector <lli> v;

int main ()
{
    int i,j,k,c=0,n,mn=0,mx=0,a[300]={0},b[300]={0};
    string s,p;
    cin>>n>>p>>s;
    for (i=0;i<n;i++)
    {
        a[s[i]-48]++;
        b[s[i]-48]++;
    }
    //for (i=0;i<10;i++) if (a[i]>0) cout<<i<<' '<<b[i]<<endl;
    for (i=0;i<n;i++)
    {
        c=p[i]-48;
        for (j=c+1;j<10;j++) if (a[j]>0)
        {
            mn++;
            a[j]--;
            break;
        }
    }
    //cout<<mn<<endl;
    for (i=0;i<n;i++)
    {
        c=p[i]-48;
        for (j=c-1;j>=0;j--)
        {
            if (b[j]>0)
            {
                b[j]--;
                if (j!=c) mx++;
                break;
            }
        }
    }
    //for (i=0;i<10;i++) mx+=b[i];
    //cout<<mx<<endl;
    cout<<mx<<endl<<n-mn<<endl;
    return 0;
}
