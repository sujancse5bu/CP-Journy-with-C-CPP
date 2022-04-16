#include <iostream>
#include <string.h>
#include <cmath>
using namespace std;
int main ()

{
    int i,n,x,k,s=0;
    char l,a[1002];
    cin>>a;
    n = strlen (a);
    k='a';
    for (i=0;i<n;i++)
    {
        x=k-a[i];
        x=abs(x);
        if (x>13) s+=26-x;
        else s+=x;
        k=a[i];
    }
    cout<<s<<endl;


    return 0;
}
