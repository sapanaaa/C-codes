#include<stdio.h>
#include<conio.h>
int main()
{
	int i;
	i=65;
	while(i!=122){
	if(i>90&&i<97)
	continue;
	else{
		printf("%c\t",i);
	}
	i++;
}
return 0;
}
