#include <iostream>
using namespace std;
int main ()
{
    int i,j,k,l,b,cn,rm,d,n,m;
    string a[20];
    cin>>n>>m;
    for (i=0;i<n;i++) cin>>a[i];
    for (i=0,rm=0;i<n;i++)
    {
        for (j=0;j<m;j++) if (a[i][j]!='.') break;
        if (j==m) rm++;
    }
    for (i=0,cn=0;i<m;i++)
    {
        for (j=0;j<n;j++) if (a[j][i]!='.') break;
        if (j==n) cn++;
    }
    cout<<rm*m+n*cn-rm*cn<<endl;
    return 0;
}
