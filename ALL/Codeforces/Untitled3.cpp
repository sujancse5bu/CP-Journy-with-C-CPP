///SHS
#include <iostream>
#include <cstring>
using namespace std;
int main ()
{
    int i,j,k,l1,l2,n,p=0;
    char s1[100000],s2[100000];
    cin>>s1>>s2;
    l1= strlen (s1);
    l2= strlen (s2);
    n=strcmp (s1,s2);
    cout<<n;
}
