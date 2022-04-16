////SHS
#include <iostream>
using namespace std;
int main ()
{
    int n,d,m,mn,mx;
    cin>>n;
    m=n/7;
    d=n%7;
    if (d==0)
    {
        mn=m*2;
        mx=m*2;
    }
    else if (d>=2 && d<=5)
    {
        mn=m*2;
        mx=m*2+2;
    }
    else if (d==1)
    {
        mn=m*2;
        mx=m*2+1;
    }
    else if (d==6)
    {
        mn=m*2+1;
        mx=m*2+2;
    }
    cout<<mn<<" "<<mx<<endl;
    return 0;
}
