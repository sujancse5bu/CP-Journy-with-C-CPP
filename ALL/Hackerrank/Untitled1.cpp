/* OmShantihari; Author: Sujan Mridha, CSE 5th batch, University of Barishal */
#include<bits/stdc++.h>
#define lli long long int
#define pb push_back
#define fast ios :: sync_with_stdio(false); cin.tie(0);
using namespace std;
vector <lli> v;
lli primeFactors(int n)
{
    int i;
    v.clear();
    while (n%2 == 0)
    {
        v.pb(2);
        n = n/2;
    }
    for (i = 3; i <= sqrt(n); i = i+2)
    {
        while (n%i == 0)
        {
            v.pb(i);
            n = n/i;
        }
    }
    if (n > 2) v.pb(n);
    sort (v.begin(),v.end());
    if (v[0]==v[v.size()-1]) return 1;
    else return 0;
}
lli gcd (lli a, lli b){if (a%b==0) return b;return (gcd(b,a%b));}
int main()
{
    lli n ,m,p;
    cin>>m;
    while (m--)
    {
        cin>>n>>p;
        int x=0,y=p-n+1;
        for (int i=n;i<=p;i++)
        {
            if (i==2) x++;
            else if (i==3) x++;
            else x+=primeFactors(i);
        }
        if (x==0) cout<<0<<endl;
        else if (x/gcd(x,y)==y/gcd(x,y)) cout<<1<<endl;
        else cout<<x/gcd(x,y)<<'/'<<y/gcd(x,y)<<endl;
    }
    return 0;
}
