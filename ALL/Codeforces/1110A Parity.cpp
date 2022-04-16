/* OmShantihari; Author: Sujan Mridha, CSE 5th batch, University of Barishal */
#include<bits/stdc++.h>
#define lli long long int
#define pb push_back
#define f(i,a,b) for(i=a;i<=b;i++)
#define r(i,a,b) for(i=a;i>=b;i--)
#define bn begin()
#define en end()
#define pi 3.141592654
#define fast ios :: sync_with_stdio(false); cin.tie(0);
using namespace std;///vector <int> a,t[200005];lli a[200],b[200];
lli s[100003];
int main ()
{
    fast;
    lli i,j,n,k,l,m,o=0,e=0,x=0,y=0,z=0,g=0,h,f,w=0;
    cin>>k>>n;
    f(i,0,n-1)
    {
        cin>>s[i];
        if (i==n-1)
        {
            if (s[i]%2==0) e++;
            else o++;
        }
        //else if (i)
        else if (k%2==1)
        {
            if (s[i]%2==0) e++;
            else o++;
        }
        else e++;
    }
    if (o%2==0) cout<<"even"<<endl;
    else cout<<"odd"<<endl;
    return 0;
}

