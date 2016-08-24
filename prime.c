#include<stdio.h>
#include<conio.h>
void main()
{
int num,count=0;
scanf("%d",&num);
for(int i=2;i<num;i++)
{
if(num%i==0)
{
count++;
}
}
if(count==0)
{
printf("the number is prime");
}
else
{
printf("the number is not prime");
}
}
