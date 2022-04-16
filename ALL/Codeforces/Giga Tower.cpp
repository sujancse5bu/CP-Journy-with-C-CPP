///    OmShantihari
///    Author: Sujan Mridha
///    CSE 5th batch, University of Barishal
#include <iostream>
using namespace std;
int main ()
{
    long long int i,b,n,m;
    cin>>n;
    m=n;
    /*while (m>0)
    {
        if (m%10==8)
        {
            cout<<10<<endl;
            return 0;
        }
        m/=10;
    }*/
    if (n<8) cout<<8-n<<endl;
    else if (n%10!=8)
    {
        i=0;
        while (1)
        {
            m=n;
            while (m>0)
            {
                if (m%10==8)
                {
                    cout<<i<<endl;
                    return 0;
                }
                m/=10;
            }
            n++;
            i++;
        }
    }
    else
    {
        i=0;
        do n++,i++;
        while (n%10!=8);
        cout<<i<<endl;
    }
    return 0;
}
