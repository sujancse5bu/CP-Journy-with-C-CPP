///    OmShantihari
///    Author: Sujan Mridha
///    CSE 5th batch, University of Barishal
#include <iostream>

using namespace std;
int main ()
{
    long long int i,j,k,x,y,b,v,l,n;
    cin>>n;
    for (i=0;i<n;i++)
    {
        v=0;
        cin>>x>>y>>b;
        if (x>b || y>b) cout<<"-1"<<endl;
        else
        {
            if (x!=y) cout<<--b<<endl;
            else
            {
                b-=2;
                cout<<b<<endl;
            }
        }
    }
    return 0;
}



