///SHS
#include <iostream>
#include <cmath>
#define ll long long int
using namespace std;
int main ()
{
    ll n;
    cin>>n;
    for (int i=0;i<n;i++)
    {
        ll a,s,b,j,d;
        cin>>a;
        s=(a*(a+1))/2;
        for (j=0,d=0;;j++)
        {
            b=pow(2,j);
            if (b<=a) d+=b;
            else break;
        }
        cout<<s-2*d<<endl;
    }
    return 0;
}
