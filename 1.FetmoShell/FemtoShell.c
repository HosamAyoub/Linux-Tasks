#include <stdio.h>
#include <string.h>

void main(void)
{
	char str[30] = {0};
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
