#include<stdio.h>
#include<conio.h>
void main()
{
int a[5],temp;
for(int x=0;x<5;x++)
{
scanf(%d",&a[x]);
}
for(int i=0;i<5;i++)
{
for(int j=i+1;j<5;j++)
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
if(a[k]==k)
{
printf("%d",a[k]);
}
}
}
