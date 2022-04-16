///                        Om ShantiHari

///                        Sujan Mridha
///                        Exam Roll: CSE007
///                        Session: First Year First
///                        Dept. of CSE
///                        University of Barishal

#include <stdio.h>
#include <string.h>
#include <math.h>
#define lli long long int
lli soin (char a[]);
lli syryl ();
lli gcdall ();
lli lcmall ();
lli gcd (lli x, lli y);
lli lcm (lli x, lli y);
lli eq1 ();
lli eq2 ();
lli eq3 ();
lli tringle ();
lli quadrangle ();
lli set ();
lli uset ();
lli iset ();
lli dset ();
lli cset ();
lli nmcnv ();
lli nmcnv1 ();
lli nmcnv2 ();
lli nmcnv3 ();
lli somntm ();
lli gntmms ();
lli somntms ();
lli gntm ();
lli inck ();
lli matoi(char a[]);
lli ss(char a[])
{
    int i=0,l,s=0;
    l=strlen (a);
    for (i=0;i<l;i++) if (a[i]<'0' || a[i]>'1') return 0;
    return 1;
}
lli ss1(char a[])
{
    int i=0,l,s=0;
    l=strlen (a);
    for (i=0;i<l;i++) if (a[i]<'0' || a[i]>'7') return 0;
    return 1;
}
lli ss2(char a[])
{
    int i=0,l,s=0;
    l=strlen (a);
    for (i=0;i<l;i++)
    {
        if (a[i]>='0' && a[i]<='9') return 1;
        else if (a[i]>='A' && a[i]<='F') return 1;
    }
    return 0;
}
int main ()
{
    lli ii;
    FILE *sm,*s1,*s2,*s3,*s4;
    double s;
    char c,ss1,ss2,ss3,ss4;
    sm=fopen("mydetails.txt","r");
    while ((c=getc(sm))!=EOF) printf("%c",c);
    fclose(sm);
    printf("  Main Menu:\n");
    mainmenu:
    printf("\n  1. Arithmetic and Algebra.");
    printf("\n  2. Solutions of Equations .");
    printf("\n  3. Mensuration.");
    printf("\n  4. Set.");
    printf("\n  5. Number Conversion.");
    printf("\n  6. Progression.");

    printf("\n\n  Please enter an index from above : ");
    ii=inck();
    system("cls");
    if (ii==1)
    {
        aral:
        printf("\n\n    1. Simplification of the operations '+', '-', '/' and '*'.");
        printf("\n    2. Greatest Common Divisor and Lowest Common Multiplier.");
        printf("\n\n    Please enter an index from above : ");
        ii=inck();
        system("cls");
        if (ii==1)
        {
            sorol:
            syryl ();
            srl:
            printf("\n\n\n 1. Do this calculation again.");
            printf("\n 2. Go to the previous menu.");
            printf("\n 3. Go to the main menu.");
            printf("\n 4. End the program.");
            printf("\n\n Please enter an index from above : ");
            ii=inck();
            system("cls");
            if (ii==1)  goto sorol;
            else if (ii==2) goto aral;
            else if (ii==3)  goto mainmenu;
            else if (ii==4) goto rtrn0;
            else
            {
                printf ("\n    Invalid selection.\n");
                goto srl;
            }
        }

        else if (ii==2)
        {
            gcdlcm:
            printf("\n    1. Greatest Common Divisor.");
            printf("\n    2. Lowest Common Multiplier.");
            printf("\n\n    3. Go to the previous menu.");
            printf("\n    4. Go to the main menu.");
            printf("\n    5. End the program.");
            printf("\n\n    Please enter an index from above : ");
            ii=inck();
            //scanf ("%lld",&ii);
            system("cls");
            if (ii==3) goto aral;
            else if (ii==4) goto mainmenu;
            else if (ii==5) goto rtrn0;
            else if (ii==1)
            {
                gcdgoto:
                gcdall ();
                gcdgoton:
                printf("\n\n\n       1. Find out Greatest Common Divisor again.");
                printf("\n       2. Go to the previous menu.");
                printf("\n       3. Go to the main menu.");
                printf("\n       4. End the program.");
                printf("\n\n       Please enter an index from above : ");
                ii=inck();
                //scanf ("%lld",&ii);
                system("cls");
                if (ii==1)  goto gcdgoto;
                else if (ii==2) goto gcdlcm;
                else if (ii==3) goto mainmenu;
                else if (ii==4) goto rtrn0;
                else
                {
                    printf ("\n    Invalid selection.\n");
                    goto gcdgoton;
                }
            }
            else if (ii==2)
            {
                lcmgoto:
                lcmall ();
                lcmgotol:
                printf("\n\n\n       1. Find out Lowest Common Multiplier again.");
                printf("\n       2. Go to the previous menu.");
                printf("\n       3. Go to the main menu.");
                printf("\n       4. End the program.");
                printf("\n\n       Please enter an index from above : ");
                ii=inck();
                //scanf ("%lld",&ii);
                system("cls");
                if (ii==1)  goto lcmgoto;
                else if (ii==2) goto gcdlcm;
                else if (ii==3) goto mainmenu;
                else if (ii==4) goto rtrn0;
                else
                {
                    printf ("\n    Invalid selection.\n");
                    goto lcmgotol;
                }
            }
            else
            {
                printf ("\n    Invalid selection.\n");
                goto gcdlcm;
            }
        }
        else
        {
            printf ("\n    Invalid selection.\n");
            goto aral;
        }
    }
    else if (ii==2)
    {
        seq:
        printf ("\n     1. Solution of the 'Linear equation' containing 'One variable'.");
        printf ("\n     2. Solution of the 'Linear equation' containing 'Two variables'.");
        printf ("\n     3. Solution of the 'Quadratic equation' containing 'One variables'.\n");
        printf("\n      Please enter an index from above : ");
        ii=inck();
        //scanf ("%lld",&ii);
        system("cls");
        if (ii==1)
        {
            eq111:
            eq1 ();
            eq112:
            printf("\n\n\n      1. Find out the solution again.");
            printf("\n      2. Go to the previous menu.");
            printf("\n      3. Go to the main menu.");
            printf("\n      4. End the program.");
            printf("\n\n      Please enter an index from above : ");
            ii=inck();
            //scanf ("%lld",&ii);
            system("cls");
            if (ii==1)  goto eq111;
            else if (ii==2) goto seq;
            else if (ii==3) goto mainmenu;
            else if (ii==4) goto rtrn0;
            else
            {
                printf ("\n    Invalid selection.\n");
                goto eq112;
            }
        }
        if (ii==2)
        {
            gteq2:
            eq2 ();
            gteq3m:
            printf("\n\n\n      1. Find out the solution again.");
            printf("\n      2. Go to the previous menu.");
            printf("\n      3. Go to the main menu.");
            printf("\n      4. End the program.");
            printf("\n\n      Please enter an index from above : ");
            ii=inck();
            //scanf ("%lld",&ii);
            system("cls");
            if (ii==1)  goto gteq2;
            else if (ii==2) goto seq;
            else if (ii==3) goto mainmenu;
            else if (ii==4) goto rtrn0;
            else
            {
                printf ("\n    Invalid selection.\n");
                goto gteq3m;
            }
        }
        if (ii==3)
        {

            gteq3:
            eq3 ();
            gteq3s:
            printf("\n\n\n      1. Find out the solution again.");
            printf("\n      2. Go to the previous menu.");
            printf("\n      3. Go to the main menu.");
            printf("\n      4. End the program.");
            printf("\n\n      Please enter an index from above : ");
            ii=inck();
            //scanf ("%lld",&ii);
            system("cls");
            if (ii==1)  goto gteq3;
            else if (ii==2) goto seq;
            else if (ii==3) goto mainmenu;
            else if (ii==4) goto rtrn0;
            else
            {
                printf ("\n    Invalid selection.\n");
                goto gteq3s;
            }
        }
        else
        {
            printf ("\n    Invalid selection.\n");
            goto seq;
        }
    }
    else if (ii==3)
    {
        aa1:
        system("cls");
        printf ("\n  1. Area of Triangle.");
        printf ("\n  2. Area of Quadralateral.");
        printf ("\n  3. Area of Circle.");



        printf("\n\n      Please enter an index from above : ");
        ii=inck();
        //scanf ("%lld",&ii);
        if (ii==1)
        {
            aa2:
            tringle ();
            aa3:
            printf("\n\n\n      1. Enter this section again.");
            printf("\n      2. Go to the previous menu.");
            printf("\n      3. Go to the main menu.");
            printf("\n      4. End the program.");
            printf("\n\n      Please enter an index from above : ");
            ii=inck();
            //scanf ("%lld",&ii);
            system("cls");
            if (ii==1)  goto aa2;
            else if (ii==2) goto aa1;
            else if (ii==3) goto mainmenu;
            else if (ii==4) goto rtrn0;
            else
            {
                printf ("\n    Invalid selection.\n");
                goto aa3;
            }
        }
        else if (ii==2)
        {
            aa4:
            quadrangle ();
            aa5:
            printf("\n\n\n      1. Enter this section again.");
            printf("\n      2. Go to the previous menu.");
            printf("\n      3. Go to the main menu.");
            printf("\n      4. End the program.");
            printf("\n\n      Please enter an index from above : ");
            ii=inck();
            //scanf ("%lld",&ii);
            system("cls");
            if (ii==1)  goto aa4;
            else if (ii==2) goto aa1;
            else if (ii==3) goto mainmenu;
            else if (ii==4) goto rtrn0;
            else
            {
                printf ("\n    Invalid selection.\n");
                goto aa5;
            }
        }
        else if (ii==3)
        {
            ccle:
            printf ("\n   Circle.");
            printf("\n   Please enter the radius of a circle (float) : ");
            ii=inck();
            //scanf ("%lf",&s);
            system ("cls");
            printf ("\n    The determined Area of the circle = %lf\n",(22.0/7.0)*s*s*1.0);
            ccle1:
            printf("\n\n\n    1. Do this calculation again.");
            printf("\n    2. Go to the previous menu.");
            printf("\n    3. Go to the main menu.");
            printf("\n    4. End the program.");
            printf("\n   Please enter an index from above : ");
            ii=inck();
            //scanf ("%lld",&ii);
            if (ii==1) goto ccle;
            else if (ii==2) goto aa1;
            else if (ii==3) goto mainmenu;
            else if (ii==4) goto rtrn0;
            else
            {
                printf ("\n   Invalid selection.\n");
                goto ccle1;
            }
        }
        else
        {
            printf ("\n    Invalid selection.\n");
            goto aa1;
        }
    }

    else if (ii==4)
    {
        set13:
        set ();
        set14:
        printf("\n\n\n    1. Enter this section again.");
        printf("\n    2. Go to the main menu.");
        printf("\n    3. End the program.");
        printf("\n\n    Please enter an index from above : ");
        ii=inck();
        //scanf ("%lld",&ii);
        system("cls");
        if (ii==1)  goto set13;
        else if (ii==2) goto mainmenu;
        else if (ii==3) goto rtrn0;
        else
        {
            printf ("\n    Invalid selection.\n");
            goto set14;
        }
    }


    else if (ii==5)
    {
        set130:
        nmcnv ();
        set140:
        printf("\n\n\n    1. Enter this section again.");
        printf("\n    2. Go to the main menu.");
        printf("\n    3. End the program.");
        printf("\n\n    Please enter an index from above : ");
        ii=inck();
        //scanf ("%lld",&ii);
        system("cls");
        if (ii==1)  goto set130;
        else if (ii==2) goto mainmenu;
        else if (ii==3) goto rtrn0;
        else
        {
            printf ("\n    Invalid selection.\n");
            goto set140;
        }
    }
    else if (ii==6)
    {
        m1:
        printf ("\n   1. Arithmetic Progression.");
        printf ("\n   2. Geometric progression.");
        printf("\n    3. Go to the main menu.");
        printf("\n\n    Please enter an index from above : ");
        ii=inck();
        //scanf ("%lld",&ii);
        system ("cls");
        if (ii==1)
        {
            m4:
            printf ("\n    1. N'th terms.");
            printf ("\n    2. Sum of the first N terms.");
            printf("\n    3. Go to the previous menu.");
            printf("\n\n     Please enter an index from above : ");
            ii=inck();
            //scanf ("%lld",&ii);
            system ("cls");
            if (ii==1)
            {
                m2:
                somntm ();
                m3:
                printf("\n\n    1. Do this calculation again.");
                printf("\n    2. Go to the previous menu.");
                printf("\n\n    Please enter an index from above : ");
                ii=inck();
                //scanf ("%lld",&ii);
                system ("cls");
                if (ii==1) goto m2;
                else if (ii==2) goto m4;
                else
                {
                    printf ("\    Invalid selection.");
                    goto m3;
                }
            }
            else if (ii==2)
            {
                m5:
                somntms ();
                m6:
                printf("\n\n    1. Do this calculation again.");
                printf("\n    2. Go to the previous menu.");
                printf("\n\n    Please enter an index from above : ");
                ii=inck();
                //scanf ("%lld",&ii);
                system ("cls");
                if (ii==1) goto m5;
                else if (ii==2) goto m4;
                else
                {
                    printf ("\    Invalid selection.");
                    goto m3;
                }
            }
            else if (ii==3) goto m1;
            else
            {
                printf ("\    Invalid selection.");
                goto m4;
            }

        }
        else if (ii==2)
        {
            m7:
            printf ("\n    1. N'th terms.");
            printf ("\n    2. Sum of the first N terms.");
            printf("\n    3. Go to the previous menu.");
            printf("\n\n     Please enter an index from above : ");
            ii=inck();
            //scanf ("%lld",&ii);
            system ("cls");
            if (ii==1)
            {
                m8:
                gntm ();
                m09:
                printf("\n\n    1. Do this calculation again.");
                printf("\n    2. Go to the previous menu.");
                printf("\n\n    Please enter an index from above : ");
                ii=inck();
                //scanf ("%lld",&ii);
                system ("cls");
                if (ii==1) goto m8;
                else if (ii==2) goto m7;
                else
                {
                    printf ("\    Invalid selection.");
                    goto m09;
                }
            }
            else if (ii==2)
            {
                m10:
                gntmms ();
                m11:
                printf("\n\n    1. Do this calculation again.");
                printf("\n    2. Go to the previous menu.");
                printf("\n\n    Please enter an index from above : ");
                ii=inck();
                //scanf ("%lld",&ii);
                system ("cls");
                if (ii==1) goto m10;
                else if (ii==2) goto m7;
                else
                {
                    printf ("\    Invalid selection.");
                    goto m11;
                }
            }
            else if (ii==3) goto m1;
            else
            {
                printf ("\    Invalid selection.");
                goto m7;
            }

        }
        else if (ii==3) goto mainmenu;
        else
        {
            printf ("\n   Invalid selection.");
            goto m1;
        }
    }
    else
    {
        printf ("\n    Invalid selection.\n");
        goto mainmenu;
    }
    system("cls");
    rtrn0: printf ("\n  Thank You.\n");
    return 0;
}


