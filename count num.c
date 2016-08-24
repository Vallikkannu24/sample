#include<stdio.h>
#include<conio.h>
void main()
{
char ch[30],count=0;count1=0;count2=0;
for(int j=0;j<30;j++)
{
scanf("%c",&ch[j]);
}
for(int i=0;i<30;i++)
if(ch[i]=='0'||ch[i]='1'||ch[i]=='2'||ch[i]=='3'||ch[i]=='4'||ch[i]=='5'||ch[i]=='6'||ch[i]=='7'||ch[i]=='8'||ch[i]=='9')
{
count++;
}
else if(ch[i]=='a'||ch[i]=='b'||ch[i]=='c'||ch[i]=='d'||ch[i]=='e'||ch[i]=='f'||ch[i]=='g'||ch[i]=='h'||ch[i]=='i'||ch[i]=='j'||ch[i]=='k'||ch[i]=='l'||ch[i]=='m'||ch[i]=='n'||ch[i]=='o'||ch[i]=='p'||ch[i]=='q'||ch[i]=='r'||ch[i]=='s'||ch[i]=='t'||ch[i]=='u'||ch[i]=='v'||ch[i]=='w'||ch[i]=='x'||ch[i]=='y'||ch[i]=='z'||ch[i]=='A'||ch[i]=='B'||ch[i]=='C'||ch[i]=='D'||ch[i]=='E'||ch[i]=='F'||ch[i]=='G'||ch[i]=='H'||ch[i]=='I'||ch[i]=='J'||ch[i]=='K'||ch[i]=='L'||ch[i]=='M'||ch[i]=='N'||ch[i]=='O'||ch[i]=='P'||ch[i]=='Q'||ch[i]=='R'||ch[i]=='S'||ch[i]=='T'||ch[i]=='U'||ch[i]=='V'||ch[i]=='W'||ch[i]=='X'||ch[i]=='Y'||ch[i]=='Z')
{
count1++;
}
else
count2++;
printf("alphabets:"count1);
printf("numbers:"count);
printf("special chars:count2);
}
