/// SHS
#include<iostream>
using namespace std;
long int p[1000000];
void unn (long int a, long int b);
long int fnd (long int x);
int main ()
{
    long int i,j,p,q,s;
    cin>>s;
    for (i=0;i<1000000;i++) p[i]=i;
    for (i=0;i<s;i++)
    {
        cin>>p>>q;
        unn (p,q);
    }


}

void unn (long int a, long int b)
{
    p[fnd(b)]=fnd(a);
}

long int fnd (long int x)
{
    if (p[x]==x) return x;
    else return fnd (p[x]);


}
