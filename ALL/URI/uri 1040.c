#include<stdio.h>
int main()
{
	double a,b,c,d,e,m,n,o;
	scanf("%lf%lf%lf%lf",&a,&b,&c,&d);	m=(a*2.0+b*3.0+c*4.0+d*1.0)/10.0;
	printf("Media: %0.1lf\n",m);
	if (m>=7.0) printf("Aluno aprovado.\n");
	else if (m<5.0) printf("Aluno reprovado.\n");
	else if (m>=5.0 && m<=6.9)
	{
		printf("Nota do exame: ");
		scanf("%lf",&e);
		o=(m+e)/2.0;
		if (o>=5.0) printf("Aluno aprovado.\n");
		else printf("Aluno reprovado.\n");
		printf("Media final: %0.1lf\n",o);
	}
	return 0;
}