///SHREEHARICHADSMARANE
#include <iostream>
using namespace std;
int main ()
{
    int i,j,l,n,a,b,s=0,d[200];
    cin>>n;
    n--;
    for (i=0;i<n;i++) cin>>d[i];
    cin>>a>>b;
    for (i=a-1;i<b-1;i++) s+=d[i];
    cout<<s<<endl;
    return 0;
}
