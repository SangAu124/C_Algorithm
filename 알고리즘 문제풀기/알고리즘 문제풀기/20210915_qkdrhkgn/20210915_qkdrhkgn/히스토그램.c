#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



int main () {
	int input[20] = { 95, 64, 78, 94, 65, 71, 72, 59, 45, 78, 86, 32, 87, 100, 71, 78, 58, 85, 100, 87 };
	int histo[11] = { 0, };

	for (int i = 0; i < 20; i++) {
		histo[input[i] / 10]++;
	}
	for (int i = 0; i < 11; i++) {
		for (int j = 0; j < histo[i]; j++) {
			printf("*", histo[i]);
		}
		printf("\n");
	}

	return 0;
}