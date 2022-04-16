///    OmShantihari
///    Author: Sujan Mridha
///    CSE 5th batch, University of Barishal
#include <iostream>
#include <algorithm>
using namespace std;
int main ()
{
    int i,n,m,b,c,s,a[500];
    cin>>m>>n;
    for (i=0;i<n;i++) cin>>a[i];
    cin>>c;
    n+=c;
    for (;i<n;i++) cin>>a[i];
    sort (a,a+n);
    for (i=0;i<n-1;i++) if (a[i+1]==a[i]) a[i]=0;
    for (i=0,c=0;i<n;i++) c+=a[i];
    s=(m*(m+1))/2;
    if (c==s) cout<<"I become the guy."<<endl;
    else cout<<"Oh, my keyboard!"<<endl;
    return 0;
}

