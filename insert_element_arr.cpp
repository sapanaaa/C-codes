#include<stdio.h>

int main()
{
	int size=100;
	int ar[size],i,num,pos;
	
	printf("input size of array \n");
	scanf("%d",&size);
	
	printf("\n input elements \n");
	
	for (i=0; i<size; i++){
		
		scanf("%d",&ar[i]);
		printf("\n input element and position of the element \t");
		scanf("%d%d",&num,&pos);
		
		if ( pos>size+1 || pos<0 )
		printf("invalid");
		
	
		else
			for(i=size; i>=size; i--)
			{ ar[i]=ar[i-1];
			} ar[pos-1]=num;
			size++;
			
			for (i=0; i<size; i++)
			printf("%d",ar[i]);
	}
	return 0;
}
