/* OmShantihari; Author: Sujan Mridha, CSE 5th batch, University of Barishal */
#include<bits/stdc++.h>
#define lli long long int
#define pb push_back
#define fast ios :: sync_with_stdio(false); cin.tie(0);
//vector <lli> v;
using namespace std;
lli rtrn (lli n)
{
    lli i,y,x=0,r=0,s,z;
    while (n)
    {
        y=n%10;
        s=0;
        z=0;
        for(i=1;i<=9;i++)
        {
            s+=x+i;
            //cout<<n<<' '<<s<<endl;
        }
        for (i=1;i<=y;i++) z+=x+i;
        x=45;
        n/=10;
        r+=z;
        //cout<<z<<endl;
    }
    //cout<<endl;
    return r;
}
int main ()
{
    fast;
    lli v,n,f,k,c,d,m;
    while (1)
    {
        cin>>v>>n;
        if (v<0 && n<0) break;
        cout<<rtrn (n)-rtrn (v)+1<<endl;
    }
    return 0;
}

