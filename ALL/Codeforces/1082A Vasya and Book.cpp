/* OmShantihari; Author: Sujan Mridha, CSE 5th batch, University of Barishal */
#include<bits/stdc++.h>
#define lli long long int
#define pb push_back
#define fast ios :: sync_with_stdio(false); cin.tie(0);
//vector <lli> v;

using namespace std;
int main ()
{
    fast;
    lli v,n,f,k,c,x,y,d,m,w,o,a;
    cin>> v;
    while (v--)
    {

        cin>>n>>x>>y>>d;
        if (x==y )
        {
            cout<<0<<endl;
            continue;
        }
        f=x;
        k=y;
        if (f>k)
        {
            swap (f,k);
        }
        if (y==1)
        {
            a=(k-1)/d;
            if ((k-1)%d) a++;
            cout<<a<<endl;
            continue;
        }

        if (n-y<d && d>y)
        {
            cout<<-1<<endl;
            continue;
        }

        if ((k-f)%d==0)
        {
            cout<<(k-f)/d<<endl;
            continue;
        }
        m=-1;
        o=-1;
        if ((y-1)%d==0)
        {
            m=x/d;
            if (x%d>0) m++;
            m+=((y-1)/d);
        }
        if ((n-y)%d==0)
        {
            o=(n-x)/d;
            if ((n-x)%d>0) o++;
            o+=((n-y)/d);
        }
        //cout<<m<<' '<<o<<endl;
        if (m==-1 && o!=-1) cout<<o<<endl;
        else if (o==-1 && m!=-1) cout<<m<<endl;
        else if (o>-1 && m>-1) cout<<min(o,m)<<endl;
        else cout<<-1<<endl;

    }

    return 0;
}
/*
45
17 9 3 3



*/
