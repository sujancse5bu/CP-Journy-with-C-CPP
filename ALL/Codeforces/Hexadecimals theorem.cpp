///    OmShantihari
///    Author: Sujan Mridha
///    CSE 5th batch, University of Barishal
#include <iostream>

using namespace std;
int main ()
{
    long long int i,j,k,l,n,m,a[300],b[300],c[300];
    k=a[0]=b[0]=c[0]=0;
    l=a[1]=b[1]=c[1]=1;
    for (i=2;i<60;i++)
    {
        b[i]=c[i]=a[i]=l+k;
        k=l;
        l=a[i];
    }
    cin>>l;
    for (i=0;i<60;i++) if (l==a[i]) n=i+1;
    for (i=0;i<n;i++)
    {
        for (j=0;i<n;j++)
        {
            for (k=0;k<n;k++)
            {
                if (a[i]+b[j]+c[k]==l)
                {
                    cout<<a[i]<<" "<<b[j]<<" "<<c[k]<<endl;
                    return 0;
                }
            }
        }
    }
    cout<<"I'm too stupid to solve this problem"<<endl;
    return 0;
}

