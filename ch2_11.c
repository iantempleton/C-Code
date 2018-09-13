#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char str1[] = "Kimmy, why must you have pneumonia?";
	char *str2;
	str2 = strstr(str1, "pneumonia");
	int desiredPosition = 0; // begins at position 0 i.e. 'K'

	if(str2 == NULL)
		printf("NULL");

	while(str2 != NULL)
	{
		desiredPosition = str2 - str1 + 1;
		printf("Keyword found at %d\n", &str1[desiredPosition]);
		str2 = strchr(str2 + 1, 'c');
	}
	return 0;
}