lli soin (char a[200000])
{
    int i=0,l;
    l=strlen (a);
    if (a[0]=='-') i=1;
    for (;i<l;i++) if (a[i]>'9' || a[i]<'0') return 0;
    return 1;
}

lli inck ()
{
    int i,l;
    char a[500];
    scanf("%s",a);
    return a[0]-48;
}


lli gcdall ()
{
    lli i,ii,l,n,x,a[100000];
    char s[3984];
    printf("      How many numbers do you want to take imput?\n      Please enter: ");
    l=2;
    a1:
    if (l==0) printf ("\n    Invalid Input. Please enter again.\n");
    scanf ("%s",s);
    l=soin(s);
    if (l==0) goto a1;
    n=atoi(s);

    //scanf ("%lld",&n);
    printf("\n      Now enter the space saperated integers: ");
    for (i=0;i<n;i++)
    {
        //scanf ("%lld",&a[i]);
        l=2;
        a2:
        if (l==0) printf ("\n    Invalid Input. Please enter again.\n");
        scanf ("%s",s);
        l=soin(s);
        if (l==0) goto a2;
        a[i]=atoi(s);
    }
    i=1;
    while (i<n)
    {
        a[i]=gcd (a[i-1],a[i]);
        i++;
    }
    printf ("\n      Greatest Common Divisor = %lld\n",a[i-1]);
}

