#include<stdio.h>
#include<math.h>
int main()
{
	int i,j,a,b,c;
	scanf("%d%d",&a,&b);
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=b;j++)
		{
			c=i*j;
			printf("%d\n",c);
		}
	}
	return 0;
}
