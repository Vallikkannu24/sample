#include<stdio.h>
#include<conio.h>
void main()
{
int num,temp,temp1,rev=0;
scanf("%d",&num);
temp=num;
if(temp>0)
{
temp1=temp%10;
rev=rev+temp1*temp1*temp1;
temp=temp/10;
}
if(num==rev)
{
printf("the number is armstrong");
}
else
{
printf("the number is not armstrong");
}
}
