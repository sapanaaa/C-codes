#include<stdio.h>
#include<stdlib.h>
int main()
{
	int ar1[2][3]={{1,2,3},{4,5,6}};
    int ar2[5]={1,2,3,4,5};
    int i,j;
    int *ptr1,*ptr2;
    ptr1=&ar1;
    ptr2=&ar2;
    for(i=0;i<2;i++)
    {
    	for(j=0;j<3;j++)
    	{
    		printf("value of 2d array[%d][%d]=%d\n",i,j,*(*(ar1+i)+j));
    		printf("address of 2d array[%d][%d]=%u\n",i,j,*(ar1+i)+j);
		}
		printf("\n");
	}
	for(i=0;i<4;i++)
	{
			printf("value of 1d array[%d]=%d\n",i,*(ar2+i));
			printf("address of 1d array[%d]=%u\n",i,ar2+i);
	}
	return 0;
}
