#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *line = 0;
	size_t buffsize = 0;
	ssize_t bytesread;

	while (1)
	{
		printf("$ ");
		fflush(stdout);

		bytesread = getline(&line, &buffsize, stdin);

	if (bytesread == -1)
	{
		printf("\nEnd of file reached.\n");
		break;
			//Error occured//
	}
	printf("%s", line);
	}
	free(line);
	return (0);
}
