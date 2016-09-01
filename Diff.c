#include<stdio.h>
#include<condo.h>
void main()
{
int a[10],d,n,k=0;
scanf("%d",&n);
scanf("%d",&d);
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(int y=d;y<n;y++){
b[k]=a[y];
k++;
}
for(int u=0;u<d;u++)
{
b[k]=a[u];
k++;
}
for(int r=0;r<n;r++)
{
printf("%d",b[r]);
}
}
