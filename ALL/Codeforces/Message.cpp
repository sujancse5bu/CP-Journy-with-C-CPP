///    OmShantihari
///    Author: Sujan Mridha
///    CSE 5th batch, University of Barishal
#include <iostream>
#include <algorithm>
using namespace std;
int main ()
{
    int i,j,k,l,m,d,a[3000]={0};
    string s,t;
    cin>>s>>t;
    l=s.size();
    m=t.size();
    for (i=0,k=0,d=0;i<l;i++)
    {
        for (j=0;j<m;j++)
        {
            //cout<<s[i]<<" "<<t[j]<<endl;
            //abcdabcdf
            //abcdfg
            if (s[i]==t[j])
            {
                i++;
                a[k]++;
                if (a[k]==m)
                {
                    cout<<0<<endl;
                    return 0;
                }
            }
            else if (a[k]!=0)
            {
                i--;
                k++;
                break;
            }
            d++;

        }
    }
    sort (a,a+d);
    cout<<m-a[d-1]<<endl;

    return 0;
}
