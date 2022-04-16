#include<stdio.h>
#include<string.h>
int main()
{
	int i,x=0,n,c[26];
	char a[1003];
	getchar ();
	gets(a);
	n=strlen (a);
	for (i=0; i<26; i++) c[i]=0;
	for (i=0; i<n; i++)
	{
		if (a[i]=='a' && c[0]==0)
		{c[0]=1;x++;}
		else if (a[i]=='b' && c[1]==0)
		{c[1]=1;x++;}
		else if (a[i]=='c' && c[2]==0)
		{c[2]=1;x++;}
		else if (a[i]=='d' && c[3]==0)
		{c[3]=1;x++;}
		else if (a[i]=='e' && c[4]==0)
		{c[4]=1;x++;}
		else if (a[i]=='f' && c[5]==0)
		{c[5]=1;x++;}
		else if (a[i]=='g' && c[6]==0)
		{c[6]=1;x++;}
		else if (a[i]=='h' && c[7]==0)
		{c[7]=1;x++;}
		else if (a[i]=='i' && c[8]==0)
		{c[8]=1;x++;}
		else if (a[i]=='j' && c[9]==0)
		{c[9]=1;x++;}
		else if (a[i]=='k' && c[10]==0)
		{c[10]=1;x++;}
		else if (a[i]=='l' && c[11]==0)
		{c[11]=1;x++;}
		else if (a[i]=='m' && c[12]==0)
		{c[12]=1;x++;}
		else if (a[i]=='n' && c[13]==0)
		{c[13]=1;x++;}
		else if (a[i]=='o' && c[14]==0)
		{c[14]=1;x++;}
		else if (a[i]=='p' && c[15]==0)
		{c[15]=1;x++;}
		else if (a[i]=='q' && c[16]==0)
		{c[16]=1;x++;}
		else if (a[i]=='r' && c[17]==0)
		{c[17]=1;x++;}
		else if (a[i]=='s' && c[18]==0)
		{c[18]=1;x++;}
		else if (a[i]=='t' && c[19]==0)
		{c[19]=1;x++;}
		else if (a[i]=='u' && c[20]==0)
		{c[20]=1;x++;}
		else if (a[i]=='v' && c[21]==0)
		{c[21]=1;x++;}
		else if (a[i]=='w' && c[22]==0)
		{c[22]=1;x++;}
		else if (a[i]=='x' && c[23]==0)
		{c[23]=1;x++;}
		else if (a[i]=='y' && c[24]==0)
		{c[24]=1;x++;}
		else if (a[i]=='z' && c[25]==0)
		{c[25]=1;x++;}
		if (x==26) break;
	}
	printf("%d\n",x);
	return 0;
}