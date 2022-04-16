#include <iostream>
using namespace std;
int main ()
{
    int n,x,y,p;
    float s,d,f;
    cin>>n>>x>>y;
    s=(n*y)/100.0;
    if (s<=x) cout<<0<<endl;
    else
    {
        n=s-x;
        p=(s-x)*10.0;
        p=p%10;
        if (p>0)
        {
            y=s-x+1;
            cout<<y<<endl;
        }
        else cout<<n<<endl;
    }
    return 0;
}
