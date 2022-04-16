///ShreeHarichad Smarane
#include <iostream>
using namespace std;
int main ()
{
    long long int i,k,l,n,m,o,p,x[3]={0},y[3]={0};
    string a,b,c;
    cin>>a>>b;
    k=a.size();
    l=b.size();
    for (i=0;i<k;i++)
    {
        x[0]+=(a[i]-48);
        if (i<k-1) x[0]*=10;
    }
    for (i=0;i<l;i++)
    {
        x[1]+=(b[i]-48);
        if (i<l-1) x[1]*=10;
    }
    x[2]=x[0]+x[1];
    o=x[0];
    p=0;
    while (o>0)
    {
        l=o%10;
        if (l!=0) p+=l;
        o/=10;
        if (o>0 && l!=0) p*=10;
    }
    while (p>0)
    {
        o+=p%10;
        p/=10;
        if (p>0) o*=10;
    }
    y[0]=o;
    o=x[1];
    p=0;
    while (o>0)
    {
        l=o%10;
        if (l!=0) p+=l;
        o/=10;
        if (o>0 && l!=0) p*=10;
    }
    while (p>0)
    {
        o+=p%10;
        p/=10;
        if (p>0) o*=10;
    }
    y[1]=o;
    o=x[2];
    p=0;
    while (o>0)
    {
        l=o%10;
        if (l!=0) p+=l;
        o/=10;
        if (o>0 && l!=0) p*=10;
    }
    while (p>0)
    {
        o+=p%10;
        p/=10;
        if (p>0) o*=10;
    }
    y[2]=o;
    if (y[0]+y[1]==y[2]) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
