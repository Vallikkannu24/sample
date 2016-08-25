#include<stdio.h>
#include<conio.h>
void main()
{
char ch[10];
for(int i=0;i<10;i++)
{
scanf("%c",&ch[i]);
}
for(int j=0;j<10;j++)
{
for(int k=j+1;k<10;k++)
{
if(ch[j]!=ch[k])
{
ch1[j]=ch[j];
}
}
}
for(int l=0;l<10;l++)
{
printf("%c",ch1[i]);
}
}
