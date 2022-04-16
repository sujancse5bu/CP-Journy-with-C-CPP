///ShreeHarichad Smarane
#include <iostream>
using namespace std;
int main ()
{
    int i,n,c=0,t=0,d=0;
    cin>>n;
    int a[n];
    for (i=0;i<n;i++)
    {
        cin>>a[i];
        if (a[i]==4) c+=4;
        else if (a[i]==3) t+=3;
        else if (a[i]==2) d+=2;
    }
    float s,sc,st,sd;
    sc=c/4.5 + t/3;



