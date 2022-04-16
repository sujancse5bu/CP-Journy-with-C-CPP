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
    lli v,n,f,k,c,d,m;
    double j,h,i,l,g,x;
    char p,q,r;
    while(1){
    scanf ("%lld%c%lld",&n,&p,&m);
    if(n==0&&m==0) break;
    j=(m)*0.5;
    h=m/5.0;
    /*if(n==12) i=6;
    if(n==1) i=7;
    if(n==2) i=8;
    if(n==3) i=9;
    if(n==4) i=10;
    if(n==5) i=11;
    if(n==6) i=12;
    if(n==7) i=1;
    if(n==8) i=2;
    if(n==9) i=3;
    if(n==10) i=4;
    if(n==11) i=5;
    h=m/5.0;
    g=180+j;
    if(h>i)
    {
        g-=(h-i);
        x=360-g;
        if(x<g) g=x;
    }
    else
    {
        g-=(i-h);
        x=360-g;
        if(x<g) g=x;
    }*/
    l=abs((n*30)+(j)-(h*30));
    g=abs(360-l);
    printf("%.3lf\n",min(l,g));
    }
}

