///    OmShantihari
///    Author: Sujan Mridha
///    CSE 5th batch, University of Barishal
#include <iostream>
#define lli long long int
using namespace std;

lli eq2 ();
int main ()
{




    return 0;
}












lli eq2 ()
{
    lli n,i,k,l,m,b,v,c,a1,b1,c1,a2,b2,c2,b1c2,b2c1,c1a2,c2a1,a1b2,a2b1,xh,xl,yh,yl,xmp=1,ymp=1,gcdx,gcdy;

    string s[10000];
    cin>>n;
    for (i=0;i<n*2;i++) cin>>s[i];
    for (i=0;i<n*2;i+=2)
    {
        for (int j=0,c=0,b=1;s[i][j]!='\0';j++)
        {
            if (s[i][j]=='-' && s[i][j]=='x')
            {
                 j++;

            }
            else if

        }




        b1c2=b1*c2;
        b2c1=b2*c1;
        c1a2=c1*a2;
        c2a1=c2*a1;
        a1b2=a1*b2;
        a2b1=a2*b1;
        xl=b1c2-b2c1;
        xh=a1b2-a2b1;
        yl=c1a2-c2a1;
        yh=a1b2-a2b1;


        if (xl>0 && xh<0) xmp=-1;
        else if (xl<0 && xh>0) xmp=-1;
        if (yl>0 && yh<0) ymp=-1;
        else if (yl<0 && yh>0) ymp=-1;
        xl=abs(xl);
        xh=abs(xh);
        yl=abs(yl);
        yh=abs(yh);
        ///printf ("\n   xl=%lld, xh=%lld, yl=%lld, yh=%lld\n",xl,xh,yl,yh);
        gcdx=gcd (xl,xh);
        gcdy=gcd (yl,yh);
        ///printf ("   gcdx=%lld, gcdy=%lld\n",gcdx,gcdy);
        xl/=gcdx;
        xh/=gcdx;
        yl/=gcdy;
        yh/=gcdy;
        ///printf ("\n   xl=%lld, xh=%lld, yl=%lld, yh=%lld\n",xl,xh,yl,yh);
        printf ("\n          The determinated solution : x=");
        if (xmp==-1) printf ("-");
        if (xh==1) printf ("%lld.",xl);
        else printf ("%lld/%lld",xl,xh);
        printf ("; y=");
        if (ymp==-1) printf ("-");
        if (yh==1) printf ("%lld.",yl);
        else printf ("%lld/%lld.\n",yl,yh);
    }
}

