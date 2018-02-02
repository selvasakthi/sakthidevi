#include<stdio.h>
int main()
{
    int sum,i,count=0;
    printf("Enter a number: ");
    scanf("%d",&sum);
    for(i=2;i<=sum/2;i++){
        if(sum%i==0){
         count++;
        }
    }
   if(count==0&&sum!= 1)
        printf("%d is a prime number",sum);
   else
      printf("%d is not a prime number",sum);
   return 0;
}
