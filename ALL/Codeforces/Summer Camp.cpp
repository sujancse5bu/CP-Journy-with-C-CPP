///SHS

#include <iostream>
using namespace std;
int main ()
{
    int i,j,k,n,d;
    cin>>n;
    i=0;
    j=0;
    while (j+=1)
    {
        k=j;
        //cout<<j;
        if (i>=n) goto dpnwt;
        while (k>0)
        {
            k/=10;
            i++;
            //cout<<">"<<i<<".";
        }
        //cout<<endl;
    }
    dpnwt:
    j-=1;
    while (j>0)
    {
        d=j%10;
        if (i==n)
        {
            cout<<d<<endl;
            return 0;
        }
        j/=10;
        i--;

    }
    return 0;
}
