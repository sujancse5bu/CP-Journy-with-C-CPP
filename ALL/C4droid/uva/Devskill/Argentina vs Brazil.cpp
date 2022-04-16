#include <iostream>
using namespace std;
int main ()
{
    int i,n,a,b;
    cin>>n;
    for (i=0;i<n;i++)
    {
        cin>>a>>b;
        if (a>b) cout<<"Argentina "<<a<<" - "<<b<<" Brazil"<<endl;
        else cout<<"Brazil "<<b<<" - "<<a<<" Argentina"<<endl;
    }
    return 0;
}
