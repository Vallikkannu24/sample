#include<stdio.h>
#include<conio.h>
int main()
{
    int a[20],n,i,j,y;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<n;j++)
    {
        for(y=j+1;y<n;y++)
        {
            if(a[j]==a[y])
            {
             printf("%d",a[j]);
                
            }
		
    }
    
}
return 0;
}
