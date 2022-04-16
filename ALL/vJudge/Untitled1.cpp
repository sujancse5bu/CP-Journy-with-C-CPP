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
    lli i,j,v,n,f,k,d,e,m,g,h=0;
    char s;
    double x,c,y;
    while (scanf ("%lld %c %lld",&h,&s,&m)!=EOF)
    {
        if (h==0 && m==0) break;
        if (h<=6) c=h*30.0;
        else
        {
            c=12-h;
            c*=30.0;
        }
        if (m<=30) y=m*6;
        else
        {
            y=60-m;
            y*=6;
        }
        c+=y;
        if (c>180) c=360.0-c;
        cout<<c<<endl;
        x=(m/2.0);
        c-=x;
        //printf ("%0.3lf\n",c);
    }






    return 0;
}

