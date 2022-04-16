///SHS
#include <iostream>
using namespace std;
int main ()
{
    int i,j,m,n;
    cin>>n;
    m=n*n;
    if (n%2==1) m++;
    cout<<m/2<<endl;
    for (i=0;i<n;i++)
    {
        if (i%2==0)
        {
            for (j=0;j<n;j++)
            {
                if (j%2==0) cout<<"C";
                else cout<<".";
            }
        }
        else
        {
            for (j=0;j<n;j++)
            {
                if (j%2==1) cout<<"C";
                else cout<<".";
            }
        }
        cout<<endl;
    }
    return 0;
}
