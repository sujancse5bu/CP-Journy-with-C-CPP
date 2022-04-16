///ShreeHarichad Smarane
#include <iostream>
using namespace std;
int main ()
{
    int i,d,s=0,t=0;
    string a;
    cin>>d>>a;
    for (i=0;i<d;i++)
    {
        if (a[i]=='0') s++;
        else t++;
    }
    if (t==0 && d==1){}
    else cout<<1;
    while (s>0)
    {
        cout<<0;
        s--;
    }
    return 0;
}
