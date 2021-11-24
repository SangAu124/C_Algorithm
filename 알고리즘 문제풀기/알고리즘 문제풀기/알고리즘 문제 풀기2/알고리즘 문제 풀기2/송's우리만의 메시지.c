#include <stdio.h>

int main() {

	int stack[100] = { 0, };



	char c[100] = { '\0', };
	scanf_s("%s", c);
	
	int cnt = 0;
	while (c[cnt] != '\0') {

		cnt++;
	}

	return 0;
}