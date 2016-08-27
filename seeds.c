#include<stdio.h>
#include<conio.h>
void main()
{
int num,temp1,b;
scanf("%d",&num);
scanf("%d",&b);
int temp;
temp=num;
while(temp>0)
{
temp1=temp℅10;
num=num*temp1;
temp=temp/10;
}
if (num==b){
print("x is a seed of number y");
}
else
{
print("x is not a seed of number y");
}
}
