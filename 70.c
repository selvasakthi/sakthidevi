#include <stdio.h>
#include<math.h>
int main()
{
    int n,n1,i;
    printf("enter the number");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        n1=pow(2,i);
        if(n1>n)
        {
            printf("%d",n1);
        }
    }

}


