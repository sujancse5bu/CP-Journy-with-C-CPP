///    OmShantihari
///    Author: Sujan Mridha
///    CSE 5th batch, University of Barishal
#include <iostream>

using namespace std;
int lcm (int x, int y);
int main ()
{
    int i,j,k,l,m,b,n=0,a[8];
    for (i=0;i<6;i++) cin>>a[i];
    for (i=0;i<6;i++) if (a[i]==0) n=9;
    for (i=1,j=0;i<6;i+=2) if (a[i]==0) j=9;
    for (i=0,k=0;i<6;i+=2) if (a[i]==0) k=9;
    if (n==0)
    {
        b=lcm (a[0],a[1]);
        for (i=2;i<6;i++) b=lcm (b,a[i]);
        l=b;
        b/=a[0];
        b*=a[1];
        b/=a[2];
        b*=a[3];
        b/=a[4];
        b*=a[5];
        if (l<b) cout<<"Ron"<<endl;
        else cout<<"Hermione"<<endl;
    }
    else
    {
        if (a[3]>a[2] && j==9) cout<<"Ron"<<endl;
        else if (a[3]<a[2] && k==9) cout<<"Ron"<<endl;
        //else if (a[3]>a[2]) cout<<"Ron"<<endl;
        else cout<<"Hermione"<<endl;
    }
    return 0;
}

int lcm (int x, int y)
{
    int i,v,z;
    if (x>y)
	{
		v=x;
		x=y;
		y=v;
	}
	if (x==0) return x;
	v=y;
	while (y%x!=0) y+=v;
	return y;
}
