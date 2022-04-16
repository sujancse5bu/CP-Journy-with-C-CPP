#include <stdio.h>
#define lli long long int
char x[10000],y[10000];
lli b[100][100]={0},c[100][100]={0};
void lcs_length ()
{
    lli i,j,m,n;
    m=strlen(x);
    n=strlen(y);
    for (i=1;i<=m;i++)
    {
        for (j=1;j<=n;j++)
        {
            if (x[i]==y[j])
            {
                c[i][j]=c[i-1][j-1]+1;
                b[i][j]=1;
            }
            else if (c[i-1][j]>=c[i][j-1])
            {
                c[i][j]=c[i-1][j];
                b[i][j]=2;
            }
            else
            {
                c[i][j]=c[i][j-1];
                b[i][j]=3;
            }
            printf ("%lld ",c[i][j]);
        }
        printf ("\n");
    }
}
void printLCS (lli i, lli j)
{
    if (i==0 || j==0) return 0;
    if (b[i][j]==1)
    {
        printLCS (i-1,j-1);
        printf ("%c",x[i-1]);
    }
    else if (b[i][j]==2) printLCS (i-1,j);
    else printLCS (i,j-1);
}
int main ()
{
    lli a,m,n,s;
    scanf("%s%s",x,y);
    lcs_length ();
    printLCS (strlen(x), strlen(y));
    return 0;
}

