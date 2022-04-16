#include <iostream>
#define lli long long int
using namespace std;
lli bigmod (lli a, lli b, lli m)
{
    if (b==0) return 1%m;
    int x=bigmod(a,b/2,m);
    x=(x*x)%m;
    if (b%2==1) x=(x*a)%m;
    return x;
}
int main ()
{

}

