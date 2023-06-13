#include<stdio.h>
#include<math.h>

int main()
{
float a,b,c,m;
double s;
printf("enter three sides: ");
scanf("%f %f %f",&a,&b,&c);

m=(a+b+c)/2;
s=sqrt(m*(m-a)*(m-b)*(m-c));

printf("the area of triamgle: %f",s);

}