#include<stdio.h>
#include<conio.h>
void main()
{
int sum=0,sum1=0;
for(int i=0;i<15;i++)
{
sum=sum+i;
}
printf("%d",sum);
for(int j=15;j<45;j++)
{
if(j%2!=0)
{
sum1=sum1+j;
}
}
printf("%d",sum1);
}