lli gcd (lli x, lli y)
{
    lli v,z;
    if (x>y)
	{
		v=x;
		x=y;
		y=v;
	}
	if (x==0) return y;
	while (1)
	{
		z=y%x;
		if (z==0) break;
		y=x;
		x=z;
	}
	return x;
}

lli lcmall ()
{
    lli i,ii,n,l,x,a[100000];
    char s[299999];
    printf("      How many numbers do you want to take?\n      Please enter: ");
    //scanf ("%lld",&n);
    l=2;
    a1:
    if (l==0) printf ("\n    Invalid Input. Please enter again.\n");
    scanf ("%s",s);
    l=soin(s);
    if (l==0) goto a1;
    n=atoi(s);
    printf("\n      Now enter the space saperated integers: ");
    for (i=0;i<n;i++)
    {
        //scanf ("%lld",&a[i]);
        l=2;
        a2:
        if (l==0) printf ("\n    Invalid Input. Please enter again.\n");
        scanf ("%s",s);
        l=soin(s);
        if (l==0) goto a2;
        a[i]=atoi(s);
    }
    i=1;
    while (i<n)
    {
        a[i]=lcm (a[i-1],a[i]);
        i++;
    }
    printf ("%\n      Lowest Common Multiplier = %lld\n",a[i-1]);
    return 0;
}
lli lcm (lli x, lli y)
{
    lli i,v,z;
    if (x>y)
	{
		v=x;
		x=y;
		y=v;
	}
	if (x==0) return x;
	v=y;
	while (y%x!=0) y+=v;
	return y;
}

lli matoi(char a[])
{
    lli i=0,l,p=0;
    l=strlen (a);
    for (i=1;i<l;i++)
    {
        p+=(a[i]-48);
        if (l-i>=2) p*=10;
    }
    return p;
}
lli eq1 ()
{
    lli i,l,j,a,aa,cc,c,n,d;
    char s[768];
    printf ("\n     The standard Linear equation containing one variable is ax+c=0.");
    printf ("\n     Please enter the coefficient of x, (a!=0) a=");
    //scanf ("%lld",&a);
    l=2;
    a1:
    if (l==0) printf ("\n    Invalid Input. Please enter again.\n");
    scanf ("%s",s);
    l=soin(s);
    if (l==0) goto a1;
    if (s[0]=='-') {a=matoi(s);a*=-1;}
    else a=atoi(s);
    printf ("\n     Please enter the cnstant number, c=");
    //scanf ("%lld",&c);
    l=2;
    a2:
    if (l==0) printf ("\n    Invalid Input. Please enter again.\n");
    scanf ("%s",s);
    l=soin(s);
    if (l==0) goto a2;
    //c=atoi(s);
    if (s[0]=='-') {c=matoi(s);c*=-1;}
    else c=atoi(s);
    printf ("\n     Your entered equation : %lldx",a);
    if (c<0) printf ("%lld=0",c);
    else if (c>0) printf ("+%lld=0",c);
    c*=-1;
    aa=abs(a);
    cc=abs(c);
    d= gcd (aa,cc);
    aa/=d;
    cc/=d;
    printf ("\n     The determinated solution: x=");
    if (a<0 && c>0) printf("-");
    else if (a>0 && c<0) printf("-");
    if (aa==1) printf("%lld.\n",cc);
    else printf ("%lld/%lld.\n",cc,aa);
}


