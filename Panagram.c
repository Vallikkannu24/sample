#include<stdio.h>
#include<conio.h>
void main()
{
		
char c[30];
char aa='a';
int count,count1=0;
int n;
scanf("%d",&n);
for( int i=0;i<n;i++)
{
scanf("%c",&c[i]);
}

	if(n<26)
{
printf("string is not a panagram");
getch();
exit(1);
}

		
		for(int i=0;i<25;i++)
		{
			
			count=0;
			
			for(int j=0;j<n;j++)
			{
				if(aa==c[j])
				{
				count++;
				count1++;
				
				}
			
			}
			if(count!=1)
			{
				printf("String is not a pangram");
				break;
			}
			aa++;
		}
		if(count1>=25)
		{
			printf("String is a Pangram");
		
		}

	}


