#include<stdio.h>
#include<conio.h>
void main()
{
int ch[10],count=0;
for(int i=0;i<10;i++)
{
scanf("%d",&ch[i]);
}
for(int i=0;i<10;i++)
{
for(int j=0;j<10;j++)
{
if(ch[i]==ch[j])
{
count++;
}
}
if(count==1)
{
printf("%d",ch[i]);
}
}
}
