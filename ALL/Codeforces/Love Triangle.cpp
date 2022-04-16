///ShreeHarichad Smarane
#include <iostream>
#include <algorithm>
using namespace std;
int main ()
{
    int i,j,n,m,a[100009],s=0;
    cin>>n;
    for (i=0;i<n;i++) cin>>a[i];
    for (i=0;i<n;i++)
    {
        j=a[i]-1;
        m=a[j]-1;
        s=a[m]-1;
        if (i==s)
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
