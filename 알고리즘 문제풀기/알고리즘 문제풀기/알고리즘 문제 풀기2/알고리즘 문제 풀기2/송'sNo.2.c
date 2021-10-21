#include <stdio.h>
#pragma warning(disable: 4996)

geometric() {
	static int n = 2;
	printf("%d	", n);

	n *= 2;
}

int main() {

	int i, n;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		geometric();
	}

	return 0;
}