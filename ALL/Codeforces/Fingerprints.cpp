#include <iostream>
using namespace std;
int main ()
{
    int i,j,k,n,m;
    cin>>n>>m;
    int nn[n],mm[m],ss[92];
    for (i=0;i<n;i++) cin>>nn[i];
    for (i=0;i<m;i++) cin>>mm[i];
    for (i=0,k=0;i<n;i++)
    {
        for (j=0;j<m;j++)
        {
            if (nn[i]==mm[j])
            {
                ss[k]=nn[i];
                k++;
            }
        }
    }
    i=0;
    while (i<k)
    {
        if (i==k-1) cout<<ss[i];
        else cout<<ss[i]<<" ";
        i++;
    }
    cout<<endl;
    return 0;
}
