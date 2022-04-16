///SHS
#include <iostream>
using namespace std;
int main ()
{
    int i,j,k,a[100000],b,c,n,d,x[100000]={0},y,z;
    char s[100000];
    cin>>n;
    for (i=0;i<n;i++) cin>>a[i];
    if (n==1)
    {
        cout<<n<<endl<<a[0];
        return 0;
    }
    k=0;
    i=0;
    while (i<n)
    {
        if (a[i]>=a[i+1])
        {
            x[k]=a[i];
            k++;
        }

        i++;
    }
    cout<<k<<endl;
    for (i=0;i<k;i++) cout<<x[i]<<" ";
    return 0;
}
