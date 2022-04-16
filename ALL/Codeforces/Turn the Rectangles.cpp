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
    lli i,j,k,l,m=0,n,b,c,d,a[100000];
    cin>>n;
    j=MAX;
    k=MAX;
    for (i=0;i<n;i++)
    {
        cin>>b>>c;
        if (j<b && j<c) m=9;
        if (b<=j) {j=b;}
        if (c>b) j=c;
    }
    if (m==9) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;

    return 0;
}
