#include<stdio.h>
#include<conio.h>
void main()
{
int n,m,temp,temp1,rev=0;
scanf("%d",&n);
scanf("%d",&m);
for(int i=n;i<m;i++)
{
temp=i;
if(temp>0)
{
temp1=temp%10;
rev=rev+temp1*temp1*temp1;
temp=temp/10;
}
if(i==rev)
{
printf("%d",i);
}
}
}
