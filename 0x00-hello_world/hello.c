#include <stdio.h>
#include <stdlib.h>

/**
 * main - this prints hello richard
 * return - this return 0
 */

int main(void)
{
	char name[100];
	
	printf("Enter a name\n");

	scanf("%s", name);

	printf("your name is : %s", name);
	return (0);
}
