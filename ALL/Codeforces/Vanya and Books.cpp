///SHS
#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    long long int i,j,k=9,n,d=0,s,c=0,p;
    cin>>n;
    i=0;
    d=n;
    while (n>=10)
    {
        s=n%10;
        n/=10;
        i++;
    }
    j=9;
    p=i;
    while (i--)
    {
        j*=10;
        k*=10;
        j+=9;
    }
    c=9;
    n=1;
    s=0;
    while (k>=c)
    {
        s=s+c*n;
        c*=10;
        n++;
    }
    n--;
    d=j-d;
    d*=n;
    s-=d;
    cout<<s<<endl;

    return 0;
}
