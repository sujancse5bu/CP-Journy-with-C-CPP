///SHS
#include <iostream>
using namespace std;
int main ()
{
     long int i,n,d,c,a[102],s=1;
     cin>>n>>d;
     for (i=0;i<n;i++) cin>>a[i];
     if (n==1)
     {
         cout<<2;
         return 0;
     }
     for (i=0;i<n-1;i++)
     {
         c=a[i+1]-a[i];
         if(c==2*d) s++;
         else if (c>2*d) s+=2;
     }
     cout<<++s;
     return 0;
}
