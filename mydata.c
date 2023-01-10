#include<stdio.h>
#include<stdlib.h>
int main() 
{
    char snt[100];
    FILE *fptr;
    fptr=fopen("mydata.txt","r");
    if(fptr==NULL) 
	{
        printf("error!");
        exit(1);
    }
    printf("Enter a sentence:\n");
    fgets(snt,sizeof(snt),stdin);
    fprintf(fptr,"%s",snt);
    fclose(fptr);
    printf("\n\n\n");
     FILE *fp;
        char c;
        fp=fopen("mydata.txt","r");
        while((c=getc(fp))!=EOF)
		{
            printf("%c",c);
        }
        fclose(fp);
    return 0;
}
