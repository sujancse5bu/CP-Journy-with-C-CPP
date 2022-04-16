///ShreeHarichadSmarane
#include <iostream>
using namespace std;
int main ()
{
    int i,j,k,l,m,n,o,p,s=0,a[100];
    cin>>n>>m;
    for (i=1;i<=m;i++) a[i-1]=i;
    for (i=0;i<n;i++)
    {
        cin>>k>>l;
        while (k<=l)
        {
            a[k-1]=0;
            k++;
        }
    }
    for (i=0;i<m;i++)
    {
        if (a[i]!=0) s++;
        //cout<<a[i]<<endl;
    }
    cout<<s<<endl;
    for (i=0;i<m;i++) if (a[i]!=0) cout<<a[i]<<" ";
    cout<<endl;




    return 0;
}
