#include<stdio.h>
int main()
{
	float i,j,k,l,m,n;
	int o=0;
	scanf("%f%f%f%f%f%f",&i,&j,&k,&l,&m,&n);
	if (i>0.0) o++;
	if (j>0.0) o++;
	if (k>0.0) o++;
	if (l>0.0) o++;
	if (m>0.0) o++;
	if (n>0.0) o++;
	printf("%d valores positivos\n",o);
	return 0;
}