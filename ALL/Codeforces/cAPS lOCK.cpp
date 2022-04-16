///ShreeHarichad Smrane
#include <iostream>
#include <cstring>
using namespace std;
int main ()
{
    int i,d,p=0,x;
    char v[102];
    cin>>v;
    d=strlen (v);
    if (v[0]>'Z' && d==1)
    {
        v[0]=v[0]-32;
        cout<<v[0]<<endl;
    }
    else if (v[0]>'Z')
    {
        for (i=1;i<d;i++) if (v[i]>='a') break;
        if (d!=i) cout<<v<<endl;
        else
        {
            v[0]-=32;
            for (i=1;i<d;i++) v[i]+=32;
            cout<<v<<endl;
        }
    }
    else if (v[0]<='Z')
    {
        for (i=1;i<d;i++) if (v[i]<='Z') break;
        if (d!=i)
        {
            for (i=0;i<d;i++) v[i]+=32;
            cout<<v<<endl;
        }
        else
        cout<<v<<endl;
    }

    return 0;
}
