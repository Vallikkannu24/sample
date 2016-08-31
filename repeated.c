#include<stdio.h>
#include<conio.h>
void main()

{
int a[10];
int temp=0,n;
scanf("%d",&n);
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for( int j=0;j<1;j++)
{
for(int k=0;k<n;k++)
{
if(a[i]=a[j])
{
temp++;
}

}}
if(temp==0)
printf(",the element is not repeated");
else
printf("the element of first is repeated");
}



