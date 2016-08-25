#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int k=0;
char ch[30],ch1[30];
for(int i=0;i<30;i++){
scanf("%d",&ch[i]);
}
for(int j=strlen(ch)-1;j>0;j--)
{
ch1[k]=ch[j];
printf("%c",ch1[k]);
k++;
}
for(int y=0;y<30;y++)
{
if(ch1[y]!='a'||ch1[y]!='e'||ch1[y]!='i'||ch1[y]!='o'||ch1[y]!='u'||ch1[y]!='A'||ch1[y]!='E'||ch1[y]!='I'||ch1[y]!='O'||ch1[y]!='U')
{
ch2[y]=ch1[y];
printf("%c",ch2[y]);
}
}
}
