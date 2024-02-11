#include <stdio.h>

int main()
{
	int x;
	printf("Please input a X Value: ");
	scanf("%d", &x);
	printf("You entered %d \n", x);
	int y;
	printf("Please input a Y percentage value: ");
	scanf("%d", &y);
	printf("You entered %d \n", y);
	int z;
	z = (x*(y/100));
	printf("%d %% of %d is %d", y, x, z);
	return 0;
}
