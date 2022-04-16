///    OmShantihari
///    Author: Sujan Mridha
///    CSE 5th batch, University of Barishal
#include<stdio.h>
int main()
{
	int a,b,x,y,o=0,i=0;
	scanf("%d%d",&a,&b);
	while (i<b)
	{
		scanf("%d%d",&x,&y);
		if (x<a) a+=y;
		else
        {
            printf("NO\n");
            return 0;
        }
		i++;
	}
	printf("YES\n");
	return 0;
}
