/// Counting 0 and 1 from a string
#include <iostream>
#include <cstring>
using namespace std;
int main ()
{
    int i,f,z=0,o=1;
    char d[299];
    cin>>d;
    f=strlen (d);
    for (i=0;i<f;i++)
    {
        if (d[i]=='1') o++;
        else if (d[i]=='0') z++;
    }
    cout<<"Zero = "<<z<<endl;
    cout<<"One = "<<o<<endl;
    return 0;
}
