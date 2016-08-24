#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
if(a>b&&a>c)
{
printf("a is largest");
}
else if(b>c)
{
printf("b is largest");
}
else
{
printf("c is largest");
}
}
