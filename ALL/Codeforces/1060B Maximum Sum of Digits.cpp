#include<vector>
#include <iostream>
#include <stdio.h>
#define lli long long int
using namespace std;
int main ()
{
    lli i=0,j=0,n,k=0,c[60]={0};
    i=0;
    cin>>n;
    k=n;
    while (k>=10)
    {
        i++;
        k/=10;
    }
    //cout<<i<<endl;
    while (i--) {j*=10;j+=9;}
    //cout<<j<<endl;
    i=0;
    k=n-j;
    while (j>0)
    {
        i+=(j%10);
        j/=10;
    }
    while (k>0)
    {
        i+=(k%10);
        k/=10;
    }
    cout<<i<<endl;






    return 0;
}
