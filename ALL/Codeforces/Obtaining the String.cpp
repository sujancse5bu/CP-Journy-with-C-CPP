///ShreeHarichadSmarane
#include <iostream>
#include <algorithm>
using namespace std;
int main ()
{
    int i,j,k,l,m,n,o,p,a[200]={0},b[200]={0};
    string s,t,q;
    cin>>n>>s>>t;
    for (i=0;i<n;i++)
    {
        a[s[i]]++;
        b[t[i]]++;
    }
    for (i=97;i<123;i++)
    {
        if (a[i]!=b[i])
        {
            cout<<"-1"<<endl;
            return 0;
        }
    }
    for (i=0,k=0;i<n-1;i++)
    {
        if (s[i]!=t[i])
        {
            cout<<s[i]<<" "<<t[i]<<endl;
            q[0]=s[i];
            a[k]=i+1;
            k++;
            j=i+1;
            while (j<n-1)
            {
                if (t[i]==s[j])
                {
                    s[i]=s[j];
                    s[j]=q[0];
                    break;
                }
                else s[j-1]=s[j];
                j++;
            }
        }
    }
    cout<<k<<endl;
    return 0;
}
