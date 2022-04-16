/* OmShantihari; Author: Sujan Mridha, CSE 5th batch, University of Barishal */
#include<bits/stdc++.h>
#define lli long long int
#define pb push_back
#define fast ios :: sync_with_stdio(false); cin.tie(0);
using namespace std;
int main ()
{
    fast;
    lli v,n,f,k,c,d,m;
    cin>>n;
    while (n--)
    {
        cin>>f>>k;
        if (k==f)
        {
            if (k%2==0) cout<<k<<endl;
            else cout<<-1*k<<endl;
        }
        else
        {
            c=abs(k)-abs(f)+1;
            if (c%2==1)
            {
                c/=2;
                c+=f;
                if (f%2==1) cout<<-1*c<<endl;
                else cout<<c<<endl;
            }
            else
            {
                c/=2;
                if (f%2==1) cout<<c<<endl;
                else cout<<c*-1<<endl;
            }
        }
    }
    return 0;
}

