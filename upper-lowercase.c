#include<stdio.h>
int main()
{
	char c;
	printf("enter a character:");
	scanf("%c",&c);
	if(c>64 && c<91)
	{c+=32;
	printf("eqv lower case is: %c",c);
	}else if(c>96 && c<123)
{c-=32;
printf("eqv upper case is: %c",c);
}else
printf("error!");
return 0;
}
