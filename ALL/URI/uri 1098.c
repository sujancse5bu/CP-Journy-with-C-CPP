#include<stdio.h>
int main()
{
	float i,j;
	for (i=0,j=1;j<=3;j++) printf("I=%0.0f J=%0.0f\n",i,j);
	for (i=0.2,j=1.2;j<=3.3;j++) printf("I=%0.1f J=%0.1f\n",i,j);
	for (i=0.4,j=1.4;j<=3.5;j++) printf("I=%0.1f J=%0.1f\n",i,j);
	for (i=0.6,j=1.6;j<=3.7;j++) printf("I=%0.1f J=%0.1f\n",i,j);
	for (i=0.8,j=1.8;j<=3.9;j++) printf("I=%0.1f J=%0.1f\n",i,j);
	for (i=1,j=2;j<=4;j++) printf("I=%0.0f J=%0.0f\n",i,j);
	for (i=1.2,j=2.2;j<=4.3;j++) printf("I=%0.1f J=%0.1f\n",i,j);
	for (i=1.4,j=2.4;j<=4.5;j++) printf("I=%0.1f J=%0.1f\n",i,j);
	for (i=1.6,j=2.6;j<=4.7;j++) printf("I=%0.1f J=%0.1f\n",i,j);
	for (i=1.8,j=2.8;j<=4.9;j++) printf("I=%0.1f J=%0.1f\n",i,j);
	for (i=2,j=3;j<=5;j++) printf("I=%0.0f J=%0.0f\n",i,j);
	return 0;
}