#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int i,j,k,n,m,s=0;
    cin>>n;
    m=n/2;
    cout <<m<<endl;
    if (n%2==0)
    {
        for (i=0;i<m;i++)
        {
            if (i<m-1) cout<<"2 ";
            else cout <<"2"<<endl;
        }
    }
    else
    {
        for (i=0;i<m;i++)
        {
            if (i<m-1) cout<<"2 ";
            else cout<<"3"<<endl;
        }
    }


    return 0;
}
