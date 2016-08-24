#include<stdio.h>
#include<conio.h>
void main()
{
int num,rev=0,temp;
scanf("%d",&num);
if(num>0)
{
temp=temp%10;
rev=rev*10+temp;
num=num/10;
}
printf("%d",rev);
}
