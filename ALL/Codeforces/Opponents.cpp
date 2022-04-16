///ShreeHarichad Smarane
#include <iostream>
using namespace std;
int main ()
{
    int i,n,m,a=0,d,l,x,y=0,z;
    string s;
    cin>>n>>d;
    for (i=0;i<d;i++)
    {
        cin>>s;
        l=s.size();
        x=0;
        for (int j=0;j<l;j++)
        {
            if (s[j]=='0')
            {
                x=1;
                a++;
                break;
            }
        }
        if (y<a) y=a;
        if (x==0) a=0;
    }
    cout<<y<<endl;
    return 0;
}
