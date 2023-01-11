#include <stdio.h>
struct student
{
    char name [30];
    int roll_no[5];
    int  marks[ 5];
    int  sum;
    float percent;
};
int main()
{
    struct student s;
    int i;
    printf("Enter name:");
    gets(s.name);
    printf("Enter roll no:");
    gets(s.roll_no);
    printf("Enter marks:\n");
    s.sum=0;
    for(i=0;i< 5;i++){
        printf("Marks in subject %d:",i+1);
        scanf("%d",&s.marks[i]);
        s.sum+=s.marks[i];
    }
    s.percent=(float)((float)s.sum/(float)500)*100;
    printf("\nName: %s \nTotal Marks: %d \nPercentage: %.2f",s.name,s.sum,s.percent);
    return 0;
}
