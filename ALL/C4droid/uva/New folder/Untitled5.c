#include <stdio.h>
#define lli long long int
void syryl ()
{
    lli ii,b[100000],p,q,i,r,c,z,po,n,s,j,h;
    char a[1000];
printf ("    The Algebric expression must be bounded with the 'First bracket'.\nExample:\n(267*12+34/2)\n(4+2-34*5) etc.\n\n       ");
            sorol:
            printf("    Please enter :");
            p=0;
            q=0;
            po=0;
            n=0;
            s=0;
            j=0;
            h=0;
            while(1)
            {
                scanf("\n%c",&a[p]);
                if(a[p]==')') break;
                scanf("%lld",&b[q]);
                p++;
                q++;
            }
            a[0]='+';
            for(i=0;;i++)
            {
                c=0;
                if(a[i]=='x') continue;
                if(a[i]==')') break;
                if(a[i]=='/')
                {
                    b[i]=b[i-1]/b[i];
                    a[i]='x';
                    b[i-1]=-1;
                    s=1;
                }
            }
            for(i=0;;i++)
            {
                c=0;
                if(a[i]=='x') continue;
                if(a[i]==')') break;
                if(a[i]=='*')
                {
                    z=i-1;
                    here1:
                    if(b[z]==-1)
                    {
                        z--;
                        goto here1;
                    }
                    here2:
                    if(b[i]==-1)
                    {
                        i++;
                        goto here2;
                    }
                    b[i]=b[z]*b[i];
                    a[i]='x';
                    b[z]=-1;
                        s=1;
            }
            }

            for(i=0;i<p;i++)
            {
                if(a[i]=='+')
                {
                    while(b[i]<0)
                    {
                        i++;
                        if(b[i]!=-1) break;
                    }
                    po+=b[i];
                    j++;
                }
                if(a[i]=='-' )
                {
                    while(b[i]<0)
                    {
                        i++;
                        if(b[i]!=-1) break;
                    }
                    n+=b[i];
                    h++;
                }
            }
            if((j==1 && h==0) || (j==0 && h==1))
            {
                if(po==0) printf("    Answer: %lld\n",n);
                else printf("    Answer: %lld\n",po);
            }
            else printf("\n    Answer: %lld\n",po-n);
}
int main ()
{
    syryl ();
    return 0;
}
