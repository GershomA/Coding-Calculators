#include<stdio.h>
int main()

{
	int g;
	printf("Input the final grade from 0-100: \n");
	scanf("%d", &g);
	if (g<60)
		printf("Your final letter grade is a F \n")
	if (70>g>=60)
		printf("Your final letter grade is a D \n")
	if (80>g>=70)
		printf("Your final letter grade is a C \n")
	if (90>g>=80)
		printf("Your final letter grade is a B \n")
	if (100>=g>=90)
		printf("Your final letter grade is an A \n")
	return 0;
}
