#include<stdio.h>
void main()
{
    int a[10],temp;
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int j=0;j<10;j++)
    {
        for(int k=1;k<10;k++)
        {  
            if(a[j]<a[k])
        {
            temp=a[k];
            a[k]=a[j];
            a[j]=temp;
            
        }
            
            
            
        }
    }
    printf("%d",a[0]);
}
