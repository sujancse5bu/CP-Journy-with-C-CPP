/* OmShantihari; Author: Sujan Mridha, CSE 5th batch, University of Barishal */
#include<bits/stdc++.h>
#define lli long long int
#define pb push_back
#define fast ios :: sync_with_stdio(false); cin.tie(0);
using namespace std;
int main ()
{
    fast;
    lli i,j,k,l,z,x,c,v,b=0,n,m=0;
    string s;
    cin>>s[0]>>s[1]>>n;
    if (s[0]=='^') i=1;
    else if (s[0]=='>') i=2;
    else if (s[0]==118) i=3;
    else if (s[0]==60) i=4;
    if (s[1]=='^') j=1;
    else if (s[1]=='>') j=2;
    else if (s[1]==118) j=3;
    else if (s[1]==60) j=4;
    b=i-j;
    //cout<<b<<endl<<i<<endl<<j<<endl;
    if (b==0 || b==2 || b==-2) cout<<"undefined"<<endl;
    else if (b==-1 && n%4==1) cout<<"cw"<<endl;
    else if (b==-3 && n54==3)
    else cout<<"ccw"<<endl;

    return 0;
}
