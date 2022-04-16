///Shree Harichad Smarane
#include <iostream>
using namespace std;
int main ()
{
    int i,j,k,n,d[100]={0};
    string s;
    char r,g;
    cin>>n>>s;
    i=2;
    j=0;
    while (i<=n)
    {
        if (n%i==0)
        {
            d[j]=i;
            j++;
        }
        i++;
    }
    k=0;
    while (d[k]!=0)
    {
        for (i=0,j=d[k]-1;i<d[k]/2;i++,j--)
        {
            r=s[i];
            s[i]=s[j];
            s[j]=r;
        }
        k++;
    }
    for (i=0;i<n;i++) cout<<s[i];
    return 0;
}