lli eq2 ()
{
    lli l,a1,b1,c1,a2,b2,c2,b1c2,b2c1,c1a2,c2a1,a1b2,a2b1,xh,xl,yh,yl,xmp=1,ymp=1,gcdx,gcdy;
    char s[1000];
    jaaaan:
    printf ("\n      ax+by+c=0 is the standard Linear equation containing two variable.");
    printf ("\n\n      For the first equation, please enter :");
    printf ("\n          The coefficient of x, a1=");
    //scanf ("%lld",&a1);

    l=2;
    a2:
    if (l==0) printf ("\n    Invalid Input. Please enter again.\n");
    scanf ("%s",s);
    l=soin(s);
    if (l==0) goto a2;
    if (s[0]=='-') {a1=matoi(s);a1*=-1;}
    else a1=atoi(s);

    printf ("          The coefficient of y, b1=");
    //scanf ("%lld",&b1);

    l=2;
    a3:
    if (l==0) printf ("\n    Invalid Input. Please enter again.\n");
    scanf ("%s",s);
    l=soin(s);
    if (l==0) goto a3;
    if (s[0]=='-') {b1=matoi(s);b1*=-1;}
    else b1=atoi(s);

    printf ("          The constant number, c1=");
    //scanf ("%lld",&c1);

    l=2;
    a4:
    if (l==0) printf ("\n    Invalid Input. Please enter again.\n");
    scanf ("%s",s);
    l=soin(s);
    if (l==0) goto a4;
    if (s[0]=='-') {c1=matoi(s);c1*=-1;}
    else c1=atoi(s);

    printf ("\n     For the second equation, please enter :");
    printf ("\n          The coefficient of x, a2=");
    //scanf ("%lld",&a2);

    l=2;
    a5:
    if (l==0) printf ("\n    Invalid Input. Please enter again.\n");
    scanf ("%s",s);
    l=soin(s);
    if (l==0) goto a5;
    if (s[0]=='-') {a2=matoi(s);a2*=-1;}
    else a2=atoi(s);

    printf ("          The coefficient of y, b2=");
    //scanf ("%lld",&b2);

    l=2;
    a6:
    if (l==0) printf ("\n    Invalid Input. Please enter again.\n");
    scanf ("%s",s);
    l=soin(s);
    if (l==0) goto a6;
    if (s[0]=='-') {b2=matoi(s);b2*=-1;}
    else b2=atoi(s);

    printf ("          The constant number, c2=");
    //scanf ("%lld",&c2);

    l=2;
    a7:
    if (l==0) printf ("\n    Invalid Input. Please enter again.\n");
    scanf ("%s",s);
    l=soin(s);
    if (l==0) goto a7;
    if (s[0]=='-') {c2=matoi(s);c2*=-1;}
    else c2=atoi(s);


    system("cls");

    printf ("\n\n     You have entered the following equations :\n          ");
    if (a1<0 && b1>0)
    {
        printf("%lldy%lldx",b1,a1);
        if (c1>0) printf ("+");
        if (c1!=0) printf ("%lld",c1);
        printf ("=0 ------- (1)\n          ");
    }
    else
    {
        printf("%lldx",a1);
        if (b1>0) printf ("+");
        printf("%lldy",b1);
        if (c1>0) printf ("+");
        if (c1!=0) printf ("%lld=0 ------- (1)\n          ",c1);
        else printf ("=0 ------- (1)\n          ");
    }
    if (a2<0 && b2>0)
    {
        printf("%lldy%lldx",b2,a2);
        if (c2>0) printf ("+");
        if (c2!=0) printf ("%lld",c2);
        printf ("=0 ------- (1)\n          ");
    }
    else
    {
        printf("%lldx",a2);
        if (b2>0) printf ("+");
        printf("%lldy",b2);
        if (c2>0) printf ("+");
        if (c2!=0) printf ("%lld=0 ------- (2)\n          ",c2);
        else printf ("=0 ------- (2)\n          ");
    }
    b1c2=b1*c2;
    b2c1=b2*c1;
    c1a2=c1*a2;
    c2a1=c2*a1;
    a1b2=a1*b2;
    a2b1=a2*b1;
    xl=b1c2-b2c1;
    xh=a1b2-a2b1;
    yl=c1a2-c2a1;
    yh=a1b2-a2b1;
    if (xh==0 || yh==0)
    {
        printf ("\n      Unable to solve these Equations \n      because of inability to divide by zero.\n");
        printf ("\n      Please enter another equations.");
        goto jaaaan;
    }
    ///printf ("\n   xl=%lld, xh=%lld, yl=%lld, yh=%lld\n",xl,xh,yl,yh);
    if (xl>0 && xh<0) xmp=-1;
    else if (xl<0 && xh>0) xmp=-1;
    if (yl>0 && yh<0) ymp=-1;
    else if (yl<0 && yh>0) ymp=-1;
    xl=abs(xl);
    xh=abs(xh);
    yl=abs(yl);
    yh=abs(yh);
    ///printf ("\n   xl=%lld, xh=%lld, yl=%lld, yh=%lld\n",xl,xh,yl,yh);
    gcdx=gcd (xl,xh);
    gcdy=gcd (yl,yh);
    ///printf ("   gcdx=%lld, gcdy=%lld\n",gcdx,gcdy);
    xl/=gcdx;
    xh/=gcdx;
    yl/=gcdy;
    yh/=gcdy;
    ///printf ("\n   xl=%lld, xh=%lld, yl=%lld, yh=%lld\n",xl,xh,yl,yh);
    printf ("\n          The determinated solution : x=");
    if (xmp==-1) printf ("-");
    if (xh==1) printf ("%lld.",xl);
    else printf ("%lld/%lld",xl,xh);
    printf ("; y=");
    if (ymp==-1) printf ("-");
    if (yh==1) printf ("%lld.",yl);
    else printf ("%lld/%lld.\n",yl,yh);
}

