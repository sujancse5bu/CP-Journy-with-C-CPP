#include <iostream>
using namespace std;
int main ()
{
    long int i,f,n,m,s,a,b,x,y;
    cin>>n;
    m=2*n;
    int d[m];
    for (i=0;i<m;i++) cin>>d[i];
    a=d[0];
    f=0;
    for (i=0;i<n;i++) if (a>d[i]) a=d[i];
    for (i=0;i<n;i++) if (a==d[i]) f++;
    if (f>1) b=a;
    else
    {
        b=1000000000;
        for (i=0;i<n;i++) if (b>d[i] && d[i]>a) b=d[i];
    }
    x=d[n];
    f=0;
    for (i=n;i<m;i++) if (x>d[i]) x=d[i];
    for (i=n;i<m;i++) if (x==d[i]) f++;
    if (f>1) y=x;
    else
    {
        y=1000000000;
        for (i=n;i<m;i++) if (y>d[i] && d[i]>x) y=d[i];
    }
    cout<<a<<" "<<b<<endl<<x<<" "<<y<<endl;
    if (a+b>x+y) cout<<"Apridi"<<endl;
    else if (a+b<x+y) cout<<"Rashed"<<endl;
    else cout<<"NONE"<<endl;
    return 0;
}
