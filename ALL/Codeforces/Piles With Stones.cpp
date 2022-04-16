///OmShantiHari
#include <iostream>
using namespace std;
int main ()
{
    int i,j,k,l,m,n,o,p=0,d=0;
    cin>>n;
    for (i=0;i<n;i++)
    {
        cin>>m;
        p+=m;
    }
    for (i=0;i<n;i++)
    {
        cin>>m;
        d+=m;
    }
    if (p>=d) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}

