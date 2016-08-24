#include<stdio.h>
#include<conio.h>
void main()
{
int n,c;
scanf("%d",&n);
int a=0;
int b=1;
printf("%d\n",a);
printf("%d\n",b);
for(i=2;i<n;i++)
{
c=a+b;
printf("%d",c);
a=b;
b=c;
}
}
