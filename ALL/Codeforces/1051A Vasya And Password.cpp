/*
************************************************
***               OmShantihari               ***
***           Author: Sujan Mridha           ***
***   CSE 5th batch, University of Barishal  ***
************************************************
*/
#include <iostream>
#include <algorithm>
#include<vector>
#define lli long long int
using namespace std;
int main ()
{
    lli i,j,n,k,c,l,d,a,A;
    string s;
    cin>>n;
    for (j=0;j<n;j++)
    {
        int dd=0,AA=0,aa=0;
        cin>>s;
        d=-1;
        A=-1;
        a=-1;
        l=s.size();
        for (i=0;i<l;i++)
        {
            if (s[i]>='A' && s[i]<='Z')
            {
                AA++;
                A=i;
            }
            else if (s[i]>='a' && s[i]<='z')
            {
                aa++;
                a=i;
            }
            else if (s[i]>='0' && s[i]<='9')
            {
                dd++;
                d=i;
            }
        }
        //cout<<dd<<endl<<aa<<endl<<AA<<endl;
        if (AA>0 && dd>0 && aa>0) cout<<s<<endl;
        else
        {
             if (AA==0 && aa==0)
             {
                 s[0]='a';
                 s[1]='A';
             }
             else if (dd==0 && aa==0)
             {
                 s[0]='a';
                 s[1]='4';
             }
             else if (AA==0 && dd==0)
             {
                 s[0]='6';
                 s[1]='A';
             }
             else if (AA==0)
             {
                 if (dd>1) s[d]='A';
                 else s[a]='A';
             }
             else if (aa==0)
             {
                 if (dd>1) s[d]='a';
                 else s[A]='a';
             }
             else if (dd==0)
             {
                 if (aa>1) s[a]='9';
                 else s[A]='9';
             }
             cout<<s<<endl;
        }
    }
    return 0;
}
