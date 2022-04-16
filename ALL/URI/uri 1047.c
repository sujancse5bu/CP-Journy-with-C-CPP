#include<stdio.h>
int main()
{
	int a,b,x,y,h,m;
	scanf("%d%d%d%d",&a,&b,&x,&y);
	if (x==a && y==b) printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
	else if (x>=a && y>=b)
	{
		h=x-a;
		m=y-b;
		printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);
	}
	else if (x>=a && y<=b)
	{
		m=y+60;
		m=m-b;
		h=x-a-1;
		printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);
	}
	else if (x<=a && y>=b)
	{
		m=y-b;
		h=24-a;
		h=h+x;
		printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);
	}
	else 
	{
		m=60+y;
		m=m-b;
		h=24-a-1;
		h=h+x;
		printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);
	}
	return 0;
}