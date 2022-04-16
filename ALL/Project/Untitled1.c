///SHS
#include <stdio.h>
#include <math.h>
#include <string.h>
#define lli long long int
lli nmcnv ();
lli nmcnv1 ();
lli nmcnv2 ();
lli nmcnv3 ();
int main ()
{
    nmcnv ();
    return 0;
}

lli nmcnv ()
{
    lli ii;
    nm1:
    printf ("\n   1. Decimal to Binary, Octal & Hexadecimal.");
    printf ("\n   2. Binary, Octal & Hexadecimal to Decimal.");
    printf ("\n   3. Binary to Octal to Hexadecimal and vice versa.");
    printf("\n\n    Please enter an index from above : ");
    scanf ("%lld",&ii);
    system ("cls");
    if (ii==1)
    {
        cv1:
        nmcnv1 ();
        cv2:
        printf("\n\n    1. Do this calculation again.");
        printf("\n    2. Go to the previous menu.");
        printf("\n\n    Please enter an index from above : ");
        scanf ("%lld",&ii);
        system ("cls");
        if (ii==1) goto cv1;
        else if (ii==2) goto nm1;
        else
        {
            printf ("\    Invalid selection.");
            goto cv2;
        }
    }
    else if (ii==2)
    {
        cv3:
        nmcnv2 ();
        cv4:
        printf("\n\n    1. Do this calculation again.");
        printf("\n    2. Go to the previous menu.");
        printf("\n\n    Please enter an index from above : ");
        scanf ("%lld",&ii);
        system ("cls");
        if (ii==1) goto cv3;
        else if (ii==2) goto nm1;
        else
        {
            printf ("\    Invalid selection.");
            goto cv4;
        }
    }
    else if (ii==3)
    {
        cv5:
        nmcnv3 ();
        cv6:
        printf("\n\n    1. Do this calculation again.");
        printf("\n    2. Go to the previous menu.");
        printf("\n\n    Please enter an index from above : ");
        scanf ("%lld",&ii);
        system ("cls");
        if (ii==1) goto cv5;
        else if (ii==2) goto nm1;
        else
        {
            printf ("\    Invalid selection.");
            goto cv6;
        }
    }
    else
    {
        printf ("\n   Invalid selection.\n");
        goto nm1;
    }

    return 0;
}

lli nmcnv1 ()
{
    lli b=0,a,c,i,x,p=0,q,ar[100000]={0};
    printf("\n    Enter the Decimal integer : ");
	scanf("%lld",&a);
	q=a;
	x=a;
	while (q>0)
	{
		q=q/2;
		b++;
	}

	for (i=0; i<b; i++)
	{
		ar[i]=x%2;
		x=x/2;
	}
	printf("\n    The Binary value: ");
	for (i=b-1; i>=0; i--) printf("%d",ar[i]);

	q=a;
	x=a;
	b=0;
	p=0;
	while (q>0)
	{
		q=q/8;
		b++;
	}

	for (i=0; i<b; i++)
	{
		ar[i]=x%8;
		x=x/8;
	}
	printf("\n    The Octal value: ");
	for (i=b-1; i>=0; i--)
    {
        printf("%d",ar[i]);
    }

    q=a;
	x=a;
	b=0;
	p=0;
	while (q>0)
	{
		q=q/16;
		b++;
	}

	for (i=0; i<b; i++)
	{
		ar[i]=x%16;
		x=x/16;
	}
	printf("\n    The Hexadecimal value: ");
	for (i=b-1; i>=0; i--)
    {
		if (ar[i]==10) printf("A");
		else if (ar[i]==11) printf("B");
		else if (ar[i]==12) printf("C");
		else if (ar[i]==13) printf("D");
		else if (ar[i]==14) printf("E");
		else if (ar[i]==15) printf("F");
		else printf("%d",ar[i]);
    }
    printf("\n");
    return 0;
}

