/*    OmShantiHari
          Author: Sujan Mridha.
          CSE 5th Batch, University of Barishal.
          Date: 07 July, 2018. */
#include <iostream>
#include <cstring>
using namespace std;
int main ()
{
    int i,j,o,p,n,l;
    string a;
    char s[7788];
    cin>>l>>a;
    if (l%2==1)
    {
        i=l/2;
        s[i]=a[0];
        o=i+1;
        i--;
        for (j=1;j<l;j++)
        {
            if (j%2==1)
            {
                s[i]=a[j];
                i--;

            }
            else
            {
                s[o]=a[j];
                o++;
            }

        }
    }
    else
    {
        i=l/2-1;
        s[i]=a[0];
        o=i+1;
        i--;
        for (j=1;j<l;j++)
        {
            if (j%2==0)
            {
                s[i]=a[j];
                i--;
            }
            else
            {
                s[o]=a[j];
                o++;
            }
        }
    }
    cout<<s<<endl;
    return 0;
}

