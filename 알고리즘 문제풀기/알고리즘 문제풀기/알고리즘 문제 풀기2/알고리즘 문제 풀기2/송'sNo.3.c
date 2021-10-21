#include <stdio.h>
#pragma warning(disable: 4996)

float find(float* arr) {
	int maxindex = 0;

	for (int i = 0; i < 8; i++) {
		if (arr[maxindex] < arr[i]) {
			maxindex = i;
		}
	}

	return arr[maxindex];
}

int main() {

	float arr[8];
	float max;
	int i;

	for (i = 0; i < 8; i++) {
		scanf("%f", &arr[i]);
	}

	max = find(arr);
	printf("%.1f", max);

	return 0;
}