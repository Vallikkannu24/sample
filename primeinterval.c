#include<stdio.h>
#include<conio.h>
void main()
{
int n,count1=0;
int m;
sanf("%d",&n);
scanf("%d",&m);
for(int i=n;i<m;i++)
{
for(int j=2;j<i;j++)
{
if(i%j==0)
{
count++;
}
}
if(count==0)
{
count1++;
}
}
printf("%d",count1);
}
