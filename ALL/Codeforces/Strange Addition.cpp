
///    OmShantihari
///    Author: Sujan Mridha
///    CSE 5th batch, University of Barishal
#include <iostream>
#include <algorithm>
using namespace std;
int main ()
{
    int i,j,m,n,s,k,c,a[200];
    cin>>n;
    for (i=0,m=0;i<n;i++)
    {
        cin>>a[i];
        k=a[i];
        j=9;
        do
        {
            j=k%10;
            k/=10;
            if (j==0)
            {
                m++;
                break;
            }
        }
        while (k>0);
    }
    sort (a,a+n);
    if (n%2==0 && m>=n/2)
    {
        cout<<n<<endl;
        for (i=0;i<n;i++) cout<<a[i]<<" ";
    }
    else if (n%2==1 && m>=n/2+1)
    {
        cout<<n<<endl;
        for (i=0;i<n;i++) cout<<a[i]<<" ";
    }
    else
    {
        cout<<m*2<<endl;
        for (i=0,c=0;i<n;i++)
        {
            k=a[i];
            j=9;
            s=0;
            do
            {
                j=k%10;
                k/=10;
                if (j==0)
                {
                    s=5;
                    break;
                }
            }
            while (k>0);
            if (s==5)
            {
                cout<<a[i]<<" ";
                c++;
            }
            if (c==m) break;
        }
        for (i=0,c=0;i<n;i++)
        {
            k=a[i];
            j=9;
            s=0;
            do
            {
                j=k%10;
                k/=10;
                if (j==0)
                {
                    s=5;
                    break;
                }
            }
            while (k>0);
            if (s==0)
            {
                cout<<a[i]<<" ";
                c++;
            }
            if (c==m) break;
        }
    }
    return 0;
}
