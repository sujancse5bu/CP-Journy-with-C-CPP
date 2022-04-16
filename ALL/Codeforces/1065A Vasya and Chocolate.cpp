#include <iostream>
using namespace std;
int main ()
{
    long long int i,s,d,f,g,h,a,b,c,n,m,x[200];
    cin>>n;
    for (i=0,m=0;i<n;i++)
    {
        cin>>s>>a>>b>>c;
        d=s/c;
        h=(d/a)*b;
        x[i]=d+h;
    }
    for (i=0,m=0;i<n;i++) cout<<x[i]<<endl;
    return 0;
}
