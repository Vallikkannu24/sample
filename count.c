#include<stdio.h>
#include<conio.h>
void main()
{
int n,temp,count=0;
scanf("%d",&n);
if(n>0)
{
temp=n%10;
count=count+1;
n=n/10;
}
printf("%d",count);
}
