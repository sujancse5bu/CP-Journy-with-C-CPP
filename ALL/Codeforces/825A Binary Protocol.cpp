///SHS
#include <iostream>
using namespace std;
int main ()
{
    int i,l,k,n,j,a;
    string s;
    cin>>n>>s;
    for (i=0,j=0,k=0;i<n;i++)
    {
        if (s[i]=='1')
        {
            j++;

            if (k>1) cout<<0;
            k=0;
        }
        else if (s[i]=='0')
        {
            k++;
            if (j>0) cout<<j;
            j=0;
        }
    }
    if (k>1) cout<<k-1<<endl;
    if (j>0) cout<<j<<endl;
    return 0;
}
