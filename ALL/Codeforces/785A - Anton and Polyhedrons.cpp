#include <iostream>
using namespace std;
int main()
{
    int i,n,s=0;
    string x;
    cin>>n;
    for (i=0;i<n;i++)
    {
        cin>>x;
        if (x[0]=='C') s+=6;
        else if (x[0]=='T') s+=4;
        else if (x[0]=='O') s+=8;
        else if (x[0]=='D') s+=12;
        else if (x[0]=='I') s+=20;
    }
    cout<<s<<endl;



    return 0;
}
