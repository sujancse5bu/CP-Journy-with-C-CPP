///SHS
#include <iostream>
#include <cstring>
using namespace std;
int main ()
{
    int i,j,k,l1,l2,n,p=0;
    char s1[600000],s2[900000];
    cin>>s1>>s2;
    l1= strlen (s1);
    l2= strlen (s2);
    for (i=l1-1,j=l2-1;j>=0 && i>=0;j--,i--)
    {
        if (s1[i]!=s2[j]) break;
        p++;
    }
    n=l1+l2;
    n-=p*2;
    cout<<n;
    return 0;
}
