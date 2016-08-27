#include<stdio.h>
#include<conio.h>
void main()

{
int a[20],n,split,split1,sum=0,sum1=0,avg,avg1;
scanf("%d",&n);
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]):
}
if(n%2==0)
{
split=n/2;
split1=n-split;
}
else
{
split=n/2+1;
split1=n-split;
}
for(int j=0;j<split;j++)
{
sum=sum+a[j];
avg=sum/split;
}
for(int k=0;k<split1;k++)
{
sum1=sum1+a[k];
avg1=sum1/split1;
}
if(avg==avg1)
{
printf("possible...the averages are same");
}
else
{
printf("not possible .....the averages are not same");
}
}

