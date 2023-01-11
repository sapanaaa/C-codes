#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,d,e,x1,x2,real,img;
	
	printf(" enter coefficients of the equation ");
	scanf("%f%f%f",&a,&b,&c);

    d= b*b-4*a*c;
    e= 4*a*c-b*b;
    if (d==0)
 
    {
    printf("the roots are real and equal");
    x1= -b/(2*a);
    printf("the roots are x1=x2=%f", x1); }
    
    else if(d>0)
    
 {
    printf("the roots are real but different");
    x1= -b+sqrt(d)/(2*a);
    x2= -b-sqrt(d)/(2*a);
    printf("the roots are %f%f", x1,x2); }
    
    else
    
    {
	printf("roots are imaginary \n");
    real= b/(2*a);
    img= sqrt(e)/(2*a);
    printf("the roots are x1=%f+i%f", real+img);
    printf("the roots are x2=%f-i%f", real-img); }
    
    return 0;
	}


