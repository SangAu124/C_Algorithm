#include<stdio.h>
int main(void) {

	int a, b, c, x, y;
	int pay = 0;

	scanf_s("%d %d %d %d %d", &a, &b, &c, &x, &y);

	if (a + b < c * 2)
		printf("%d", a * x + b * y);
	else {
		if (x < y) {
			pay += c * 2 * x;
			pay += (y - x) * b;

			if (pay > c * y * 2)
				pay = c * y * 2;
		}
		else {
			pay += c * 2 * y;
			pay += (x - y) * a;

			if (pay > c * x * 2)
				pay = c * x * 2;
		}
		printf("%d", pay);
	}
	return 0;
}
