/* OmShantihari; Author: Sujan Mridha, CSE 5th batch, University of Barishal */
#include<bits/stdc++.h>
#define lli long long int
#define pb push_back
#define fast ios :: sync_with_stdio(false); cin.tie(0);
using namespace std;//vector <int> v,t;lli a[600000];//string s;
int check (int x1,int y1,int x2,int y2,int x3,int y3)
{
    float a[3],k,l;
    int x;
    a[0]=sqrt((abs(x1-x2))*(abs(x1-x2))+(abs(y1-y2))*(abs(y1-y2)));
    a[1]=sqrt((abs(x3-x2))*(abs(x3-x2))+(abs(y3-y2))*(abs(y3-y2)));
    a[2]=sqrt((abs(x1-x3))*(abs(x1-x3))+(abs(y1-y3))*(abs(y1-y3)));
    sort(a,a+3);
    k=a[2]*a[2];
    l=a[0]*a[0]+a[1]*a[1];
    if (k==l) x=5;
    else x=-1;
    return x;
}
int main ()
{
    fast;
    lli i,j[15],n,k,l,m,o,c,d,x=1,y=0,z=0,sum=0;
    int x1,y1,x2,y2,x3,y3;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    j[0]=check (x1,y1,x2,y2,x3,y3);
    j[1]=check (x1+1,y1,x2,y2,x3,y3);
    j[2]=check (x1-1,y1,x2,y2,x3,y3);
    j[3]=check (x1,y1+1,x2,y2,x3,y3);
    j[4]=check (x1,y1-1,x2,y2,x3,y3);
    j[5]=check (x1,y1,x2+1,y2,x3,y3);
    j[6]=check (x1,y1,x2-1,y2,x3,y3);
    j[7]=check (x1,y1,x2,y2+1,x3,y3);
    j[8]=check (x1,y1,x2,y2-1,x3,y3);
    j[9]=check (x1,y1,x2,y2,x3+1,y3);
    j[10]=check (x1,y1,x2,y2,x3-1,y3);
    j[11]=check (x1,y1,x2,y2,x3,y3+1);
    j[12]=check (x1,y1,x2,y2,x3,y3-1);
    if (j[0]==5) cout<<"RIGHT"<<endl;
    else
    {
        sort(j,j+13);
        if (j[12]==5) cout<<"ALMOST"<<endl;
        else cout<<"NEITHER"<<endl;
    }
    return 0;
}

