#include <iostream>
using namespace std;
int main()
{
    long long int i,n,a=0,d,k=0,s=0;
    cin>>n;
    for (i=0;i<n;i++)
    {
        cin>>d;
        if (d>=a)
        {
            s++;
            if (s>k) k=s;
        }
        else s=1;
        a=d;
    }
    cout<<k<<endl;
    return 0;
}
