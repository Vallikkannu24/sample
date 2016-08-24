#include<stdio.h>
#include<conio.h>
void main()
{
int n,m;
scanf("%d",&n);
scanf("%d",&m);
for(int i=n;i<m;i++)
{
if(i%2!==0)
{
printf("%d",i);
}
}
}
