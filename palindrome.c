#include<stdio.h>
#include<conio.h>
void main()
{
int num,temp,temp1,rev=0;
scanf("%d",&num);
temp=num;
while(temp>0)
{
temp1=temp%10;
rev=rev*10+temp1;
temp=temp/10;
}
if(rev==num)
{
printf("the number is palindrome");
}
else
{
printf("the number is not palindrome");
}
}

