#include <stdio.h>
int main()
{
	float a,e,p,t,q;
	scanf("%f",&a);
	if (a<=400.00)
	{
		p=15.0;
		e=a*p/100.0;
		t=a+e;
		printf("Novo salario: %0.2f\nReajuste ganho: %0.2f\nEm percentual: %0.0f %%\n",t,e,p);
	}
	else if (a>400.00 && a<=800.00)
	{
		p=12.0;
		e=a*p/100.0;
		t=a+e;
		printf("Novo salario: %0.2f\nReajuste ganho: %0.2f\nEm percentual: %0.0f %%\n",t,e,p);
	}
	else if (a>800.00 && a<=1200.00)
	{
		p=10.0;
		q=p;
		e=a*p/100.0;
		t=a+e;
		printf("Novo salario: %0.2f\nReajuste ganho: %0.2f\nEm percentual: %0.0f %%\n",t,e,p);
	}
	else if (a>1200.00 && a<=2000.0)
	{
		p=7.0;
		e=a*p/100.0;
		t=a+e;
		printf("Novo salario: %0.2f\nReajuste ganho: %0.2f\nEm percentual: %0.0f %%\n",t,e,p);
	}
	else
	{
		p=4.0;
		e=a*p/100.0;
		t=a+e;
		printf("Novo salario: %0.2f\nReajuste ganho: %0.2f\nEm percentual: %0.0f %%\n",t,e,p);
	}
	return 0;
}