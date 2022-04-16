///    OmShantihari
///    Author: Sujan Mridha
///    CSE 5th batch, University of Barishal
#include <iostream>
using namespace std;
int main ()
{
    int i,j,k,l,m,n,s1=0,s2=0,s3=0,s4=0,s=0;
    cin>>n;
    int a[n][n];
    for (i=0;i<n;i++) for (j=0;j<n;j++) cin>>a[i][j];
    for (i=0,j=n-1;i<j;i++,j--)
    {
        s1+=a[i][i];
        s2+=a[i][j];
        s3+=a[j][i];
        s4+=a[j][j];
    }
    if (s4>s1 && s4>s2 && s4>s3) cout<<4<<endl;
    else if (s3>s1 && s3>s2 && s3>s4) cout<<3<<endl;
    else if (s2>s1 && s2>s3 && s2>s4) cout<<2<<endl;
    else cout<<1<<endl;


    return 0;
}
