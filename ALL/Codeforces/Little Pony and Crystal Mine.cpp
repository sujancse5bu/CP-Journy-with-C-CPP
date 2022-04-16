///SHS
#include <iostream>
using namespace std;
int main ()
{
    int i,j,k,l,m,n,o,p,q;
    cin>>n;
    k=n/2;
    i=0;
    l=1;
    while (i<n/2+1)
    {

        for (j=0;j<k;j++) cout<<"*";
        j=0;
        while (j<l)
        {
            cout<<"D";
            j++;
        }
        for (j=0;j<k;j++) cout<<"*";
        k--;
        i++;
        l+=2;
        cout<<endl;
    }
    i=0;
    l=n/2;
    k=1;
    while (i<l)
    {
        for (j=k;j>0;j--) cout<<"*";
        j=n-2;
        while (j>0)
        {
            cout<<"D";
            j--;
        }
        for (j=k;j>0;j--) cout<<"*";
        i++;
        k++;
        n-=2;
        cout<<endl;
    }
    return 0;

}
