/// a ar b er jonno amon x,y khujte hobe jeno ax+by=gcd(a,b).
#include <bits/stdc++.h>
using namespace std;
pair <int , int > pii;
pii xtnddgcd (int a,int b)
{
    if (b==0) return pii(1,0);
    else
    {
        pii d=xtnddgcd (b,a%b);
        return pii(pii)
    }
}
int main ()
{
    int a,b;
    cin>>a>>b;
    xtnddgcd (int a,int b);
    return 0;
}
