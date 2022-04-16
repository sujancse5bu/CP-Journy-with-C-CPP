///ShreeHarichad Smarane
#include <iostream>
#include <algorithm>
using namespace std;
int main ()
{
    int i,n;
    cin>>n;
    int s[n];
    for (i=0;i<n;i++) cin>>s[i];
    sort (s,s+n);
    if (n%2==1) n=n/2;
    else n=n/2-1;
    cout<<s[n]<<endl;
    return 0;
}
