#include <stdio.h>
#pragma warning(disable: 4996)

int main() {

	int i, j;
	int a[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
	printf("���� ������ �迭\n");

	for ( i = 0; i < 3; i++) {
		for ( j = 0; j < 3; j++) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}

	printf("\n");

	printf("��� ���� �ٲ� ������ �迭\n");
	i = 0, j = 0;
	while (i < 3) {
		j = 0;
		while (j < 3) {
			printf("%d ", a[j][i]);
			j++;
		}
		printf("\n");
		i++;
	}




	return 0;
}