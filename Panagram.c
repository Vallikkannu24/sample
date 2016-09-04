#include<stdio.h>
#include<conio.h>
void main()
{
		
char c[30];
char aa;
int count,count1=0;
int n;
scanf("%d",&n);
for( int i=0;i<n;i++)
{
scanf("%c",&c[i];
}

	

		
		for(int i=0;i<26;i++)
		{
			
			count=0;
			aa='a';
			for(int j=0;j<n;j++)
			{
				if(c==c[j])
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
		if(count1>=26)
		{
			printf("String is a Pangram");
		
		}

	}


