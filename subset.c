#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],b[10],c[10],d[10];
for(int i=0;i<10;i++)
{
scanf("%d",&a[i];
scanf("%d",&b[i]);
}
for(int u=0;u<10;u++)
{
for(int t=u+1;t<10;t++)
{
if(a[u]!=a[t])
{
c[u]=a[u];
}
}
}
for(int x=0;x<10;x++)
{
for(int q=u+1;q<10;q++)
{
if(b[x]!=b[q])
{
d[x]=b[x];
}
}
}
for(int j=0;j<10;j++)
{
for(int k=0;k<10;k++)
{
if(c[j]==d[k])
{
count++;
}
}}
if(count>10)
{
printf("array1 is a subset of array2");
}
else
{
printf("array1 is a not subset of array2");
}
}
