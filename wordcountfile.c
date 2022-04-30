#include <stdio.h>
#include <string.h>
#pragma warning (disable:4996)

int main()
{
	FILE* fp;
	const int MAX_LENGTH = 255;
	char buff[MAX_LENGTH];
	const char *fname = "test.txt";

	int cnt = 0, cnt_1 = 0;

	fp = fopen(fname, "r");

	if (fp == NULL)
	{
		printf("Error opening file '%s'", fname);
		return 0;
	}

	while (fgets(buff, MAX_LENGTH, fp)) {
		for (int i = 0; i < sizeof(buff); i++) {

			if ((buff[i] != ' ' && buff[i+1] == ' ') || (buff[i] != ' ' && buff[i+1] == '\0'))
				cnt++;

		}

		printf("%s - %d words\n", buff, cnt);

	}

	fclose(fp);
}