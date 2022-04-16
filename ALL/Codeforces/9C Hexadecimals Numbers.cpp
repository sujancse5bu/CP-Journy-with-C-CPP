///    OmShantihari
///    Author: Sujan Mridha
///    CSE 5th batch, University of Barishal
#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main ()
{
    long long int i=0,j,n=0,m,s;
    string a;
    cin>>a;
    j=m=a.size();
    j--;
    //n=pow(2,j);
    for (i=0,j--;i<m;j--,i++)
    {
        //if (j==-1) break;
        if (a[i]!='0' && a[i]!='1')
        {
            n=n+pow(2,(j+1));
            //cout<<j<<endl;
            for (;j>-1;)
            {
                n=n+pow(2,j);
                //cout<<a[i]<<" "<<pow(2,j)<<endl;
                j--;
                if (j==-1)
                {
                    cout<<n<<endl;
                    return 0;
                }
            }
        }
        else if (a[i]=='1') n=n+pow(2,(j+1));
        //cout<<j<<endl;
    }
    cout<<n<<endl;
    return 0;
}


