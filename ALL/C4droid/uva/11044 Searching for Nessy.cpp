#include <iostream>
using namespace std;
int main ()
{
    int i,n,x,y,s;
    cin>>n;
    for (i=0;i<n;i++)
    {
        cin>>x>>y;
        cout<<(x/3)*(y/3)<<endl;
    }
    return 0;
}
