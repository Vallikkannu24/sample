#include<stdio.h>
#include<conio.h>
void main()
{
int a[5],temp;
for(int i=0;i<5;i++)
{
scanf(%d",&a[i]);
}
for(int i=0;i<5;i++)
{
for(int y=i+1;y<5;y++)
{
if(a[i]>a[j])
{
temp=a[j];
a[j]=a[i];
a[i]=temp;
}
}
}
for(int k=0;k<5;k++)
{
if(a[i]==i)
{
printf("%d",a[i])
}
}
}
