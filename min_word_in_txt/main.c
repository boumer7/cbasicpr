#include <stdio.h>
#include <string.h>
#pragma warning (disable:4996)

int main()
{

	FILE* fp;
	const int MAX_LENGTH = 255;
	char buff[MAX_LENGTH];
	const char *fname = "test.txt";

	int cnt = 0, min = 100;

	fp = fopen(fname, "r");

	if (fp == NULL)
	{
		printf("Error opening file '%s'", fname);
		return 0;
	}

	while (fgets(buff, MAX_LENGTH, fp)) {

		for (int i = 1; i < sizeof(buff); i++) {
			cnt++;
			if (buff[i] == ' ' || buff[i] == '\0') {

				if (cnt < min)
					min = cnt;
			
				cnt = 0;

			}

		}

	}
	printf("min: %d", min);
	printf("postavte 25 pls ubil kucha vremeni");
	fclose(fp);
}