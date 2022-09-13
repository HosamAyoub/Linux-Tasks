#include <stdio.h>
#include <string.h>

#define MAX_LENGTH              100

void main(void)
{
	char str[MAX_LENGTH] = {0};
	while(1)
	{
		printf("Enter your words: ");
		scanf(" %[^\n]s", str);
		if (strcmp(str, "exit"))
		{
			printf("You said: %s\n", str);
		}
		else
		{
			printf("Good bye!\n");
			break;
		}
	}
}
