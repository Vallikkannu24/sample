#include<stdio.h>
void main()
{
    int a[20],n;
    float avg,sum=0.0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
        
    }
    printf("%f\n",sum);
    avg=sum/n;
    printf("%f",avg);
}
