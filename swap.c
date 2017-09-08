#include <stdio.h>
int main()
{
   int k, l, temp;
   printf("Enter the value of x and y\n");
   scanf("%d%d",&k,&l);
   printf("Before Swapping\k = %d\nl= %d\n",k,l);
   temp = k;
   x= l;
   l= temp;
   printf("After Swapping\nk = %d\nl = %d\n",k,l);
   return 0;
}
