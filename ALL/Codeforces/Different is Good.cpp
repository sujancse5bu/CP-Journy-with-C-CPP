///SHREEHARICHADSMARANE
#include <iostream>
using namespace std;
int d[200];
int main ()
{
    int i,j,l,n,a,b,s;
    string c;
    cin>>l>>c;
    j=c.size ();
    if (j>26)
    {
        cout<<"-1"<<endl;
        return 0;
    }
    for (i=0;i<l;i++) d[c[i]]++;
    for (i=97,s=0;i<123;i++) if (d[i]>1) s+=d[i]-1;
    cout<<s<<endl;
    return 0;
}
