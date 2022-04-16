#include <stdio.h>
#include <math.h>
#include <string.h>
#define lli long long int



 int main ()
 {
 lli ii,b[100000],p,q,i,r,c,z,po,n,s,j,h;
 char a[1000];

 printf(" MAIN MENU:");

 mainmenu:

 printf("\n 1. Arithmatic and Algebra.");
 printf("\n 2. Equational Solutions.");


 printf("\n\n Please enter an index from above : ");
 scanf ("%lld",&ii);
 if (ii==1)
    system("cls");                      ///there it is bro..... got it?
 {
 aral:
 printf("\n\n 1. Simplification of the operations '+', '-', '/' and '*'.");
 printf("\n 2. Greatest Common Divisor and Lowest Common Multipler.");
 printf("\n\n Please enter an index from above : ");
 scanf ("%lld",&ii);
 if (ii==1)
 system("cls");                        ///there it is bro..... got it?
 {
 printf (" The Algebric expression must be bounded with the 'First bracket'.\nExample:\n(267*12+34/2)\n(4+2-34*5) etc.\n\n ");
 sorol:
 printf(" Please enter :");
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
 if(po==0) printf(" Answer: %lld\n",n);
 else printf(" Answer: %lld\n",po);
 }
 else printf("\n Answer: %lld\n",po-n);


  ///there it is bro..... got it?

 printf("\n\n\n 1. Do this calculation again.");
 printf("\n 2. Go to the previous menu.");
 printf("\n 3. Go to the main menu.");
 printf("\n 4. End the program.");
 printf("\n\n Please enter an index from above : ");
 scanf ("%lld",&ii);
 if (ii==1) goto sorol;
 else if (ii==2) goto aral;
 else if (ii==3) goto mainmenu;
 else if (ii==4) goto rtrn0;
 }
 }


 rtrn0:
     system("cls");                        ///there it is bro..... got it?
     printf ("\n Thank You.\n");
 return 0;
 }
