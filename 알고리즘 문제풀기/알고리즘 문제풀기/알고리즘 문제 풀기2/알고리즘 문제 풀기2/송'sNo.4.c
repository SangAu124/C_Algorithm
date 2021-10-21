#include <stdio.h>
#pragma warning(disable: 4996)

int getSizeOfString(char* str) {
	int size = 0;
	int i = 0;
	while (str[i] != '\0') { 
		size += str[i];
		i++;
	}

	return size;
}

int main() {

	char h1[50];
	char h2[50];
	scanf("%s", h1);
	scanf("%s", h2);

	int sh1 = getSizeOfString(h1);
	int sh2 = getSizeOfString(h2);

	if (strcmp(h1, h2) == 0) {
		printf("°°´Ù.");
	}
	else {
		printf("%s", sh1 > sh2 ? h1 : h2);
	}

	return 0;
}