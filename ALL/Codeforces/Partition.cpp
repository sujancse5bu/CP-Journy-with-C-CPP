///ShreeHarichad Smrane
#include <iostream>
using namespace std;
int main ()
{
    int i,n,s,p=0,m=0;
    cin>>n;
    for (i=0;i<n;i++)
    {
        cin>>s;
        if (s>0) p+=s;
        else m+=s;
    }
    cout<<p-m;
    return 0;
}
