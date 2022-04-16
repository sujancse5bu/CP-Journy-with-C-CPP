///ShreeHarichad Smarane
#include <iostream>
using namespace std;
int a[200];
int main ()
{
    int i,l,n,d,e,k,b,z;
    string s;
    cin>>n>>k>>s;
    for (i=0;i<n;i++) a[s[i]]++;
    for (i=97;i<123;i++) if (a[i]!=0) break;
    d=a[i]/k;
    e=a[i]%k;
    for (i=97;i<123;i++)
    {
        if (a[i]!=0)
        {
            b=a[i]/k;
            z=a[i]%k;
            if (e!=z || b!=d)
            {
                cout<<"NO"<<endl;
                return 0;
            }
        }
    }
    cout<<"YES"<<endl;
    return 0;
}
