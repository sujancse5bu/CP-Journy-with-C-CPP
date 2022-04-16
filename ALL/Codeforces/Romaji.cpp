///SHS
#include <iostream>
#include <cstdio>
#include <cstring>
#include <math.h>
#include <algorithm>
using namespace std;

#define MAX 1000000000000000000
#define MIN -1000000000000000000
#define lli long long int
int main ()
{
    lli i,j,k=0,l,m=0,n,b,c,d,a[100000];
    char w,x[100000],y[100000],z[100000];
    cin>>x;
    l=strlen (x);
    for (i=0;i<l;i++) if (x[i]=='a' || x[i]=='e' || x[i]=='i' || x[i]=='o' || x[i]=='u' || x[i]=='n') k=9;
    if (k==0)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    for (i=0;i<l-1;i++)
    {
        if (x[i]!='a' && x[i]!='e' && x[i]!='i' && x[i]!='o' && x[i]!='u' && x[i]!='n')
        {
            if (x[i+1]=='a' || x[i+1]=='e' || x[i+1]=='i' || x[i+1]=='o' || x[i+1]=='u')
            {
                i++;
            }
            else m=9;
        }
        else m=9;
    }

    if (m==9) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    return 0;
}

