#include<stdio.h>
void main()
{
    int a[20],i,j,temp;
    printf("enter the elements");
    for(i=0;i<=10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=10;i++)
    {
        for(i=j+1;j<=10;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("the sorted elements are");
    for(i=0;i<=10;i++)
    {
        printf("%d",a[i]);
    }
    printf("the smallest element is:",a[0]);
}
