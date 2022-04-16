///OmShantiHari
#include <iostream>
using namespace std;
int main ()
{
    int i,j,k,l,m,n,b,s[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,51};
    cin>>n>>m;
    for (i=0;i<15;i++)
    {
        if (s[i]==n)
        {
            if (s[i+1]==m) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
            return 0;
        }
    }
}
