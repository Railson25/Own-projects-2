
#include <stdio.h>

int count(int n)
{
	static int d = 1;
	
	printf("%d", n);
	printf("%d", n);
	d++;
	
	if(n > 1) count(n - 1);
	printf("%d", n);
}

int main()
{
	printf("%d \n", count(3));
	return 0;
}

