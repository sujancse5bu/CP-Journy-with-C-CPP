#include <iostream>
using namespace std;
int main ()
{
    int n,m[100000],i,a,d,t,s,c;
    a=0;d=0;t=0;c=0;
    cin>>n;
    for (i=0;i<n;i++)
    {
        cin>>n[i];
        if (n[i]==1) a++;
        else if (n[i]==2) d++;
        else if (n[i]==3) t++;
        else if (n[i]==4) c++;
    }
    s=c;
    s=s+t;
    if (a>t) a=a-t;
    else a=0;
    if (a==0) s+=t/2+t%2;
    else if (a>)



    return 0;
}
