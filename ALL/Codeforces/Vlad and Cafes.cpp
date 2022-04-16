///SHS
#include <iostream>
using namespace std;
int main ()
{
    int n,l,i,j,d[200000];
    cin>>n;
    for (i=0;i<n;i++) cin>>d[i];
    j=d[n-1];
    if (n==1)
    {
        cout<<d[0]<<endl;
        return 0;
    }
    for (i=0;i<n-1;i++)
    {
        if (d[i+1]==j)
        {
            cout<<d[i]<<endl;
            return 0;
        }
    }

    return 0;
}
