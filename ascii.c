#include <stdio.h>
int main()
{
	 char b;		
	b=3;
	while(b<=12)
  {
		printf("%c [%03d] ",b,b);
		b++;
	}
	printf("\n");
	
	return 0;
}