lli eq3 ()
{
    lli a,b,c,l,x,xmp,xpp;
    double xx,xm,xp;
    char s[1000];
    ssss:
    printf ("\n          ax*x+bx+c=0 is the standard Linear equation containing one variable.");
    printf ("\n          The coefficient of x*x, (a!=0) a=");
    //scanf ("%lld",&a);

    l=2;
    a1:
    if (l==0) printf ("\n    Invalid Input. Please enter again.\n");
    scanf ("%s",s);
    l=soin(s);
    if (l==0) goto a1;
    if (s[0]=='-') {a=matoi(s);a*=-1;}
    else a=atoi(s);

    printf ("          The coefficient of x, b=");
    //scanf ("%lld",&b);

    l=2;
    a5:
    if (l==0) printf ("\n    Invalid Input. Please enter again.\n");
    scanf ("%s",s);
    l=soin(s);
    if (l==0) goto a5;
    if (s[0]=='-') {b=matoi(s);b*=-1;}
    else b=atoi(s);

    printf ("          The constant number, c=");
    //scanf ("%lld",&c);

    l=2;
    a2:
    if (l==0) printf ("\n    Invalid Input. Please enter again.\n");
    scanf ("%s",s);
    l=soin(s);
    if (l==0) goto a2;
    if (s[0]=='-') {c=matoi(s);c*=-1;}
    else c=atoi(s);

    if (a>0)
    {
        printf ("\n      You have entered the equation: ");
        printf ("%lldx*x",a);
        if (b>0) printf ("+%lldx",b);
        else if (b<0) printf ("%lldx",b);
        if (c>0) printf ("+%lld",c);
        else if (c<0) printf ("%lld",c);
    }
    else if (a<0)
    {
        printf ("\n      You have entered the equation: ");
        printf ("%lldx*x",a*-1);
        if (b>0) printf ("%lldx",b*-1);
        else if (b<0) printf ("%+lldx",b*-1);
        if (c>0) printf ("%lld",c*-1);
        else if (c<0) printf ("%+lld",c*-1);
    }
    else
    {
        system ("cls");
        printf ("\n      You have entered a invalid equation.");
        goto ssss;
    }
    printf("=0\n");
    x=b*b-4*a*c;
    if (x<0)
    {
        a=a*2;
        b=b*(-1);
        printf ("\n      The determinated solution: x = (%lld-square_root(%lld))/%lld, (%lld+square_root(%lld))/%lld.\n",b,x,a,b,x,a);
    }
    else
    {
        xx = sqrt (x);
        a=a*2;
        b=b*(-1);
        ///printf ("%lld, %lld\n",a,b);
        ///printf ("%ld, %lf\n",x,xx);
        printf ("\n      The determinated solution: x = ");
        xm=(b*1.0-xx)/(a*1.0);
        xp=(b*1.0+xx)/(a*1.0);
        xmp=xm;
        xpp=xp;
        if (xmp!=xm)
        {
            printf ("(%lld-square_root(%lld))/%lld, (%lld+square_root(%lld))/%lld.\n                             or, x = ",b,x,a,b,x,a);
        }
        if (xm-xmp==0) printf ("%lld, ",xmp);
        else printf ("%lf, ",xm);
        if (xp-xpp==0) printf ("%lld.\n",xpp);
        else printf ("%lf.\n",xp);
    }
    return 0;
}

