///    OmShantihari
///    Author: Sujan Mridha
///    CSE 5th batch, University of Barishal
#include <iostream>

using namespace std;
int main ()
{
    int i,j,k,l,n;
    string a,b;
    cin>>n>>a>>b;
    for (i=0,l=0;i<n-1;i++)
    {
        if (a[i]=='0' && a[i+1]=='1' && b[i]=='1' && b[i+1]=='0') l++;
        {
            a[i]='1';
            a[i+1]='0';
        }



    return 0;
}
