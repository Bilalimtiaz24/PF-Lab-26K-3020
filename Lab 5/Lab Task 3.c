#include <stdio.h>
int main()
{
	int a=5,b=3,c;
	c = a&b;
	printf("\n%d&%d=%d",a,b,c);
	
	c = a|b;
	printf("\n%d|%d=%d",a,b,c);
	
	c = a^b;
	printf("\n%d^%d=%d",a,b,c);
	
	c=~a;
	printf("\n~%d=%d",a,c);
	
	
	c=~b;
	printf("\n~%d=%d",b,c);
	
	c = a<<b;
	printf("\n%d<<%d=%d",a,b,c);
	
	c = a>>b;
	printf("\n%d>>%d=%d",a,b,c);
	
	return 0;
}