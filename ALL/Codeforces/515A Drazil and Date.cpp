///SHS
#include <iostream>
using namespace std;
int main ()
{
    long long int i,j,x,y,a;
    cin>>x>>y>>a;
    if (x<0) x*=-1;
    if (y<0) y*=-1;
    if (x+y>a) cout<<"No"<<endl;
    else if (x+y==a) cout<<"Yes"<<endl;
    else
    {
        a=(x+y)-a;
        if (a%2==0) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}
