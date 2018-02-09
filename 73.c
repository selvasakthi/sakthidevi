#include<stdio.h>
int main()
{
    int N,L,R;
    printf("enter the value");
    scanf("%d",&N);
    printf("enter two value");
    scanf("%d %d",&L,&R);
    if((L<N)&&(N<R))
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
}
