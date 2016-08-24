#include<stdio.h>
#include<conio.h>
void main()
{
int num,rev=0;
scanf("%d",&num);
int temp;
if(num>0)
{
temp=num%10;
rev=rev*10+temp;
num=num/10;
}
printf("%d",rev);
}
