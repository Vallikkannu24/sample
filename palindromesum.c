#include<stdio.h>
#include<conio.h>
void main()
{
int num,temp,temp1,rev=0,sum=0;
scanf("%d",&num);
temp=num;
while(temp>0)
{
temp1=temp%10;
sum=sum+temp1;
temp=temp/10;
}
temp2=sum;
while(temp2>0)
{
temp3=temp2%10;
rev=rev*10+temp1;
temp2=temp2/10;
}

if(rev==sum)
{
printf("the number is palindrome");
}
else
{
printf("the number is not palindrome");
}
}

