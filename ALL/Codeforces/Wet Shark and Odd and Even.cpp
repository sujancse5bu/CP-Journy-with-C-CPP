#include <iostream>
#include <algorithm>
using namespace std;
int main ()
{
    long long int i,m,s=0,n[100000];
    cin>>m;
    for (i=0;i<m;i++)
    {
        cin>>n[i];
        s+=n[i];
    }
    sort (n,n+m);
    i=0;
    while (1)
    {
        if (s%2==0)
        {
            cout<<s<<endl;
            return 0;
        }
        s-=n[i];
        i++;
    }
    return 0;
}
