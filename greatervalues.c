#include<stdio.h>
int main()
{
	int x;
	printf("Enter the 1st value: \n");
	scanf("%d", &x);
	int y;
        printf("Enter the 2nd value: \n");
        scanf("%d", &y);
	if (x > y)
	  printf("The 1st number is larger \n");
	if (x < y)
          printf("The 2nd number is larger \n");
	if (x == y)
          printf("The numbers are equal \n");
	return 0;
}
