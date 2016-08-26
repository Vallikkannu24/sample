#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char ch[30];
for(int i=0;i<30;i++)
{
scanf("%c",&ch[i]);
}
for(int j=0;j<strlen(ch)-2;j++)
{
printf("%d\t",ch[j]);
}

}
