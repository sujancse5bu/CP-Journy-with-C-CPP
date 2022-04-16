/// ShreeHarichad Smarane
#include <iostream>
using namespace std;
int main ()
{
    int n,i,j,l,c,m,s,p;
    string b;
    cin>>n;
    for (i=0;i<n;i++)
    {
        cin>>b;
        j=0;
        c=0;
        while (b[j]!=NULL)
        {
            if (b[j]>=65 && c==0) c=1;
            else if (b[j]<65 && c==1) c=2;
            else if (b[j]>=65 && c==2) c=3;
            j++;
        }
        if (c==3)
        {
            j=1;
            m=0;
            s=0;
            p=0;
            while (b[j]!=NULL)
            {
                if (b[j]!='C' && m==0) s+=b[j]-48;
                else if (b[j]=='C' && m==0) m=1;
                else if (b[j]!='C' && m==1) p+=b[j]-48;
                j++;
                if (m==0 && b[j]!='C') s*=10;
                else if (b[j]!=NULL && m==1) p*=10;
            }
            int x,k=0,d[900000];
            while (p>0)
            {
                x=p%26;
                if (x!=0)
                {
                    d[k]=x;
                    p-=x;
                    p=p/26;
                }
                else
                {
                    d[k]=p/26;
                    p/=26;
                }
                k++;
            }
            while (k--) cout<<d[k];
            cout<<s<<endl;
        }

    }
    return 0;
}
