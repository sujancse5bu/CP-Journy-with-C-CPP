///SHS
#include <iostream>
using namespace std;
int main ()
{
    int i,j,k,s=0,l=0;
    cin>>j>>k;
    while (j--)
    {
        cin>>i;
        s+=i;
        if (s==k)
        {
            l++;
            s=0;
        }
        else if (s>k)
        {
            l++;
            s=i;
        }
    }
    if (s>0) l++;
    cout<<l<<endl;
    return 0;
}
