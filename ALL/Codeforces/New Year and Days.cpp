///SHS
#include <iostream>
using namespace std;
int main ()
{
    int n;
    string a,b;
    cin>>n>>a>>b;
    if (b[0]=='w')
    {
        if (n==6 || n==5) cout<<53<<endl;
        else cout<<52<<endl;
    }
    else
    {
        if (n<30) cout<<12<<endl;
        else if (n==30) cout<<11<<endl;
        else cout<<7<<endl;
    }
    return 0;
}
