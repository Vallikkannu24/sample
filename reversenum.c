#include<stdio.h>
#include<conio.h>
void main()
{
int num,rev=0,temp;
scanf("%d",&num);
while(num>0)
{
temp=num%10;
rev=rev*10+temp;
num=num/10;
}
printf("%d",rev);
}
