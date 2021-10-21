#include <stdio.h>
#pragma warning(disable: 4996)

void cat(char* h1, char* h2) {
	
	int i = 0;
	while (h1[i] != '/0') {
		
		h1[i] = ' ';
		
		i++;
	}
}

int main() {

	char h1[50];
	char h2[50];
	gets(h1);
	gets(h2);
	cat(h1, h2);
	printf("%s", h1);

	return 0;
}