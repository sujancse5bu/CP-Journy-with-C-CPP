///ShreeHarichad Smarane
#include <iostream>
using namespace std;
int main ()
{
    int i,k,n,m;
    cin>>n;
    for (i=0;i<n;i++)
    {
        cin>>k;
        if (k>11) cout<<"YES"<<endl;
        else if (k%3==0 || k%7==0 || k%7==3 || k%3==7) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