lli syryl ()
{
    lli ii,b[100000],p,q,i,r,c,z,po,n,s,j,h;
    char a[1000];
    printf ("    The Algebric expression must be bounded with the 'First bracket'.\n    Example:\n     (267*12+34/2)\n     (4+2-34*5) etc.\n\n       ");
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


lli tringle ()
{
    lli ii;
    double s,a,b,c,h;
    trn2:
    printf ("\n   1. Equiangular Triangle."); ///somokoni
    printf ("\n   2. Equilateral Triangle."); ///somobahu
    printf ("\n   3. Isosceles Triangle."); ///somodwibahu
    printf ("\n   4. Scalene Triangle."); ///bishombahu
    printf ("\n\n   5. End this section."); ///bishombahu
    printf("\n   Please enter an index from above : ");
    ii=inck ();
    //scanf ("%lld",&ii);
    system ("cls");
    if (ii==1)
    {
        trn1:
        printf ("\n    Equiangular Triangle.");
        printf ("\n    Please enter,\n    The height (float) = ");
        scanf ("%lf",&a);
        printf ("    The base (float) = ");
        scanf ("%lf",&b);
        system ("cls");
        printf ("\n    The determined Area = %lf\n",(a*b)/2.0);
        trn3:
        printf("\n\n\n 1. Do this calculation again.");
        printf("\n 2. Go to the previous menu.");
        printf("\n   Please enter an index from above : ");
        scanf ("%lld",&ii);
        if (ii==1) goto trn1;
        else if (ii==2) goto trn2;
        else
        {
            printf ("\n   Invalid selection.\n");
            goto trn3;
        }
    }
    if (ii==2)
    {
        trn4:
        printf ("\n    Equilateral Triangle.");
        printf ("\n    Please enter the side (float) = ");
        scanf ("%lf",&a);
        b=sqrt(3)/4.0;
        system ("cls");
        printf ("\n    The determined Area = %lf\n",b*a*a);
        trn5:
        printf("\n\n\n 1. Do this calculation again.");
        printf("\n 2. Go to the previous menu.");
        printf("\n   Please enter an index from above : ");
        ii=inck ();
        //scanf ("%lld",&ii);
        if (ii==1) goto trn4;
        else if (ii==2) goto trn2;
        else
        {
            printf ("\n   Invalid selection.\n");
            goto trn5;
        }
    }
    if (ii==3)
    {
        trn6:
        printf ("\n    Isosceles Triangle.");
        printf ("\n    Please enter the equal side (float) = ");
        scanf ("%lf",&a);
        printf ("    Please enter the other side (float) = ");
        scanf ("%lf",&b);
        s=4*a*a-b*b;
        s=sqrt(s);
        s=s*(b/4.0);
        system ("cls");
        printf ("\n    The determined Area = %lf\n",s);
        trn7:
        printf("\n\n\n 1. Do this calculation again.");
        printf("\n 2. Go to the previous menu.");
        printf("\n   Please enter an index from above : ");
        ii=inck ();
        //scanf ("%lld",&ii);
        if (ii==1) goto trn6;
        else if (ii==2) goto trn2;
        else
        {
            printf ("\n   Invalid selection.\n");
            goto trn7;
        }
    }
    if (ii==4)
    {
        trn8:
        printf ("\n    Scalene Triangle.");
        printf ("\n    Please enter the three unequal sides (float).\n    a= ");
        scanf ("%lf",&a);
        printf ("    b= ");
        scanf ("%lf",&b);
        printf ("    c= ");
        scanf ("%lf",&c);
        s=(a+b+c)/2.0;
        s=sqrt(s*(s-a)*(s-b)*(s-c));
        system ("cls");
        printf ("\n    The determined Area = %lf\n",s);
        trn9:
        printf("\n\n\n 1. Do this calculation again.");
        printf("\n 2. Go to the previous menu.");
        printf("\n   Please enter an index from above : ");
        ii=inck ();
        //scanf ("%lld",&ii);
        if (ii==1) goto trn8;
        else if (ii==2) goto trn2;
        else
        {
            printf ("\n   Invalid selection.\n");
            goto trn9;
        }
    }
    else if (ii==5) return 0;
    else
    {
        printf ("\n   Invalid selection.\n");
        goto trn2;
    }
}

lli quadrangle ()
{
    lli ii,x,y,z;
    double s,a,b,c,h;
    trn12:
    printf ("\n   1. Square.");
    printf ("\n   2. Rectangle.");
    printf ("\n   3. Rhombus.");
    printf ("\n   4. Parallelogram.");
    printf ("\n   5. Trapezoid.");
    printf ("\n\n   6. End this section.");
    printf("\n\n   Please enter an index from above : ");
    ii=inck ();
    //scanf ("%lld",&ii);
    system ("cls");
    if (ii==1)
    {
        trn11:
        printf ("\n   Square.");
        printf("\n   Please enter the length of one side (float) : ");
        scanf ("%lf",&s);
        system ("cls");
        printf ("\n    The determined Area of Square = %lf\n",s*s);
        trn10:
        printf("\n\n\n 1. Do this calculation again.");
        printf("\n 2. Go to the previous menu.");
        printf("\n   Please enter an index from above : ");
        ii=inck ();
        //scanf ("%lld",&ii);
        if (ii==1) goto trn11;
        else if (ii==2) goto trn12;
        else
        {
            printf ("\n   Invalid selection.\n");
            goto trn10;
        }
    }
    if (ii==2)
    {
        trn13:
        printf ("\n   Rectangle.");
        printf("\n   Please enter the length of one side (float) : ");
        scanf ("%lf",&a);
        printf("\n   Please enter the length of perpendicular side (float) : ");
        scanf ("%lf",&b);
        system ("cls");
        printf ("\n    The determined Area of Rectangle = %lf\n",a*b);
        trn14:
        printf("\n\n\n 1. Do this calculation again.");
        printf("\n 2. Go to the previous menu.");
        printf("\n   Please enter an index from above : ");
        ii=inck ();
        //scanf ("%lld",&ii);
        if (ii==1) goto trn13;
        else if (ii==2) goto trn12;
        else
        {
            printf ("\n   Invalid selection.\n");
            goto trn14;
        }
    }
    if (ii==3)
    {
        trn15:
        printf ("\n   Rhombus.");
        printf("\n   Please enter the length of one diagonal (float) : ");
        scanf ("%lf",&a);
        printf("\n   Please enter the length of other diagonal (float) : ");
        scanf ("%lf",&b);
        system ("cls");
        printf ("\n    The determined Area of Rhombus = %lf\n",(a*b)/2.0);
        trn16:
        printf("\n\n\n 1. Do this calculation again.");
        printf("\n 2. Go to the previous menu.");
        printf("\n   Please enter an index from above : ");
        ii=inck ();
        //scanf ("%lld",&ii);
        if (ii==1) goto trn15;
        else if (ii==2) goto trn12;
        else
        {
            printf ("\n   Invalid selection.\n");
            goto trn16;
        }
    }
    if (ii==4)
    {
        trn17:
        printf ("\n   Parallelogram.");
        printf("\n    Please enter the length of base (float) : ");
        scanf ("%lf",&a);
        printf("    Please enter the length of height (float) : ");
        scanf ("%lf",&b);
        system ("cls");
        printf ("\n    The determined Area of Parallelogram = %lf\n",(a*b));
        trn18:
        printf("\n\n\n 1. Do this calculation again.");
        printf("\n 2. Go to the previous menu.");
        printf("\n   Please enter an index from above : ");
        ii=inck ();
        //scanf ("%lld",&ii);
        if (ii==1) goto trn17;
        else if (ii==2) goto trn12;
        else
        {
            printf ("\n   Invalid selection.\n");
            goto trn18;
        }
    }
    if (ii==5)
    {
        trn19:
        printf ("\n   Trapezoid.");
        printf("\n    Please enter the length of base (float) a : ");
        scanf ("%lf",&a);
        printf("    Please enter the length of the parrallel side of a (float) b : ");
        scanf ("%lf",&b);
        printf("    Please enter the difference between the two side (float) h : ");
        scanf ("%lf",&h);
        system ("cls");
        printf ("\n    The determined Area of Trapezoid = %lf\n",((a+b)*h)/2.0);
        trn20:
        printf("\n\n\n 1. Do this calculation again.");
        printf("\n 2. Go to the previous menu.");
        printf("\n   Please enter an index from above : ");
        ii=inck ();
        //scanf ("%lld",&ii);
        if (ii==1) goto trn19;
        else if (ii==2) goto trn12;
        else
        {
            printf ("\n   Invalid selection.\n");
            goto trn20;
        }
    }
    else if (ii==6) return 0;
    else
    {
        printf ("\n   Invalid selection.\n");
        goto trn12;
    }
}

lli set ()
{
    lli ii;
    printf ("\n   Please attention:\n   a. The element of the sets that you will take input,\n      must consist only single alphanumeric character {a,5,0,j,f,A etc} containing the second bracket.\n   b. The element must be seperated with comma ','.\n   c. Space ' ' isnot acceptable into the sets.");
    printf ("\n\n   Such as: {a,b,c,d,e}, {3,6,5,3,9,0},{2,d,h,f,6,5},{} etc.\n");
    set1:
    printf ("\n   1. Union of two sets.");
    printf ("\n   2. Intersection of two sets.");
    printf ("\n   3. Difference between two sets.");
    printf ("\n   4. Cartesian Product.");
    printf ("\n   5. ***  End this section.");
    printf("\n\n   Please enter an index from above : ");
    ii=inck ();
    //scanf ("%lld",&ii);
    system ("cls");
    if (ii==1)
    {
        set2:
        uset ();
        set4:
        printf("\n\n    1. Do this calculation again.");
        printf("\n    2. Go to the previous menu.");
        printf("\n\n    Please enter an index from above : ");
        ii=inck ();
        //scanf ("%lld",&ii);
        system ("cls");
        if (ii==1) goto set2;
        else if (ii==2) goto set1;
        else
        {
            printf ("\    Invalid selection.");
            goto set4;
        }
    }
    else if (ii==2)
    {
        set5:
        iset ();
        set6:
        printf("\n\n    1. Do this calculation again.");
        printf("\n    2. Go to the previous menu.");
        printf("\n\n    Please enter an index from above : ");
        ii=inck ();
        //scanf ("%lld",&ii);
        system ("cls");
        if (ii==1) goto set5;
        else if (ii==2) goto set1;
        else
        {
            printf ("\    Invalid selection.");
            goto set6;
        }
    }
    else if (ii==3)
    {
        set7:
        dset ();
        set8:
        printf("\n\n    1. Do this calculation again.");
        printf("\n    2. Go to the previous menu.");
        printf("\n\n    Please enter an index from above : ");
        ii=inck ();
        //scanf ("%lld",&ii);
        system ("cls");
        if (ii==1) goto set7;
        else if (ii==2) goto set1;
        else
        {
            printf ("\    Invalid selection.");
            goto set8;
        }
    }
    else if (ii==4)
    {
        set9:
        cset ();
        set10:
        printf("\n\n    1. Do this calculation again.");
        printf("\n    2. Go to the previous menu.");
        printf("\n\n    Please enter an index from above : ");
        ii=inck ();
        //scanf ("%lld",&ii);
        system ("cls");
        if (ii==1) goto set9;
        else if (ii==2) goto set1;
        else
        {
            printf ("\    Invalid selection.");
            goto set10;
        }
    }
    else if (ii==5) return 0;

    else
    {
        printf ("\n   Invalid selection.");
        goto set1;
    }
}
lli uset ()
{
    lli ii,la,lb,d,i,j,k,x[100000],s[100000];
    char a[100000],b[100000];
    settt:
    printf ("\n    Union of two sets.");
    printf("\n    Please enter the first set: ");
    scanf ("%s",a);
    printf("    Please enter the last set: ");
    scanf ("%s",b);
    la=strlen (a);
    lb=strlen (b);
    if (la==2)
    {
        printf ("\n   The determinated answer: %s",b);
        return 0;
    }
    else if (lb==2)
    {
        printf ("\n   The determinated answer: %s",a);
        return 0;
    }
    else if (la%2==0 || lb%2==0)
    {
        printf ("\n    Invalid input.\n");
        goto settt;
    }
    if (la>lb)
    {
        for (i=1,k=0;i<lb-1;i+=2)
        {
            if (b[i]==a[i])
            {
                s[k]=b[i];
                k++;
            }
            else
            {
                s[k]=a[i];
                k++;
                s[k]=b[i];
                k++;
            }
        }
        i=lb;
        while (i<la-1)
        {
            s[k]=a[i];
            i+=2;
            k++;
        }
    }
    else
    {
        for (i=1,k=0;i<la-1;i+=2)
        {
            if (b[i]==a[i])
            {
                s[k]=b[i];
                k++;
            }
            else
            {
                s[k]=a[i];
                k++;
                s[k]=b[i];
                k++;
            }
        }
        i=la;
        while (i<lb-1)
        {
            s[k]=b[i];
            i+=2;
            k++;
        }
    }
    for (i=0;i<k-1;i++)
    {
        if (s[i]>s[i+1])
        {
            d=s[i];
            s[i]=s[i+1];
            s[i+1]=d;
            i=-1;
        }
    }
    printf ("\n   The determinated answer: {");
    for (i=0;i<k;i++)
    {
        if (s[i]!=s[i+1] && i!=k-1) printf ("%c,",s[i]);
        if (i==k-1) printf ("%c}.",s[i]);
    }
    return 0;
}

lli iset ()
{
    lli ii,la,lb,d,i,j,k,x[100000],s[100000];
    char a[100000],b[100000];
    sett:
    printf ("\n    Intersection of two sets.");
    printf("\n    Please enter the first set: ");
    scanf ("%s",a);
    printf("    Please enter the last set: ");
    scanf ("%s",b);
    la=strlen (a);
    lb=strlen (b);
    if (la==2)
    {
        printf ("\n   The determinated answer: %s",a);
        return 0;
    }
    else if (lb==2)
    {
        printf ("\n   The determinated answer: %s",b);
        return 0;
    }
    else if (la%2==0 || lb%2==0)
    {
        printf ("\n    Invalid input.\n");
        goto sett;
    }
    for (i=1,k=0;i<la-1;i+=2)
    {
        for (j=1;j<lb-1;j+=2)
        {
            if (a[i]==b[j])
            {
                s[k]=b[j];
                k++;
            }
        }
    }
    for (i=0;i<k-1;i++)
    {
        if (s[i]>s[i+1])
        {
            d=s[i];
            s[i]=s[i+1];
            s[i+1]=d;
            i=-1;
        }
    }
    printf ("\n   The determinated answer: {");
    for (i=0;i<k;i++)
    {
        if (s[i]!=s[i+1] && i!=k-1) printf ("%c,",s[i]);
        if (i==k-1) printf ("%c}.",s[i]);
    }
    return 0;
}

lli dset ()
{
    lli ii,la,lb,d,i,j,k,x[100000];
    char a[100000],b[100000],s[100000];
    sett:
    printf ("\n    Difference between two sets.");
    printf("\n    Please enter the first set: ");
    scanf ("%s",a);
    printf("    Please enter the last set: ");
    scanf ("%s",b);
    la=strlen (a);
    lb=strlen (b);
    if (la==2)
    {
        printf ("\n   The determinated answer = %s",a);
        return 0;
    }
    else if (lb==2)
    {
        printf ("\n   The determinated answer = %s",a);
        return 0;
    }
    else if (la%2==0 || lb%2==0)
    {
        printf ("\n    Invalid input.\n");
        goto sett;
    }
    for (i=1,k=0;i<la-1;i+=2) for (j=1;j<lb-1;j+=2) if (a[i]==b[j]) a[i]=' ';
    printf ("\n   The determinated answer = {");
    for (i=1,k=0;i<la-1;i+=2)
    {
        if (a[i]==' ') i+=2;
        else
        {
            s[k]=a[i];
            k++;
        }
    }
    i=0;
    while (i<k)
    {
        if (i!=k-1) printf ("%c,",s[i]);
        else printf ("%c",s[i]);
        i++;
    }
    printf ("}.\n");
    return 0;
}

lli cset ()
{
    lli ii,la,lb,d,i,j,k,x[100000];
    char a[100000],b[100000],s[100000];
    sett:
    printf ("\n    Cartesian Product.");
    printf ("\n    These sets shouldn't be empty.");
    printf("\n\n    Please enter the first set: ");
    scanf ("%s",a);
    printf("    Please enter the last set: ");
    scanf ("%s",b);
    la=strlen (a);
    lb=strlen (b);
    printf ("\n   The determinated answer = {");
    i=1;
    while (i<la-1)
    {
        j=1;
        while (j<lb-1)
        {
            printf ("(%c,%c)",a[i],b[j]);
            if (i!=la-2 || j!=lb-2) printf (",");
            j+=2;
        }
        i+=2;
    }
    printf ("}.\n");
    return 0;
}

lli nmcnv ()
{
    lli ii;
    nm1:
    printf ("\n   1. Decimal to Binary, Octal & Hexadecimal.");
    printf ("\n   2. Binary, Octal & Hexadecimal to Decimal.");
    printf ("\n   3. Binary to Octal to Hexadecimal and vice versa.");
    printf("\n\n   4. Exit this section.");
    printf("\n\n    Please enter an index from above : ");
    ii=inck ();
    //scanf ("%lld",&ii);
    system ("cls");
    if (ii==1)
    {
        cv1:
        nmcnv1 ();
        cv2:
        printf("\n\n    1. Do this calculation again.");
        printf("\n    2. Go to the previous menu.");
        printf("\n\n    Please enter an index from above : ");
        ii=inck ();
        //scanf ("%lld",&ii);
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
        ii=inck ();
        //scanf ("%lld",&ii);
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
        ii=inck ();
        //scanf ("%lld",&ii);
        system ("cls");
        if (ii==1) goto cv5;
        else if (ii==2) goto nm1;
        else
        {
            printf ("\    Invalid selection.");
            goto cv6;
        }
    }

    else if (ii==4)
    {
        return 0;
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
    lli b=0,l,a,c,i,x,p=0,q,ar[100000]={0};
    char s[2999];
    printf("\n    Enter the Decimal integer : ");
	//scanf("%lld",&a);

	l=2;
    a5:
    if (l==0) printf ("\n    Invalid Input. Please enter again.\n");
    scanf ("%s",s);
    l=soin(s);
    if (l==0 || s[0]=='-') {l=0;goto a5;}
    else a=atoi(s);

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
    lli b=0,c,n,i,l,ii,j,x,p=0,q=0,s=0,ar[100000]={0};
    char e[1000],a[10000];
    nm33:
    printf("\n    1. Binary to decimal.");
    printf("\n    2. Octal to decimal.");
    printf("\n    3. Hexadecimal to decimal.");
    printf("\n\n    Please enter an index from above : ");
    ii=inck ();
    //scanf ("%lld",&ii);
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
	//scanf("%s",&a);


	l=2;
    a5:
    if (l==0) printf ("\n    Invalid Input. Please enter again.\n");
    scanf ("%s",e);
    if (q==2) l=ss(e);
    else if (q==8) l=ss1(e);
    else l=ss2(e);
    if (l==0) goto a5;






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
    ii=inck ();
    //scanf ("%lld",&ii);
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

lli somntm ()
{
    ///n tomo pod
    lli i,a,d,n,l,s;
    char x[1000];
    printf ("\n   Please enter the first term (Integer) = ");
    //scanf ("%lld",&a);

    l=2;
    a1:
    if (l==0) printf ("\n    Invalid Input. Please enter again.\n");
    scanf ("%s",x);
    l=soin(x);
    if (l==0) goto a1;
    if (x[0]=='-') {a=matoi(x);a*=-1;}
    else a=atoi(x);

    printf ("   Please enter the difference between two terms (Integer) = ");
    //scanf ("%lld",&d);

    l=2;
    a2:
    if (l==0) printf ("\n    Invalid Input. Please enter again.\n");
    scanf ("%s",x);
    l=soin(x);
    if (l==0) goto a2;
    if (x[0]=='-') {d=matoi(x);d*=-1;}
    else d=atoi(x);

    printf ("   Please enter the number of terms = ");
    scanf ("%lld",&n);

    l=2;
    a3:
    if (l==0) printf ("\n    Invalid Input. Please enter again.\n");
    scanf ("%s",x);
    l=soin(x);
    if (l==0 || x[0]=='-') {l=0;goto a3;}
    else a=atoi(x);

    printf ("   The diterminated %lldth term : %lld.\n",n,a+(n-1)*d);
}

lli gntmms ()
{
    double i,a,d,n,s,x,y,z,r;
    lli l;
    char e[10000];
    printf ("\n   Please enter the first term (Integer) = ");
    //scanf ("%lf",&a);

    l=2;
    a1:
    if (l==0) printf ("\n    Invalid Input. Please enter again.\n");
    scanf ("%s",e);
    l=soin(e);
    if (l==0) goto a1;
    if (e[0]=='-') {a=matoi(e);a*=-1;}
    else a=atoi(e);

    printf ("   Please enter the ratio between two terms (Integer) = ");
    //scanf ("%lf",&r);

    l=2;
    a2:
    if (l==0) printf ("\n    Invalid Input. Please enter again.\n");
    scanf ("%s",e);
    l=soin(e);
    if (l==0) goto a2;
    if (e[0]=='-') {r=matoi(e);r*=-1;}
    else r=atoi(e);

    printf ("   Please enter the number of terms = ");
    //scanf ("%lf",&n);

    l=2;
    a3:
    if (l==0) printf ("\n    Invalid Input. Please enter again.\n");
    scanf ("%s",e);
    l=soin(e);
    if (l==0 || e[0]=='-') {l=0;goto a3;}
    else n=atoi(e);

    s= (a*(pow(r,n)-1))/((r-1)*1.0);
    printf ("   The diterminated sum from 1st to %.0lfth term : %lf.\n",n,s);
}
lli somntms ()
{
    lli i,a,d,n,l,s;
    char e[1000];
    printf ("\n   Please enter the first term = ");
    //scanf ("%lld",&a);

    l=2;
    a1:
    if (l==0) printf ("\n    Invalid Input. Please enter again.\n");
    scanf ("%s",e);
    l=soin(e);
    if (l==0) goto a1;
    if (e[0]=='-') {a=matoi(e);a*=-1;}
    else a=atoi(e);

    printf ("   Please enter the difference between two terms = ");
    //scanf ("%lld",&d);

    l=2;
    a2:
    if (l==0) printf ("\n    Invalid Input. Please enter again.\n");
    scanf ("%s",e);
    l=soin(e);
    if (l==0) goto a2;
    if (e[0]=='-') {d=matoi(e);d*=-1;}
    else d=atoi(e);


    printf ("   Please enter the number of terms = ");
    //scanf ("%lld",&n);

    l=2;
    a3:
    if (l==0) printf ("\n    Invalid Input. Please enter again.\n");
    scanf ("%s",e);
    l=soin(e);
    if (l==0 || e[0]=='-') {l=0;goto a3;}
    else n=atoi(e);

    s=n/2*(2*a+(n-1)*d);
    printf ("   The diterminated sum from 1st to %lldth term : %lld.\n",n,s);
}
lli gntm ()
{
    ///n tomo pod
    lli i,a,r,l,n,s;
    char e[1000];
    printf ("\n   Please enter the first term = ");
    scanf ("%lld",&a);

    l=2;
    a1:
    if (l==0) printf ("\n    Invalid Input. Please enter again.\n");
    scanf ("%s",e);
    l=soin(e);
    if (l==0) goto a1;
    if (e[0]=='-') {a=matoi(e);a*=-1;}
    else a=atoi(e);

    printf ("   Please enter the ratio between two terms = ");
    //scanf ("%lld",&r);

    l=2;
    a2:
    if (l==0) printf ("\n    Invalid Input. Please enter again.\n");
    scanf ("%s",e);
    l=soin(e);
    if (l==0) goto a2;
    if (e[0]=='-') {r=matoi(e);r*=-1;}
    else r=atoi(e);

    printf ("   Please enter the number of terms = ");
    //scanf ("%lld",&n);

    l=2;
    a3:
    if (l==0) printf ("\n    Invalid Input. Please enter again.\n");
    scanf ("%s",e);
    l=soin(e);
    if (l==0 || e[0]=='-') {l=0;goto a3;}
    else n=atoi(e);

    s=pow (r,n-1);
    printf ("   The diterminated %lldth term : %lld.\n",n,a*s);
}





