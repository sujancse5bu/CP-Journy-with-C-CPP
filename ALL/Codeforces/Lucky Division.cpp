///SHS
#include <iostream>
using namespace std;
int main ()
{
    int i,j,k,a[]={4,7,44,47,77,444,447,477,777};
    cin>>k;
    for (i=0;i<9;i++)
    {
        if (k%a[i]==0)
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
