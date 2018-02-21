#include<string.h>
int main()
{
	char a[10];
	int i,len;
	scanf("%s",a);
	len=strlen(a);
	for(i=0;i<len;i++)
	{
	   	printf("%c",a[i]);
    	i++;
	        
	    }
	    for(i=1;a[i]!='\0';i++)
	    {
	 printf("%c",a[i]);
	 i++;
	    
	}
	
	return 0;
}
