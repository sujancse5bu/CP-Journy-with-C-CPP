///SHS
#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
    int i,n,m,v,s,a,d,x,y;
    double c;
    cin>>x>>y;
    d=x*y;
    n=x*x+y*y;
    c=sqrt (n);
    m=c;
    if (c-m==0) cout<<"black"<<endl;
    else if (d>=0)
    {
        if (m%2==0) cout<<"black"<<endl;
        else cout<<"white"<<endl;
    }
    else
    {
        if (m%2==0) cout<<"white"<<endl;
        else cout<<"black"<<endl;
    }
    return 0;
}
