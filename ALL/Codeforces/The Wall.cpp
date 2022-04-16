///ShreeHarichad Smarane
#include <iostream>
using namespace std;
int main ()
{
    long long int i,j,n=0,m,o,b,a,e,r,x,y;
    cin>>x>>y>>a>>b;
    i=a,j=a;
    m=x;
    o=y;
    if (y>x)
    {
        m=y;
        o=x;
    }
    e=a%o;
    while (i<=b)
    {
        if (i%o==e) n++;
        i+=m;
    }
    cout<<n<<endl;
    return 0;
}
