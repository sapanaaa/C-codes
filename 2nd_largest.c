#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter three numbers:\n");
	scanf("%d%d%d",&a,&b,&c);
	if((b>a&&b<c)||(b<a&&b>c)){
		printf("%d is second largest",b);
		}else if((a>b&&a<c)||(a<b&&a>c))
	{
	printf("%d is the second largest",a);
			}else
			printf("%d is the second largest",c);
		return 0;
}
