#include<stdio.h>
#include<string.h>
int main()
{
	int i,n,v=0,a[27]={0};
	char x[120];
	scanf("%s",x);
	n=strlen(x);
	for (i=0;i<n && v<26;i++);
	{
		if (a[i]=='a' && a[0]==0) 
		{
			a[0]=1;
			v++;
		}
		else if (a[i]=='b' && a[1]==0) 
		{
			a[1]=1;
			v++;
		}
		else if (a[i]=='c' && a[2]==0) 
		{
			a[2]=1;v++;
		}
		else if (a[i]=='d' && a[3]==0) 
		{
			a[3]=1;v++;
		}
		else if (a[i]=='e' && a[4]==0) 
		{
			a[4]=1;v++;
		}
		else if (a[i]=='f' && a[5]==0) 
		{
			a[5]=1;v++;
		}
		else if (a[i]=='g' && a[6]==0) 
		{
			a[6]=1;v++;
		}
		else if (a[i]=='h' && a[7]==0) 
		{
			a[7]=1;v++;
		}
		else if (a[i]=='i' && a[8]==0) 
		{
			a[8]=1;v++;
		}
		else if (a[i]=='j' && a[9]==0) 
		{
			a[9]=1;v++;
		}
		else if (a[i]=='k' && a[10]==0) 
		{
			a[10]=1;v++;
		}
		else if (a[i]=='l' && a[11]==0) 
		{
			a[11]=1;v++;
		}
		else if (a[i]=='m' && a[12]==0) 
		{
			a[12]=1;v++;
		}
		else if (a[i]=='n' && a[13]==0) 
		{
			a[13]=1;v++;
		}
		else if (a[i]=='o' && a[14]==0) 
		{
			a[14]=1;v++;
		}
		else if (a[i]=='p' && a[15]==0) 
		{
			a[15]=1;v++;
		}
		else if (a[i]=='q' && a[16]==0) 
		{
			a[16]=1;v++;
		}
		else if (a[i]=='r' && a[17]==0) 
		{
			a[17]=1;v++;
		}
		else if (a[i]=='s' && a[18]==0) 
		{
			a[18]=1;v++;
		}
		else if (a[i]=='t' && a[19]==0) 
		{
			a[19]=1;v++;
		}
		else if (a[i]=='u' && a[20]==0) 
		{
			a[20]=1;v++;
		}
		else if (a[i]=='v' && a[21]==0) 
		{
			a[21]=1;v++;
		}
		else if (a[i]=='w' && a[22]==0) 
		{
			a[22]=1;v++;
		}
		else if (a[i]=='x' && a[23]==0) 
		{
			a[23]=1;v++;
		}
		else if (a[i]=='y' && a[24]==0) 
		{
			a[24]=1;v++;
		}
		else if (a[i]=='z' && a[25]==0) 
		{
			a[25]=1;v++;
		}
	}
	if (v%2==1) printf("IGNORE HIM!\n");
	else printf("CHAT WITH HER!\n");
	return 0;
}