/*
************************************************
***               OmShantihari               ***
***           Author: Sujan Mridha           ***
***   CSE 5th batch, University of Barishal  ***
************************************************
*/
#include <iostream>
#include <algorithm>
#include<stdio.h>
#define lli long long int
using namespace std;
int main ()
{
    lli i,j,n,k,l,c,a[100]={0},b[100];
    string s;
    cin>>s;
    l=s.size();
    if (l<26)
    {
        cout<<-1<<endl;
        return 0;
    }
    for (i=0;i<=l-26;i++)
    {
        for (j=60,c=0;j<=90;j++) a[j]=0;
        for (j=i;j<i+26;j++) a[s[j]]++;
        for (j=65,c=0;j<=90;j++)
        {
            if (a[j]==0)
            {
                b[c]=j;
                c++;
            }
        }
        //cout<<i+1<<" "<<c<<" "<<a[63]<<endl;
        if (c==a[63])
        {
            for (j=i,k=0;j<i+26;j++) if (s[j]=='?')
            {
                s[j]=b[k];
                k++;
            }

            for (i=0,j=0;i<l;i++)
            {
                if (s[i]=='?') cout<<'A';
                else cout<<s[i];
            }
            cout<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;
    return 0;
}
