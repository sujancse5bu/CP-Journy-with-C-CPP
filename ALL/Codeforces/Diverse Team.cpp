///SHS
#include <iostream>
using namespace std;
int main ()
{
    int i,j,p=0,q[1000],k,n,x=0,y,a[1000];
    cin>>n>>j;
    for (i=0;i<n;i++) cin>>a[i];
    for (i=0;i<n;i++)
    {
        k=0;x=0;
        while (k<i)
        {
            if (a[i]==a[k])
                {
                    x=9;
                    break;
                }
            k++;
        }
        if (x==0)
        {
            q[p]=i+1;
            p++;
        }

    }
    if (p>=j)
    {
        cout<<"YES"<<endl;
        for (i=0;i<j;i++)
        {
            if (i==p-1) cout<<q[i]<<endl;
            else cout<<q[i]<<" ";
        }
    }
    else cout<<"NO"<<endl;
    return 0;
}
