#include <iostream>
#include <algorithm>
#include<vector>
#include <math.h>
#define lli long long int
using namespace std;
int main ()
{
    ios :: sync_with_stdio(false);
    cin.tie(0);
    lli i,j,n,k,c;
    cin>>n;
    for (i=0;i<n;i++)
    {
        cin>>j;
        k=sqrt(j);
        for (i=2,c=0;i<=k;i++)
        {
            if (j%i==0)
            {
                cout<<"Non Prime bal"<<endl;
                c=9;
                break;
            }
        }
        if (c==0) cout<<"Prime bal"<<endl;
    }
    return 0;
}
