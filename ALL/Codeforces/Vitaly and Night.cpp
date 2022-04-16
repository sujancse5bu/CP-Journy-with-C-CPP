///OmShantiHari
#include <iostream>
using namespace std;
int main ()
{
    int i,j,k,l,m,n,s=0;
    cin>>n>>m;
    m*=2;
    for (i=0;i<n;i++)
    {
        for (j=0;j<m;j+=2)
        {
            cin>>k>>l;
            if (k==1 || l==1) s++;
        }
    }
    cout<<s<<endl;
    return 0;
}
