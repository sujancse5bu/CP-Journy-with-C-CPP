///ShreeHarichad Smarane
#include <iostream>
using namespace std;
#define lli long long int
int main ()
{
    int i,j,k,n,a[100],gr=0,an=0;
    cin>>n;
    for (i=0;i<n;i++) cin>>a[i];
    if (n==1)
    {
        cout<<"-1"<<endl;
        return 0;
    }
    else if (n==2 && a[0]==a[1])
    {
        cout<<"-1";
        return 0;
    }
    else
    {
        j=1;
        while (1)
        {
            if (j==n) break;
            i=0;
            while (i<j)
            {
                gr+=a[i];
                i++;
            }
            k=j;
            while (k<n)
            {
                an+=a[k];
                k++;
            }
            if (an!=gr)
            {
                cout<<2<<endl<<i<<" "<<n-i;
                return 0;
            }
            else j++;
        }
    }
    cout<<"-1"<<endl;
    return 0;
}