lli nmcnv2 ()
{
    lli b=0,c,n,i,ii,j,x,p=0,q=0,s=0,ar[100000]={0};
    char a[10000];
    nm33:
    printf("\n    1. Binary to decimal.");
    printf("\n    2. Octal to decimal.");
    printf("\n    3. Hexadecimal to decimal.");
    printf("\n\n    Please enter an index from above : ");
    scanf ("%lld",&ii);
    system ("cls");
    if (ii==1)
    {
        q=2;
        printf("\n    Please enter the binary number: ");
    }
    else if (ii==2)
    {
        q=8;
        printf("\n    Please enter the octal number: ");
    }
    else if (ii==3)
    {
        q=16;
        printf("\n    Please enter the hexadecimal number: ");
    }
    else
    {
        printf ("\n   Invalid selection.\n");
        goto nm33;
    }
	scanf("%s",&a);
	n=strlen (a);
	for (i=0,j=n-1;i<n;i++,j--)
    {
        if (a[i]<='9' && a[i]>='0') ar[j]=a[i]-48;
        else ar[j]=a[i]-55;
    }
	for (i=0;i<n;i++)
    {
        p=ar[i]*pow(q,i);
        s+=p;
    }
    printf ("\n    The determined decimal number = %lld\n",s);
}
lli nmcnv3 ()
{
    lli b,c,n,i,ii,j,k,p=0,q=0,s=0,ar[100000]={0};
    char a[10000],x[10000];
    nm34:
    printf("\n    1. Binary to Octal and Hexadecimal.");
    printf("\n    2. Octal to Binary and Hexadecimal.");
    printf("\n    3. Hexadecimal to Binary and Octal.");
    printf("\n\n    Please enter an index from above : ");
    scanf ("%lld",&ii);
    system ("cls");
    if (ii==1)
    {
        q2:
        printf("\n    Please enter the binary number: ");
        scanf("%s",&a);
        n=strlen (a);
        for (i=0;i<n;i++)
        {
            if (a[i]>'1' || a[i]<'0')
            {
                printf ("     Invalid binary number.");
                goto q2;
            }
        }
        b=0;
        if (n%3==0)
        {
            for (i=n-1;i>=0;i-=3,b++)
            {
                if (a[i-2]=='1' && a[i-1]=='1' && a[i]=='1') x[b]='7';
                else if (a[i-2]=='1' && a[i-1]=='1' && a[i]=='0') x[b]='6';
                else if (a[i-2]=='1' && a[i-1]=='0' && a[i]=='1') x[b]='5';
                else if (a[i-2]=='1' && a[i-1]=='0' && a[i]=='0') x[b]='4';
                else if (a[i-2]=='0' && a[i-1]=='1' && a[i]=='1') x[b]='3';
                else if (a[i-2]=='0' && a[i-1]=='1' && a[i]=='0') x[b]='2';
                else if (a[i-2]=='0' && a[i-1]=='0' && a[i]=='1') x[b]='1';
                else if (a[i-2]=='0' && a[i-1]=='0' && a[i]=='0')x[b]='0';
            }
        }
        else if (n%3==1)
        {
            for (i=n-1;i>=0;i-=3,b++)
            {
                if (i==0 && a[i]=='1') x[b]='1';
                else if (a[i-2]=='1' && a[i-1]=='1' && a[i]=='1') x[b]='7';
                else if (a[i-2]=='1' && a[i-1]=='1' && a[i]=='0') x[b]='6';
                else if (a[i-2]=='1' && a[i-1]=='0' && a[i]=='1') x[b]='5';
                else if (a[i-2]=='1' && a[i-1]=='0' && a[i]=='0') x[b]='4';
                else if (a[i-2]=='0' && a[i-1]=='1' && a[i]=='1') x[b]='3';
                else if (a[i-2]=='0' && a[i-1]=='1' && a[i]=='0') x[b]='2';
                else if (a[i-2]=='0' && a[i-1]=='0' && a[i]=='1') x[b]='1';
                else if (a[i-2]=='0' && a[i-1]=='0' && a[i]=='0')x[b]='0';
            }
        }
        else if (n%3==2)
        {
            for (i=n-1;i>=0;i-=3,b++)
            {
                if (i<2 && a[i-1]=='1' && a[i]=='1') x[b]='3';
                if (i<2 && a[i-1]=='1' && a[i]=='0') x[b]='2';
                if (i<2 && a[i-1]=='0' && a[i]=='1') x[b]='1';
                else if (a[i-2]=='1' && a[i-1]=='1' && a[i]=='1') x[b]='7';
                else if (a[i-2]=='1' && a[i-1]=='1' && a[i]=='0') x[b]='6';
                else if (a[i-2]=='1' && a[i-1]=='0' && a[i]=='1') x[b]='5';
                else if (a[i-2]=='1' && a[i-1]=='0' && a[i]=='0') x[b]='4';
                else if (a[i-2]=='0' && a[i-1]=='1' && a[i]=='1') x[b]='3';
                else if (a[i-2]=='0' && a[i-1]=='1' && a[i]=='0') x[b]='2';
                else if (a[i-2]=='0' && a[i-1]=='0' && a[i]=='1') x[b]='1';
                else if (a[i-2]=='0' && a[i-1]=='0' && a[i]=='0')x[b]='0';
            }
        }
        printf("\n    Octal = ");
        for (i=b-1;i>=0;i--) printf("%c",x[i]);
        b=0;
        if (n%4==0)
        {
            for (i=n-1;i>=0;i-=4,b++)
            {
                     if (a[i-3]=='1' && a[i-2]=='1' && a[i-1]=='1' && a[i]=='1') x[b]='F';
                else if (a[i-3]=='1' && a[i-2]=='1' && a[i-1]=='1' && a[i]=='0') x[b]='E';
                else if (a[i-3]=='1' && a[i-2]=='1' && a[i-1]=='0' && a[i]=='1') x[b]='D';
                else if (a[i-3]=='1' && a[i-2]=='1' && a[i-1]=='0' && a[i]=='0') x[b]='C';
                else if (a[i-3]=='1' && a[i-2]=='0' && a[i-1]=='1' && a[i]=='1') x[b]='B';
                else if (a[i-3]=='1' && a[i-2]=='0' && a[i-1]=='1' && a[i]=='0') x[b]='A';
                else if (a[i-3]=='1' && a[i-2]=='0' && a[i-1]=='0' && a[i]=='1') x[b]='9';
                else if (a[i-3]=='1' && a[i-2]=='0' && a[i-1]=='0' && a[i]=='0') x[b]='8';
                else if (a[i-3]=='0' && a[i-2]=='1' && a[i-1]=='1' && a[i]=='1') x[b]='7';
                else if (a[i-3]=='0' && a[i-2]=='1' && a[i-1]=='1' && a[i]=='0') x[b]='6';
                else if (a[i-3]=='0' && a[i-2]=='1' && a[i-1]=='0' && a[i]=='1') x[b]='5';
                else if (a[i-3]=='0' && a[i-2]=='1' && a[i-1]=='0' && a[i]=='0') x[b]='4';
                else if (a[i-3]=='0' && a[i-2]=='0' && a[i-1]=='1' && a[i]=='1') x[b]='3';
                else if (a[i-3]=='0' && a[i-2]=='0' && a[i-1]=='1' && a[i]=='0') x[b]='2';
                else if (a[i-3]=='0' && a[i-2]=='0' && a[i-1]=='0' && a[i]=='1') x[b]='1';
                else if (a[i-3]=='0' && a[i-2]=='0' && a[i-1]=='0' && a[i]=='0') x[b]='0';
            }
        }
        if (n%4==1)
        {
            for (i=n-1;i>=0;i-=4,b++)
            {
                if (i==0 && a[0]=='1') x[b]='1';
                else if (a[i-3]=='1' && a[i-2]=='1' && a[i-1]=='1' && a[i]=='1') x[b]='F';
                else if (a[i-3]=='1' && a[i-2]=='1' && a[i-1]=='1' && a[i]=='0') x[b]='E';
                else if (a[i-3]=='1' && a[i-2]=='1' && a[i-1]=='0' && a[i]=='1') x[b]='D';
                else if (a[i-3]=='1' && a[i-2]=='1' && a[i-1]=='0' && a[i]=='0') x[b]='C';
                else if (a[i-3]=='1' && a[i-2]=='0' && a[i-1]=='1' && a[i]=='1') x[b]='B';
                else if (a[i-3]=='1' && a[i-2]=='0' && a[i-1]=='1' && a[i]=='0') x[b]='A';
                else if (a[i-3]=='1' && a[i-2]=='0' && a[i-1]=='0' && a[i]=='1') x[b]='9';
                else if (a[i-3]=='1' && a[i-2]=='0' && a[i-1]=='0' && a[i]=='0') x[b]='8';
                else if (a[i-3]=='0' && a[i-2]=='1' && a[i-1]=='1' && a[i]=='1') x[b]='7';
                else if (a[i-3]=='0' && a[i-2]=='1' && a[i-1]=='1' && a[i]=='0') x[b]='6';
                else if (a[i-3]=='0' && a[i-2]=='1' && a[i-1]=='0' && a[i]=='1') x[b]='5';
                else if (a[i-3]=='0' && a[i-2]=='1' && a[i-1]=='0' && a[i]=='0') x[b]='4';
                else if (a[i-3]=='0' && a[i-2]=='0' && a[i-1]=='1' && a[i]=='1') x[b]='3';
                else if (a[i-3]=='0' && a[i-2]=='0' && a[i-1]=='1' && a[i]=='0') x[b]='2';
                else if (a[i-3]=='0' && a[i-2]=='0' && a[i-1]=='0' && a[i]=='1') x[b]='1';
                else if (a[i-3]=='0' && a[i-2]=='0' && a[i-1]=='0' && a[i]=='0') x[b]='0';
            }
        }

        if (n%4==2)
        {
            for (i=n-1;i>=0;i-=4,b++)
            {
                if (i==1 && a[0]=='1' && a[1]=='1' ) x[b]='3';
                else if (i==1 && a[0]=='1' && a[1]=='0' ) x[b]='2';
                else if (i==1 && a[0]=='0' && a[1]=='1' ) x[b]='1';
                else if (a[i-3]=='1' && a[i-2]=='1' && a[i-1]=='1' && a[i]=='1') x[b]='F';
                else if (a[i-3]=='1' && a[i-2]=='1' && a[i-1]=='1' && a[i]=='0') x[b]='E';
                else if (a[i-3]=='1' && a[i-2]=='1' && a[i-1]=='0' && a[i]=='1') x[b]='D';
                else if (a[i-3]=='1' && a[i-2]=='1' && a[i-1]=='0' && a[i]=='0') x[b]='C';
                else if (a[i-3]=='1' && a[i-2]=='0' && a[i-1]=='1' && a[i]=='1') x[b]='B';
                else if (a[i-3]=='1' && a[i-2]=='0' && a[i-1]=='1' && a[i]=='0') x[b]='A';
                else if (a[i-3]=='1' && a[i-2]=='0' && a[i-1]=='0' && a[i]=='1') x[b]='9';
                else if (a[i-3]=='1' && a[i-2]=='0' && a[i-1]=='0' && a[i]=='0') x[b]='8';
                else if (a[i-3]=='0' && a[i-2]=='1' && a[i-1]=='1' && a[i]=='1') x[b]='7';
                else if (a[i-3]=='0' && a[i-2]=='1' && a[i-1]=='1' && a[i]=='0') x[b]='6';
                else if (a[i-3]=='0' && a[i-2]=='1' && a[i-1]=='0' && a[i]=='1') x[b]='5';
                else if (a[i-3]=='0' && a[i-2]=='1' && a[i-1]=='0' && a[i]=='0') x[b]='4';
                else if (a[i-3]=='0' && a[i-2]=='0' && a[i-1]=='1' && a[i]=='1') x[b]='3';
                else if (a[i-3]=='0' && a[i-2]=='0' && a[i-1]=='1' && a[i]=='0') x[b]='2';
                else if (a[i-3]=='0' && a[i-2]=='0' && a[i-1]=='0' && a[i]=='1') x[b]='1';
                else if (a[i-3]=='0' && a[i-2]=='0' && a[i-1]=='0' && a[i]=='0') x[b]='0';
            }
        }
        if (n%4==3)
        {
            for (i=n-1;i>=0;i-=4,b++)
            {
                if (i==2 && a[i-2]=='1' && a[i-1]=='1' && a[i]=='1') x[b]='7';
                else if (i==2 && a[i-2]=='1' && a[i-1]=='1' && a[i]=='0') x[b]='6';
                else if (i==2 && a[i-2]=='1' && a[i-1]=='0' && a[i]=='1') x[b]='5';
                else if (i==2 && a[i-2]=='1' && a[i-1]=='0' && a[i]=='0') x[b]='4';
                else if (i==2 && a[i-2]=='0' && a[i-1]=='1' && a[i]=='1') x[b]='3';
                else if (i==2 && a[i-2]=='0' && a[i-1]=='1' && a[i]=='0') x[b]='2';
                else if (i==2 && a[i-2]=='0' && a[i-1]=='0' && a[i]=='1') x[b]='1';
                else if (a[i-3]=='1' && a[i-2]=='1' && a[i-1]=='1' && a[i]=='1') x[b]='F';
                else if (a[i-3]=='1' && a[i-2]=='1' && a[i-1]=='1' && a[i]=='0') x[b]='E';
                else if (a[i-3]=='1' && a[i-2]=='1' && a[i-1]=='0' && a[i]=='1') x[b]='D';
                else if (a[i-3]=='1' && a[i-2]=='1' && a[i-1]=='0' && a[i]=='0') x[b]='C';
                else if (a[i-3]=='1' && a[i-2]=='0' && a[i-1]=='1' && a[i]=='1') x[b]='B';
                else if (a[i-3]=='1' && a[i-2]=='0' && a[i-1]=='1' && a[i]=='0') x[b]='A';
                else if (a[i-3]=='1' && a[i-2]=='0' && a[i-1]=='0' && a[i]=='1') x[b]='9';
                else if (a[i-3]=='1' && a[i-2]=='0' && a[i-1]=='0' && a[i]=='0') x[b]='8';
                else if (a[i-3]=='0' && a[i-2]=='1' && a[i-1]=='1' && a[i]=='1') x[b]='7';
                else if (a[i-3]=='0' && a[i-2]=='1' && a[i-1]=='1' && a[i]=='0') x[b]='6';
                else if (a[i-3]=='0' && a[i-2]=='1' && a[i-1]=='0' && a[i]=='1') x[b]='5';
                else if (a[i-3]=='0' && a[i-2]=='1' && a[i-1]=='0' && a[i]=='0') x[b]='4';
                else if (a[i-3]=='0' && a[i-2]=='0' && a[i-1]=='1' && a[i]=='1') x[b]='3';
                else if (a[i-3]=='0' && a[i-2]=='0' && a[i-1]=='1' && a[i]=='0') x[b]='2';
                else if (a[i-3]=='0' && a[i-2]=='0' && a[i-1]=='0' && a[i]=='1') x[b]='1';
                else if (a[i-3]=='0' && a[i-2]=='0' && a[i-1]=='0' && a[i]=='0') x[b]='0';
            }
        }






        printf("\n    HeXadecimal = ");
        for (i=b-1;i>=0;i--) printf("%c",x[i]);
    }

    if (ii==2)
    {
        q3:
        printf("\n    Please enter the octal number: ");
        scanf("%s",&a);
        n=strlen (a);
        for (i=0;i<n;i++)
        {
            if (a[i]>'7' || a[i]<'0')
            {
                printf ("     Invalid octal number.");
                goto q3;
            }
        }
        for (i=0;i<n;i++) if (a[i]!='0') break;
        for (b=0;i<n;i++,b+=3)
        {
            if (a[i]=='0')
            {
                x[b]='0';
                x[b+1]='0';
                x[b+2]='0';
            }
            else if (a[i]=='1')
            {
                x[b]='0';
                x[b+1]='0';
                x[b+2]='1';
            }
            else if (a[i]=='2')
            {
                x[b]='0';
                x[b+1]='1';
                x[b+2]='0';
            }
            else if (a[i]=='3')
            {
                x[b]='0';
                x[b+1]='1';
                x[b+2]='1';
            }
            else if (a[i]=='4')
            {
                x[b]='1';
                x[b+1]='0';
                x[b+2]='0';
            }
            else if (a[i]=='5')
            {
                x[b]='1';
                x[b+1]='0';
                x[b+2]='1';
            }
            else if (a[i]=='6')
            {
                x[b]='1';
                x[b+1]='1';
                x[b+2]='0';
            }
            else if (a[i]=='7')
            {
                x[b]='1';
                x[b+1]='1';
                x[b+2]='1';
            }
        }
        for (i=0;i<b;i++) if (x[i]!='0') break;
        printf("\n    Binary = ");
        for (;i<b;i++) printf ("%c",x[i]);

        p=0;
        if (b%4==0)
        {
            for (i=b-1;i>=0;i-=4,p++)
            {
                     if (x[i-3]=='1' && x[i-2]=='1' && x[i-1]=='1' && x[i]=='1') a[p]='F';
                else if (x[i-3]=='1' && x[i-2]=='1' && x[i-1]=='1' && x[i]=='0') a[p]='E';
                else if (x[i-3]=='1' && x[i-2]=='1' && x[i-1]=='0' && x[i]=='1') a[p]='D';
                else if (x[i-3]=='1' && x[i-2]=='1' && x[i-1]=='0' && x[i]=='0') a[p]='C';
                else if (x[i-3]=='1' && x[i-2]=='0' && x[i-1]=='1' && x[i]=='1') a[p]='B';
                else if (x[i-3]=='1' && x[i-2]=='0' && x[i-1]=='1' && x[i]=='0') a[p]='A';
                else if (x[i-3]=='1' && x[i-2]=='0' && x[i-1]=='0' && x[i]=='1') a[p]='9';
                else if (x[i-3]=='1' && x[i-2]=='0' && x[i-1]=='0' && x[i]=='0') a[p]='8';
                else if (x[i-3]=='0' && x[i-2]=='1' && x[i-1]=='1' && x[i]=='1') a[p]='7';
                else if (x[i-3]=='0' && x[i-2]=='1' && x[i-1]=='1' && x[i]=='0') a[p]='6';
                else if (x[i-3]=='0' && x[i-2]=='1' && x[i-1]=='0' && x[i]=='1') a[p]='5';
                else if (x[i-3]=='0' && x[i-2]=='1' && x[i-1]=='0' && x[i]=='0') a[p]='4';
                else if (x[i-3]=='0' && x[i-2]=='0' && x[i-1]=='1' && x[i]=='1') a[p]='3';
                else if (x[i-3]=='0' && x[i-2]=='0' && x[i-1]=='1' && x[i]=='0') a[p]='2';
                else if (x[i-3]=='0' && x[i-2]=='0' && x[i-1]=='0' && x[i]=='1') a[p]='1';
                else if (x[i-3]=='0' && x[i-2]=='0' && x[i-1]=='0' && x[i]=='0') a[p]='0';
            }
        }
        else if (b%4==1)
        {
            for (i=b-1;i>=0;i-=4,p++)
            {
                if (i==0 && x[i]=='0') a[p]='1';
                else if (x[i-3]=='1' && x[i-2]=='1' && x[i-1]=='1' && x[i]=='1') a[p]='F';
                else if (x[i-3]=='1' && x[i-2]=='1' && x[i-1]=='1' && x[i]=='0') a[p]='E';
                else if (x[i-3]=='1' && x[i-2]=='1' && x[i-1]=='0' && x[i]=='1') a[p]='D';
                else if (x[i-3]=='1' && x[i-2]=='1' && x[i-1]=='0' && x[i]=='0') a[p]='C';
                else if (x[i-3]=='1' && x[i-2]=='0' && x[i-1]=='1' && x[i]=='1') a[p]='B';
                else if (x[i-3]=='1' && x[i-2]=='0' && x[i-1]=='1' && x[i]=='0') a[p]='A';
                else if (x[i-3]=='1' && x[i-2]=='0' && x[i-1]=='0' && x[i]=='1') a[p]='9';
                else if (x[i-3]=='1' && x[i-2]=='0' && x[i-1]=='0' && x[i]=='0') a[p]='8';
                else if (x[i-3]=='0' && x[i-2]=='1' && x[i-1]=='1' && x[i]=='1') a[p]='7';
                else if (x[i-3]=='0' && x[i-2]=='1' && x[i-1]=='1' && x[i]=='0') a[p]='6';
                else if (x[i-3]=='0' && x[i-2]=='1' && x[i-1]=='0' && x[i]=='1') a[p]='5';
                else if (x[i-3]=='0' && x[i-2]=='1' && x[i-1]=='0' && x[i]=='0') a[p]='4';
                else if (x[i-3]=='0' && x[i-2]=='0' && x[i-1]=='1' && x[i]=='1') a[p]='3';
                else if (x[i-3]=='0' && x[i-2]=='0' && x[i-1]=='1' && x[i]=='0') a[p]='2';
                else if (x[i-3]=='0' && x[i-2]=='0' && x[i-1]=='0' && x[i]=='1') a[p]='1';
                else if (x[i-3]=='0' && x[i-2]=='0' && x[i-1]=='0' && x[i]=='0') a[p]='0';
            }
        }

        else if (b%4==2)
        {
            for (i=b-1;i>=0;i-=4,p++)
            {
                if (i==1 && x[0]=='1' && x[1]=='1' ) a[p]='3';
                else if (i==1 && x[0]=='1' && x[1]=='0' ) a[p]='2';
                else if (i==1 && x[0]=='0' && x[1]=='1' ) a[p]='1';
                else if (x[i-3]=='1' && x[i-2]=='1' && x[i-1]=='1' && x[i]=='1') a[p]='F';
                else if (x[i-3]=='1' && x[i-2]=='1' && x[i-1]=='1' && x[i]=='0') a[p]='E';
                else if (x[i-3]=='1' && x[i-2]=='1' && x[i-1]=='0' && x[i]=='1') a[p]='D';
                else if (x[i-3]=='1' && x[i-2]=='1' && x[i-1]=='0' && x[i]=='0') a[p]='C';
                else if (x[i-3]=='1' && x[i-2]=='0' && x[i-1]=='1' && x[i]=='1') a[p]='B';
                else if (x[i-3]=='1' && x[i-2]=='0' && x[i-1]=='1' && x[i]=='0') a[p]='A';
                else if (x[i-3]=='1' && x[i-2]=='0' && x[i-1]=='0' && x[i]=='1') a[p]='9';
                else if (x[i-3]=='1' && x[i-2]=='0' && x[i-1]=='0' && x[i]=='0') a[p]='8';
                else if (x[i-3]=='0' && x[i-2]=='1' && x[i-1]=='1' && x[i]=='1') a[p]='7';
                else if (x[i-3]=='0' && x[i-2]=='1' && x[i-1]=='1' && x[i]=='0') a[p]='6';
                else if (x[i-3]=='0' && x[i-2]=='1' && x[i-1]=='0' && x[i]=='1') a[p]='5';
                else if (x[i-3]=='0' && x[i-2]=='1' && x[i-1]=='0' && x[i]=='0') a[p]='4';
                else if (x[i-3]=='0' && x[i-2]=='0' && x[i-1]=='1' && x[i]=='1') a[p]='3';
                else if (x[i-3]=='0' && x[i-2]=='0' && x[i-1]=='1' && x[i]=='0') a[p]='2';
                else if (x[i-3]=='0' && x[i-2]=='0' && x[i-1]=='0' && x[i]=='1') a[p]='1';
                else if (x[i-3]=='0' && x[i-2]=='0' && x[i-1]=='0' && x[i]=='0') a[p]='0';
            }
        }

        else if (b%4==3)
        {
            for (i=b-1;i>=0;i-=4,p++)
            {
                if (i==2 && x[i-2]=='1' && x[i-1]=='1' && x[i]=='1') a[p]='7';
                else if (i==2 && x[i-2]=='1' && x[i-1]=='1' && x[i]=='0') a[p]='6';
                else if (i==2 && x[i-2]=='1' && x[i-1]=='0' && x[i]=='1') a[p]='5';
                else if (i==2 && x[i-2]=='1' && x[i-1]=='0' && x[i]=='0') a[p]='4';
                else if (i==2 && x[i-2]=='0' && x[i-1]=='1' && x[i]=='1') a[p]='3';
                else if (i==2 && x[i-2]=='0' && x[i-1]=='1' && x[i]=='0') a[p]='2';
                else if (i==2 && x[i-2]=='0' && x[i-1]=='0' && x[i]=='1') a[p]='1';
                else if (x[i-3]=='1' && x[i-2]=='1' && x[i-1]=='1' && x[i]=='1') a[p]='F';
                else if (x[i-3]=='1' && x[i-2]=='1' && x[i-1]=='1' && x[i]=='0') a[p]='E';
                else if (x[i-3]=='1' && x[i-2]=='1' && x[i-1]=='0' && x[i]=='1') a[p]='D';
                else if (x[i-3]=='1' && x[i-2]=='1' && x[i-1]=='0' && x[i]=='0') a[p]='C';
                else if (x[i-3]=='1' && x[i-2]=='0' && x[i-1]=='1' && x[i]=='1') a[p]='B';
                else if (x[i-3]=='1' && x[i-2]=='0' && x[i-1]=='1' && x[i]=='0') a[p]='A';
                else if (x[i-3]=='1' && x[i-2]=='0' && x[i-1]=='0' && x[i]=='1') a[p]='9';
                else if (x[i-3]=='1' && x[i-2]=='0' && x[i-1]=='0' && x[i]=='0') a[p]='8';
                else if (x[i-3]=='0' && x[i-2]=='1' && x[i-1]=='1' && x[i]=='1') a[p]='7';
                else if (x[i-3]=='0' && x[i-2]=='1' && x[i-1]=='1' && x[i]=='0') a[p]='6';
                else if (x[i-3]=='0' && x[i-2]=='1' && x[i-1]=='0' && x[i]=='1') a[p]='5';
                else if (x[i-3]=='0' && x[i-2]=='1' && x[i-1]=='0' && x[i]=='0') a[p]='4';
                else if (x[i-3]=='0' && x[i-2]=='0' && x[i-1]=='1' && x[i]=='1') a[p]='3';
                else if (x[i-3]=='0' && x[i-2]=='0' && x[i-1]=='1' && x[i]=='0') a[p]='2';
                else if (x[i-3]=='0' && x[i-2]=='0' && x[i-1]=='0' && x[i]=='1') a[p]='1';
                else if (x[i-3]=='0' && x[i-2]=='0' && x[i-1]=='0' && x[i]=='0') a[p]='0';
            }
        }




        for (i=0;i<p;i++) if (a[i]!='0') break;
        printf("\n    HeXadecimal = ");
        for (k=p-1;k>=i;k--) printf("%c",a[k]);
    }

    else if (ii==3)
    {
        q4:
        printf("\n    Please enter the Hexadecimal number: ");
        scanf("%s",&a);
        n=strlen (a);
        for (i=0;i<n;i++)
        {
            if ((a[i]>'9' || a[i]<'0') && (a[i]>'F' || a[i]<'A'))
            {
                printf ("     Invalid Hexadecimal number.");
                goto q4;
            }
        }
        for (i=0;i<n;i++) if (a[i]!='0') break;
        for (b=0;i<n;i++,b+=4)
        {
            if (a[i]=='0')
            {
                x[b]='0';
                x[b+1]='0';
                x[b+2]='0';
                x[b+3]='0';
            }
            else if (a[i]=='1')
            {
                x[b]='0';
                x[b+1]='0';
                x[b+2]='0';
                x[b+3]='1';
            }
            else if (a[i]=='2')
            {
                x[b]='0';
                x[b+1]='0';
                x[b+2]='1';
                x[b+3]='0';
            }
            else if (a[i]=='3')
            {
                x[b]='0';
                x[b+1]='0';
                x[b+2]='1';
                x[b+3]='1';
            }
            else if (a[i]=='4')
            {
                x[b]='0';
                x[b+1]='1';
                x[b+2]='0';
                x[b+3]='0';
            }
            else if (a[i]=='5')
            {
                x[b]='0';
                x[b+1]='1';
                x[b+2]='0';
                x[b+3]='1';
            }
            else if (a[i]=='6')
            {
                x[b]='0';
                x[b+1]='1';
                x[b+2]='1';
                x[b+3]='0';
            }
            else if (a[i]=='7')
            {
                x[b]='0';
                x[b+1]='1';
                x[b+2]='1';
                x[b+3]='1';
            }
            else if (a[i]=='8')
            {
                x[b]='1';
                x[b+1]='0';
                x[b+2]='0';
                x[b+3]='0';
            }
            else if (a[i]=='9')
            {
                x[b]='1';
                x[b+1]='0';
                x[b+2]='0';
                x[b+3]='1';
            }
            else if (a[i]=='A')
            {
                x[b]='1';
                x[b+1]='0';
                x[b+2]='1';
                x[b+3]='0';
            }
            else if (a[i]=='B')
            {
                x[b]='1';
                x[b+1]='0';
                x[b+2]='1';
                x[b+3]='1';
            }
            else if (a[i]=='C')
            {
                x[b]='1';
                x[b+1]='1';
                x[b+2]='0';
                x[b+3]='0';
            }
            else if (a[i]=='D')
            {
                x[b]='1';
                x[b+1]='1';
                x[b+2]='0';
                x[b+3]='1';
            }
            else if (a[i]=='E')
            {
                x[b]='1';
                x[b+1]='1';
                x[b+2]='1';
                x[b+3]='0';
            }
            else if (a[i]=='F')
            {
                x[b]='1';
                x[b+1]='1';
                x[b+2]='1';
                x[b+3]='1';
            }
        }
        printf ("\n    Binary = ");
        for (i=0;i<b;i++) if (x[i]!='0') break;
        for (;i<b;i++) printf ("%c",x[i]);

        n=b;
        b=0;
        if (n%3==0)
        {
            for (i=n-1;i>=0;i-=3,b++)
            {
                if (x[i-2]=='1' && x[i-1]=='1' && x[i]=='1') a[b]='7';
                else if (x[i-2]=='1' && x[i-1]=='1' && x[i]=='0') a[b]='6';
                else if (x[i-2]=='1' && x[i-1]=='0' && x[i]=='1') a[b]='5';
                else if (x[i-2]=='1' && x[i-1]=='0' && x[i]=='0') a[b]='4';
                else if (x[i-2]=='0' && x[i-1]=='1' && x[i]=='1') a[b]='3';
                else if (x[i-2]=='0' && x[i-1]=='1' && x[i]=='0') a[b]='2';
                else if (x[i-2]=='0' && x[i-1]=='0' && x[i]=='1') a[b]='1';
                else if (x[i-2]=='0' && x[i-1]=='0' && x[i]=='0') a[b]='0';
            }
        }
        else if (n%3==1)
        {
            for (i=n-1;i>=0;i-=3,b++)
            {
                if (i==0 && x[i]=='1') a[b]='1';
                else if (x[i-2]=='1' && x[i-1]=='1' && x[i]=='1') a[b]='7';
                else if (x[i-2]=='1' && x[i-1]=='1' && x[i]=='0') a[b]='6';
                else if (x[i-2]=='1' && x[i-1]=='0' && x[i]=='1') a[b]='5';
                else if (x[i-2]=='1' && x[i-1]=='0' && x[i]=='0') a[b]='4';
                else if (x[i-2]=='0' && x[i-1]=='1' && x[i]=='1') a[b]='3';
                else if (x[i-2]=='0' && x[i-1]=='1' && x[i]=='0') a[b]='2';
                else if (x[i-2]=='0' && x[i-1]=='0' && x[i]=='1') a[b]='1';
                else if (x[i-2]=='0' && x[i-1]=='0' && x[i]=='0') a[b]='0';
            }
        }
        else if (n%3==2)
        {
            for (i=n-1;i>=0;i-=3,b++)
            {
                if (i<2 && x[i-1]=='1' && x[i]=='1') a[b]='3';
                else if (i<2 && x[i-1]=='1' && x[i]=='0') a[b]='2';
                else if (i<2 && x[i-1]=='0' && x[i]=='1') a[b]='1';
                else if (x[i-2]=='1' && x[i-1]=='1' && x[i]=='1') a[b]='7';
                else if (x[i-2]=='1' && x[i-1]=='1' && x[i]=='0') a[b]='6';
                else if (x[i-2]=='1' && x[i-1]=='0' && x[i]=='1') a[b]='5';
                else if (x[i-2]=='1' && x[i-1]=='0' && x[i]=='0') a[b]='4';
                else if (x[i-2]=='0' && x[i-1]=='1' && x[i]=='1') a[b]='3';
                else if (x[i-2]=='0' && x[i-1]=='1' && x[i]=='0') a[b]='2';
                else if (x[i-2]=='0' && x[i-1]=='0' && x[i]=='1') a[b]='1';
                else if (x[i-2]=='0' && x[i-1]=='0' && x[i]=='0') a[b]='0';
            }
        }
        printf("\n    Octal = ");
        for (i=0;i<b;i++) if (a[i]!='0') break;
        for (k=b-1;k>=i;k--) printf("%c",a[k]);
    }
    else
    {
        printf ("\n    Invalid selection.");
        goto nm34;
    }

}












