///    OmShantihari
///    Author: Sujan Mridha
///    CSE 5th batch, University of Barishal
#include <stdio.h>


#define lli long long int
lli madd ();
lli msub ();
lli mmul ();




int main ()
{
    lli ii,a;

    mtrx1:
    printf ("\n   1. Addition of matrix.");
    printf ("\n   2. Subtraction of matrix.");
    printf ("\n   3. Multiplication of matrix.");
    printf ("\n   4. Transpose of a Matricx.");
    printf ("\n   5. Inverse of a Matrix.");
    //
    printf("\n\n    Please enter an index from above : ");
    scanf ("%lld",&ii);
    system ("cls");
    if (ii==1)
    {
        mat1:
        madd ();
        mat3:
        printf ("\n   1. Do this calculation again.");
        printf ("\n   2. Go to the previous menu.");
        printf ("\n   3. Go to the main menu.");
        printf ("\n   4. End the program.");
        printf("\n\n   Please enter an index from above : ");
        scanf ("%lld",&ii);
        if (ii==1) goto mat1;
        else if (ii==2) goto mtrx1;
        else if (ii==3) {};   ///icomplete
        else
        {
            printf ("\n   Invalid selection.");
            goto mat3;
        }
    }
    else if (ii==2)
    {
        mat2:
        msub ();
        mat4:
        printf ("\n   1. Do this calculation again.");
        printf ("\n   2. Go to the previous menu.");
        printf ("\n   3. Go to the main menu.");
        printf ("\n   4. End the program.");
        printf("\n\n   Please enter an index from above : ");
        scanf ("%lld",&ii);
        if (ii==1) goto mat2;
        else if (ii==2) goto mtrx1;
        else if (ii==3) {};   ///icomplete
        else
        {
            printf ("\n   Invalid selection.");
            goto mat4;
        }
    }
    else if (ii==3)
    {
        mat5:
        mmul ();
        mat6:
        printf ("\n   1. Do this calculation again.");
        printf ("\n   2. Go to the previous menu.");
        printf ("\n   3. Go to the main menu.");
        printf ("\n   4. End the program.");
        printf("\n\n   Please enter an index from above : ");
        scanf ("%lld",&ii);
        if (ii==1) goto mat5;
        else if (ii==2) goto mtrx1;
        else if (ii==3) {};   ///icomplete
        else
        {
            printf ("\n   Invalid selection.");
            goto mat6;
        }
    }









    printf ("Main function complete.\n\n\n\n");
    return 0;
}


lli madd ()
{
    lli i,j,k=0,l,m,n,a[1000][100],b[1000][100];
    printf ("\n            Addition of Matrix. ");
    printf ("\n   Please enter the size of row (less than 1000) : ");
    scanf ("%lld",&m);
    printf ("   Please enter the size of column (less than 100) : ");
    scanf ("%lld",&n);
    printf ("   Please enter the first matrix in %lldx%lld order: \n",m,n);
    for (i=0;i<m;i++)
    {
        printf ("   ");
        for (j=0;j<n;j++) scanf ("%lld",&a[i][j]);
    }
    sma:
    if (k==0) printf ("   Please enter the second matrix in %lldx%lld order: \n",m,n);
    else printf ("   Please enter the another matrix in %lldx%lld order: \n",m,n);
    for (i=0;i<m;i++)
    {
        printf ("   ");
        for (j=0;j<n;j++)
        {
            scanf ("%lld",&b[i][j]);
            a[i][j]+=b[i][j];
        }
    }
    printf ("\n   The determined solution:\n");
    for (i=0;i<m;i++)
    {
        printf ("   ");
        for (j=0;j<n;j++) printf ("%lld\t",a[i][j]);
        printf ("\n");
    }
    sma1:
    printf ("\n   1. Add another matrix with this result.");

    printf ("\n   2. End this calculation.");
    printf("\n\n   Please enter an index from above : ");
    scanf ("%lld",&k);
    if (k==1)
    {
        system ("cls");
        goto sma;
    }
    else if (k==2) return 0;
    else
    {
        system ("cls");
        printf ("\n   Invalid selection.");
        goto sma1;
    }
}

lli msub ()
{
    lli i,j,k=0,l,m,n,a[1000][100],b[1000][100];
    printf ("\n            Subtraction of Matrix. ");
    printf ("\n   Please enter the size of row (less than 1000) : ");
    scanf ("%lld",&m);
    printf ("   Please enter the size of column (less than 100) : ");
    scanf ("%lld",&n);
    printf ("   Please enter the first matrix in %lldx%lld order: \n",m,n);
    for (i=0;i<m;i++)
    {
        printf ("   ");
        for (j=0;j<n;j++) scanf ("%lld",&a[i][j]);
    }
    sma:
    if (k==0) printf ("   Please enter the second matrix in %lldx%lld order: \n",m,n);
    else printf ("   Please enter the another matrix in %lldx%lld order: \n",m,n);
    for (i=0;i<m;i++)
    {
        printf ("   ");
        for (j=0;j<n;j++)
        {
            scanf ("%lld",&b[i][j]);
            a[i][j]-=b[i][j];
        }
    }
    printf ("\n   The determined solution:\n");
    for (i=0;i<m;i++)
    {
        printf ("   ");
        for (j=0;j<n;j++) printf ("%lld\t",a[i][j]);
        printf ("\n");
    }
    sma1:
    printf ("\n   1. Subtract another matrix from this result.");

    printf ("\n   2. End this calculation.");
    printf("\n\n   Please enter an index from above : ");
    scanf ("%lld",&k);
    if (k==1)
    {
        system ("cls");
        goto sma;
    }
    else if (k==2) return 0;
    else
    {
        system ("cls");
        printf ("\n   Invalid selection.");
        goto sma1;
    }
}

lli mmul ()
{
    lli i,j,k=0,l,m,n,a[1000][100],b[1000][100];
    printf ("\n            Multiplication of Matrix. ");
    printf ("\n   Please enter the size of row of first matrix (less than 1000) : ");
    scanf ("%lld",&m);
    printf ("   Please enter the size of column of first matrix (less than 100) : ");
    scanf ("%lld",&n);
    printf ("   Please enter the first matrix in %lldx%lld order: \n",m,n);
    for (i=0;i<m;i++)
    {
        printf ("   ");
        for (j=0;j<n;j++) scanf ("%lld",&a[i][j]);
    }
    sma:
    if (k==0) printf ("   Please enter the second matrix in %lldx%lld order: \n",n,m);
    else printf ("   Please enter the another matrix in %lldx%lld order: \n",m,n);
    for (i=0;i<n;i++)
    {
        printf ("   ");
        for (j=0;j<m;j++) scanf ("%lld",&b[i][j]);
    }
    printf ("\n   The determined solution:\n");
    for (i=0;i<m;i++)
    {

    }





    sma1:
    printf ("\n   1. Subtract another matrix from this result.");

    printf ("\n   2. End this calculation.");
    printf("\n\n   Please enter an index from above : ");
    scanf ("%lld",&k);
    if (k==1)
    {
        system ("cls");
        goto sma;
    }
    else if (k==2) return 0;
    else
    {
        system ("cls");
        printf ("\n   Invalid selection.");
        goto sma1;
    }
}







