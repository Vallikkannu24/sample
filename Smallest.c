#include<stdio.h>
#include<conio.h>
void main()

{
int a[10];
int temp,n;
scanf("%d",&n);
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for( int j=0;j<n;j++)
{
for(int k=0;k<n;k++)
{
if(a[i]>a[j])
{
temp=a[j];
a[j]=a[i];
a[i]=temp;
}

}}
printf("%d",a[1]);
}



