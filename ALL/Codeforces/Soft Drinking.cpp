///SHS
#include <iostream>
using namespace std;
int main ()
{
    int n, k, l, c, d, p, nl, np,x[3];
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    x[0]=p/(np*n);
    x[1]=(k*l)/(n*nl);
    x[2]=(c*d)/n;
    for (int b,i=0;i<2;i++)
    {
        if (x[i]>x[i+1])
        {
            b=x[i];
            x[i]=x[i+1];
            x[i+1]=b;
            i=-1;
        }

    }
    cout<<x[0]<<endl;
    return 0;
}
