///SHS
#include <iostream>
#include <algorithm>

using namespace std;
int main ()
{
    int m,n,i,j,s=2000,d[10002];
    cin>>n>>m;
    for (i=0;i<m;i++) cin>>d[i];
    sort (d,d+m);
    for (i=n-1;i<m;i++)
    {
        j=d[i]-d[i-(n-1)];
        if (j<s) s=j;
    }
    cout<<s;
    return 0;
}
