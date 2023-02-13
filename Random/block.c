#include <stdio.h>
int main()
{
int x = 0;
{
	int x = 5;
	printf("Inside the block: x = %d\n", x);
}
printf("Outside the block: x = %d\n", x);
return 0;
}
