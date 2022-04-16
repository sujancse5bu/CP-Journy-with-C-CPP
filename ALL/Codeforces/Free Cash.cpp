#include <iostream >
using namespace std;
int main ()
{
    int i,n,x,y,a,b,s=1,q=1;
    cin>>n>>x>>y;
    i=1;
    while (i<n)
    {
        cin>>a>>b;
        if (x==a && y==b)
        {
            s++;
            if (q<s) q=s;
            else s=0;
        }
        x=a;
        y=b;
        i++;
    }
    cout<<q<<endl;
    return 0;
}
