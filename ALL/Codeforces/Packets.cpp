///    OmShantihari
///    Author: Sujan Mridha
///    CSE 5th batch, University of Barishal
#include <iostream>
using namespace std;
int main ()
{
    long long int i,j,k,l,m,n,b,s,d,a[1000]={0};
    cin>>n;
    for (i=1,s=0;i<=n;i++)
    {
        s=(i*(i+1))/2;
        a[i-1]=s;
        if (s>=n) break;
    }
    b=i;
    for (j=0;j<=b+10;j++)
    {
        cout<<a[j]<<endl;
        //if (a[j]>=6 && n>a[j]) i--;
        //if (n>=a[j]) break;
    }
    cout<<i<<endl;
    return 0;
}
