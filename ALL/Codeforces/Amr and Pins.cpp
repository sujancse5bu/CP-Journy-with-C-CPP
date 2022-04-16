///ShreeHarichadSmarane
#include <iostream>
#include <math.h>

using namespace std;
int main ()
{
    long long int r,x,y,x1,y1,m,n,s;
    double v;
    cin>>r>>x>>y>>x1>>y1;
    m=(x-x1)*(x-x1);
    n=(y-y1)*(y-y1);
    s=m+n;
    v= sqrt (s);
    v/=(r*2.0);
    s=v;
    if (v-s>0) s++;
    cout<<s<<endl;
    return 0;
}
