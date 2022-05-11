#include <stdio.h>
#include <string.h>
#pragma warning (disable:4996)

int main()
{

	const int MAX_LENGTH = 255;
	char buff[MAX_LENGTH];

	int cnt = 0;

	fgets(buff, MAX_LENGTH, stdin);

	if (buff[0] == 'a' || buff[0] == 'A')
		cnt++;

	for (int i = 0; i < sizeof(buff); i++) {

		if (buff[i] == ' ' && (buff[i + 1] == 'A' || buff[i + 1] == 'a'))
			cnt++;

		
	}

	printf("%d", cnt);
	
}