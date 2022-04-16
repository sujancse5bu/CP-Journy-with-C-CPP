///ShreeHarichad Smrane
#include <iostream>
using namespace std;
int main ()
{
    int l,r,a;
    cin>>l>>r>>a;
    if (l==r) cout<<(l+a/2)+(r+a/2);
    else if (l>r)
    {
        int s;
        if (a>0)
        {
            r+=a;
            if (r>l)
            {
                s=r-l;
                l+=s/2;
                cout<<l*2;
            }
            else cout<<r*2;
        }
        else cout<<r*2;
    }
    else if (l<r)
    {
        int s;
        if (a>0)
        {
            l+=a;
            if (l>r)
            {
                s=l-r;
                r+=s/2;
                cout<<r*2;
            }
            else cout<<l*2;
        }
        else cout<<l*2;
    }
    return 0;
}
