///OmShantiHari
#include <iostream>
using namespace std;
int main ()
{
    int i,b,d,n,s=0,u=0,t,a;
    cin>>n>>b>>d;
    for (i=0;i<n;i++)
    {
        cin>>a;
        if (a<=b) s+=a;
        if (s>10)
        {
            u++;
            s=0;
        }
    }
    cout<<u<<endl;

    return 0;
}
