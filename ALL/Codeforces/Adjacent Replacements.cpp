///SHS
#include <iostream>
#include <algorithm>
#include <cstring>
#include <math.h>


using namespace std;
int main ()
{
    long long int i,j,k,l,n,m,x,a[100000];
    string s;
    cin>>n;
    for (i=0;i<n;i++)
    {
        cin>>a[i];
        if (a[i]%2==0) a[i]--;
    }

    for (i=0;i<n;i++) cout<<a[i]<<" ";


    return 0;
}
